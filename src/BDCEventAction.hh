#ifndef BDCEVENTACTION_HH
#define BDCEVENTACTION_HH

#include "G4UserEventAction.hh"
#include "G4Event.hh"
#include "globals.hh"
#include "g4root.hh"

class BDCEventAction : public G4UserEventAction
{
  public:
    BDCEventAction();
    virtual ~BDCEventAction();

    // method from the base class
    virtual void BeginOfEventAction(const G4Event *);
    virtual void EndOfEventAction(const G4Event *);

    void AddEnergyDeposit1(G4double edep) { edep1 += edep; }

  private:
    G4double edep1;
};

#endif
