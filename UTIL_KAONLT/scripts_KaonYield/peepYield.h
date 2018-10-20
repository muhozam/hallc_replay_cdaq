//////////////////////////////////////////////////////////
// This class has been automatically generated on
// Fri Jul  6 10:04:53 2018 by ROOT version 6.10/02
// from TTree T/Hall A Analyzer Output DST
// found on file: /home/rambrose/hallc_replay/ROOTfiles/coin_replay_production_4270_-1.root
//////////////////////////////////////////////////////////

#ifndef peepYield_h
#define peepYield_h

#include <TROOT.h>
#include <TChain.h>
#include <TFile.h>
#include <TSelector.h>
#include <TTreeReader.h>
#include <TTreeReaderValue.h>
#include <TTreeReaderArray.h>
#include <TMath.h>
#include <TH2.h>
#include <TF1.h>


// Headers needed by this particular selector


class peepYield : public TSelector {
 public :
  TTreeReader     fReader;  //!the tree reader
  TTree          *fChain = 0;   //!pointer to the analyzed TTree or TChain

  //Declare Histograms
  TH2F           *h2ROC1_Coin_Beta_noID_proton;
  TH2F           *h2ROC1_Coin_Beta_proton;

  TH2F           *h2HMS_electron;
  TH2F           *h2HMS_electron_cut;
  TH1F           *h1SHMS_electron;
  TH1F           *h1SHMS_electron_cut;

  TH2F           *h2SHMSp_kaon;
  TH2F           *h2SHMSp_kaon_cut;
  TH2F           *h2SHMSp_pion;
  TH2F           *h2SHMSp_pion_cut;

  TH1F           *h1SHMS_delta;
  TH1F           *h1SHMS_delta_cut;
  TH1F           *h1HMS_delta;
  TH1F           *h1HMS_delta_cut;

  TH1F           *h1SHMS_th;
  TH1F           *h1SHMS_th_cut;
  TH1F           *h1SHMS_ph;
  TH1F           *h1SHMS_ph_cut;

  TH1F           *h1HMS_th;
  TH1F           *h1HMS_th_cut;
  TH1F           *h1HMS_ph;
  TH1F           *h1HMS_ph_cut;

  TH1F           *h1mmissp;
  TH1F           *h1mmissp_rand;
  TH1F           *h1mmissp_cut;
  TH1F           *h1mmissp_remove;

  TH2F           *h2WvsQ2;
  TH1F           *h1epsilon;
  TH2F           *h2tvsph_q;

  TH1F           *h1pmiss;
  TH1F           *h1pxmiss;
  TH1F           *h1pymiss;
  TH1F           *h1pzmiss;

  TH1F           *h1EDTM;
  

  // Readers to access the data (delete the ones you do not need).
  TTreeReaderArray<Double_t> CTime_epCoinTime_ROC1  = {fReader, "CTime.epCoinTime_ROC1"};
  TTreeReaderArray<Double_t> P_gtr_beta         = {fReader, "P.gtr.beta"};
  TTreeReaderArray<Double_t> P_gtr_th           = {fReader, "P.gtr.th"};
  TTreeReaderArray<Double_t> P_gtr_ph           = {fReader, "P.gtr.ph"};
  TTreeReaderArray<Double_t> H_gtr_beta         = {fReader, "H.gtr.beta"};
  TTreeReaderArray<Double_t> H_gtr_th           = {fReader, "H.gtr.th"};
  TTreeReaderArray<Double_t> H_gtr_ph           = {fReader, "H.gtr.ph"};
  TTreeReaderArray<Double_t> H_cal_etotnorm     = {fReader, "H.cal.etotnorm"}; 
  TTreeReaderArray<Double_t> H_cer_npeSum       = {fReader, "H.cer.npeSum"};
  TTreeReaderArray<Double_t> P_cal_etotnorm     = {fReader, "P.cal.etotnorm"};
  TTreeReaderArray<Double_t> P_aero_npeSum      = {fReader, "P.aero.npeSum"};
  TTreeReaderArray<Double_t> P_hgcer_npeSum     = {fReader, "P.hgcer.npeSum"};
  //TTreeReaderArray<Double_t> P_ngcer_npeSum     = {fReader, "P.ngcer.npeSum"};
  TTreeReaderArray<Double_t> H_gtr_dp           = {fReader, "H.gtr.dp"};
  TTreeReaderArray<Double_t> P_gtr_dp           = {fReader, "P.gtr.dp"};
  TTreeReaderArray<Double_t> P_gtr_p            = {fReader, "P.gtr.p"};
  TTreeReaderArray<Double_t> Q2                 = {fReader, "H.kin.primary.Q2"};
  TTreeReaderArray<Double_t> W                  = {fReader, "H.kin.primary.W"};
  TTreeReaderArray<Double_t> epsilon            = {fReader, "H.kin.primary.epsilon"};
  TTreeReaderArray<Double_t> ph_q               = {fReader, "H.kin.primary.ph_q"};
  TTreeReaderArray<Double_t> emiss              = {fReader, "P.kin.secondary.emiss"};
  TTreeReaderArray<Double_t> pmiss              = {fReader, "P.kin.secondary.pmiss"};
  TTreeReaderArray<Double_t> pmiss_x            = {fReader, "P.kin.secondary.pmiss_x"};
  TTreeReaderArray<Double_t> pmiss_y            = {fReader, "P.kin.secondary.pmiss_y"};
  TTreeReaderArray<Double_t> pmiss_z            = {fReader, "P.kin.secondary.pmiss_z"};
  TTreeReaderArray<Double_t> MandelT            = {fReader, "P.kin.secondary.MandelT"};
  TTreeReaderValue<Int_t>    fEvtType           = {fReader, "fEvtHdr.fEvtType"};

  TTreeReaderValue<Double_t> pEDTM              = {fReader, "T.coin.pEDTM_tdcTime"};


  peepYield(TTree * /*tree*/ =0) {h2ROC1_Coin_Beta_noID_proton=0, h2ROC1_Coin_Beta_proton=0,h2HMS_electron=0, h2HMS_electron_cut=0, h1SHMS_electron=0, h1SHMS_electron_cut=0, h2SHMSp_kaon=0, h2SHMSp_kaon_cut=0, h2SHMSp_pion=0, h2SHMSp_pion_cut=0,h1SHMS_delta=0, h1SHMS_delta_cut=0, h1HMS_delta=0, h1HMS_delta_cut=0, h1SHMS_th=0, h1SHMS_th_cut=0, h1SHMS_ph=0, h1SHMS_ph_cut=0, h1HMS_th=0, h1HMS_th_cut=0, h1HMS_ph=0, h1HMS_ph_cut=0, h1mmissp=0, h1mmissp_rand=0, h1mmissp_cut=0, h1mmissp_remove=0, h2WvsQ2=0, h2tvsph_q=0, h1epsilon=0, h1pmiss=0, h1pxmiss=0, h1pymiss=0, h1pzmiss=0, h1EDTM=0;}
  virtual ~peepYield() { }
  virtual Int_t   Version() const { return 2; }
  virtual void    Begin(TTree *tree);
  virtual void    SlaveBegin(TTree *tree);
  virtual void    Init(TTree *tree);
  virtual Bool_t  Notify();
  virtual Bool_t  Process(Long64_t entry);
  virtual Int_t   GetEntry(Long64_t entry, Int_t getall = 0) { return fChain ? fChain->GetTree()->GetEntry(entry, getall) : 0; }
  virtual void    SetOption(const char *option) { fOption = option; }
  virtual void    SetObject(TObject *obj) { fObject = obj; }
  virtual void    SetInputList(TList *input) { fInput = input; }
  virtual TList  *GetOutputList() const { return fOutput; }
  virtual void    SlaveTerminate();
  virtual void    Terminate();

  ClassDef(peepYield,0);

};

#endif

#ifdef peepYield_cxx
void peepYield::Init(TTree *tree)
{
  // The Init() function is called when the selector needs to initialize
  // a new tree or chain. Typically here the reader is initialized.
  // It is normally not necessary to make changes to the generated
  // code, but the routine can be extended by the user if needed.
  // Init() will be called many times when running on PROOF
  // (once per file to be processed).

  fReader.SetTree(tree);
}

Bool_t peepYield::Notify()
{
  // The Notify() function is called when a new file is opened. This
  // can be either for a new TTree in a TChain or when when a new TTree
  // is started when using PROOF. It is normally not necessary to make changes
  // to the generated code, but the routine can be extended by the
  // user if needed. The return value is currently not used.

  return kTRUE;
}

#endif // #ifdef peepYield_cxx
