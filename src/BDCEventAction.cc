#include "BDCEventAction.hh"

BDCEventAction::BDCEventAction()
: G4UserEventAction()
{
}

BDCEventAction::~BDCEventAction()
{
}

void BDCEventAction::BeginOfEventAction(const G4Event*)
{
  edep1 = 0.;
}

void BDCEventAction::EndOfEventAction(const G4Event*)
{
  G4AnalysisManager* analysisManager = G4AnalysisManager::Instance();

  analysisManager -> FillNtupleDColumn(1, 0, edep1);
  analysisManager -> AddNtupleRow(1);
}
