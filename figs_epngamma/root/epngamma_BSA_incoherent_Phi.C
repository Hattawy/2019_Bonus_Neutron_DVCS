#include "Riostream.h"
#include <iostream>
#include <fstream>
#include <TH2.h>
#include <TStyle.h>
#include <TCanvas.h>
#include <math.h>
#include <TH1D.h>
#include <TH2D.h>
#include <TF1.h>
#include <TFile.h>
#include <time.h>
#include <TMultiGraph.h>
#include <TVector3.h>
#include <TMath.h>
#include <TProfile.h>
#include "TCutG.h"
#include <TGraph.h>
#include <TGraphErrors.h>
#include "TGraph.h"
#include <TLine.h>
#include <TLorentzVector.h>
#include "TSystem.h"
#include "TColor.h"
#include "TLegend.h"
#include "TLatex.h"
#include "TText.h"
#include "TPaveText.h"


void find_ALU_ratio(double my_alu, double my_alu_err, 
                    double free_p_alu, double free_p_alu_err, 
                    double &alu_R,double &alu_R_err)
{
  alu_R = my_alu/free_p_alu;
  alu_R_err = alu_R * sqrt(pow(my_alu_err/my_alu,2) + pow(free_p_alu_err/free_p_alu,2)); 

}




void epngamma_BSA_incoherent_Phi()
{


 gStyle->SetOptStat(1);
 gStyle->SetOptFit(1);

 gStyle->SetLabelSize(0.035, "xyz"); // size of axis value font 
 gStyle->SetTitleSize(0.035, "xyz"); // size of axis title font 
 gStyle->SetTitleFont(22, "xyz"); // font option 
 gStyle->SetLabelFont(22, "xyz");
 gStyle->SetPadBottomMargin(0.22);  
 gStyle->SetPadTopMargin(0.08);
 gStyle->SetPadLeftMargin(0.22);
 gStyle->SetPadRightMargin(0.08);
 gStyle->SetFrameBorderMode(0);
 gStyle->SetPaperSize(20, 24);
 gStyle->SetLabelSize(0.05, "xy");
 gStyle->SetTitleSize(0.06, "xy");
 gStyle->SetTitleSize(0.9);

   TF1 *ffit[6]; 
   for(int i =0; i<6; i++) {  
      ffit[i] = new TF1(Form("ffit[%u]",i), "[0]*sin(x*3.14/180.0) / (1+ [1]*cos(x*3.14/180.0))",0.0,360.0);
      ffit[i]->SetLineColor(kBlack);
      ffit[i]->SetParName(0,"#alpha");
      ffit[i]->SetParName(1,"#beta");
     } 

   TF1 *ffit1[6]; 
   for(int i =0; i<6; i++) {  
      ffit1[i] = new TF1(Form("ffit1[%u]",i), "[0]*sin(x*3.14/180.0) / (1+ [1]*cos(x*3.14/180.0))",0.0,360.0);
      ffit1[i]->SetLineColor(kRed);
      ffit1[i]->SetParName(0,"#alpha");
      ffit1[i]->SetParName(1,"#beta");
     } 

//=========Macro generated from canvas: cxx/
//=========  (Tue Apr 23 11:55:41 2019) by ROOT version 6.12/06
   TCanvas *cxx = new TCanvas("cxx", "",0,0,1200,1000);
   gStyle->SetOptStat(0);
   cxx->SetHighLightColor(2);
   cxx->Range(0,0,1,1);
   cxx->SetFillColor(0);
   cxx->SetBorderMode(0);
   cxx->SetBorderSize(0);
   cxx->SetLeftMargin(0.17);
   cxx->SetRightMargin(0.17);
   cxx->SetTopMargin(0.17);
   cxx->SetBottomMargin(0.17);
   cxx->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: cxx_1
   TPad *cxx_1 = new TPad("cxx_1", "cxx_1",0.01,0.6766667,0.49,0.99);
   cxx_1->Draw();
   cxx_1->cd();
   cxx_1->Range(-100.303,-0.1515152,460.303,0.1515152);
   cxx_1->SetFillColor(0);
   cxx_1->SetBorderMode(0);
   cxx_1->SetBorderSize(2);
   cxx_1->SetLeftMargin(0.17);
   cxx_1->SetRightMargin(0.17);
   cxx_1->SetTopMargin(0.17);
   cxx_1->SetBottomMargin(0.17);
   cxx_1->SetFrameBorderMode(0);
   cxx_1->SetFrameBorderMode(0);
   
   TH1F *hasy__53707 = new TH1F("hasy__53707","",12,-5,365);
   hasy__53707->SetBinContent(1,0.01475272);
   hasy__53707->SetBinContent(2,0.04030516);
   hasy__53707->SetBinContent(3,0.05505782);
   hasy__53707->SetBinContent(4,0.05505771);
   hasy__53707->SetBinContent(5,0.04030487);
   hasy__53707->SetBinContent(6,0.01475231);
   hasy__53707->SetBinContent(7,-0.01475312);
   hasy__53707->SetBinContent(8,-0.04030546);
   hasy__53707->SetBinContent(9,-0.05505792);
   hasy__53707->SetBinContent(10,-0.0550576);
   hasy__53707->SetBinContent(11,-0.04030457);
   hasy__53707->SetBinContent(12,-0.01475191);
   hasy__53707->SetBinError(1, sqrt( pow( 0.00588424/sqrt(8.75), 2) + pow(0.01,2)) );
   hasy__53707->SetBinError(2, sqrt( pow( 0.00620987/sqrt(8.75), 2) + pow(0.01,2)) );
   hasy__53707->SetBinError(3, sqrt( pow( 0.00697297/sqrt(8.75), 2) + pow(0.01,2)) );
   hasy__53707->SetBinError(4, sqrt( pow( 0.00823002/sqrt(8.75), 2) + pow(0.01,2)) );
   hasy__53707->SetBinError(5, sqrt( pow( 0.01028424/sqrt(8.75), 2) + pow(0.01,2)) );
   hasy__53707->SetBinError(6, sqrt( pow( 0.01247278/sqrt(8.75), 2) + pow(0.01,2)) );
   hasy__53707->SetBinError(7, sqrt( pow( 0.01241781/sqrt(8.75), 2) + pow(0.01,2)) );
   hasy__53707->SetBinError(8, sqrt( pow( 0.01037063/sqrt(8.75), 2) + pow(0.01,2)) );
   hasy__53707->SetBinError(9, sqrt( pow( 0.00831450/sqrt(8.75), 2) + pow(0.01,2)) );
   hasy__53707->SetBinError(10,sqrt( pow( 0.00693434/sqrt(8.75), 2) + pow(0.01,2)) );
   hasy__53707->SetBinError(11,sqrt( pow( 0.00624089/sqrt(8.75), 2) + pow(0.01,2)) );
   hasy__53707->SetBinError(12,sqrt( pow( 0.00587850/sqrt(8.75), 2) + pow(0.01,2)) );
   hasy__53707->SetMinimum(-0.1);
   hasy__53707->SetMaximum(0.1);
   hasy__53707->SetEntries(12.68379);
   hasy__53707->SetStats(0);
   hasy__53707->SetMarkerStyle(21);
   hasy__53707->GetXaxis()->SetTitle("#phi_{h} [deg.]");
   hasy__53707->GetXaxis()->CenterTitle(true);
   hasy__53707->GetXaxis()->SetLabelFont(22);
   hasy__53707->GetXaxis()->SetLabelSize(0.05);
   hasy__53707->GetXaxis()->SetTitleSize(0.07);
   hasy__53707->GetXaxis()->SetTitleFont(22);
   hasy__53707->GetYaxis()->SetTitle("A_{LU}");
   hasy__53707->GetYaxis()->CenterTitle(true);
   hasy__53707->GetYaxis()->SetLabelFont(22);
   hasy__53707->GetYaxis()->SetLabelSize(0.05);
   hasy__53707->GetYaxis()->SetTitleSize(0.07);
   hasy__53707->GetYaxis()->SetTitleOffset(1.2);
   hasy__53707->GetYaxis()->SetTitleFont(22);
   hasy__53707->GetZaxis()->SetLabelFont(22);
   hasy__53707->GetZaxis()->SetLabelSize(0.03);
   hasy__53707->GetZaxis()->SetTitleSize(0.035);
   hasy__53707->GetZaxis()->SetTitleFont(22);
   hasy__53707->Draw("");
   hasy__53707->Fit(ffit[0]);
   TLatex *   tex = new TLatex(10,-0.03,"0.05< p_{s} <0.12");
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(10,-0.06,"20< #theta_{s} <70");
   tex->SetLineWidth(2);
   tex->Draw();
   
   TH1F *hasy__53708 = new TH1F("hasy__53708","",9,-5,365);
   hasy__53708->SetBinContent(1,0.01949519);
   hasy__53708->SetBinContent(2,0.04936352);
   hasy__53708->SetBinContent(3,0.056134);
   hasy__53708->SetBinContent(4,0.03663864);
   hasy__53708->SetBinContent(5,-4.187454e-07);
   hasy__53708->SetBinContent(6,-0.03663928);
   hasy__53708->SetBinContent(7,-0.05613415);
   hasy__53708->SetBinContent(8,-0.0493631);
   hasy__53708->SetBinContent(9,-0.01949441);
   hasy__53708->SetBinError(1, sqrt( pow( 0.0162902/sqrt(8.75), 2) + pow(0.01,2)) );
   hasy__53708->SetBinError(2, sqrt( pow( 0.0180104/sqrt(8.75), 2) + pow(0.01,2)) );
   hasy__53708->SetBinError(3, sqrt( pow( 0.0218295/sqrt(8.75), 2) + pow(0.01,2)) );
   hasy__53708->SetBinError(4, sqrt( pow( 0.0293625/sqrt(8.75), 2) + pow(0.01,2)) );
   hasy__53708->SetBinError(5, sqrt( pow( 0.0344132/sqrt(8.75), 2) + pow(0.01,2)) );
   hasy__53708->SetBinError(6, sqrt( pow( 0.0290251/sqrt(8.75), 2) + pow(0.01,2)) );
   hasy__53708->SetBinError(7, sqrt( pow( 0.0218747/sqrt(8.75), 2) + pow(0.01,2)) );
   hasy__53708->SetBinError(8, sqrt( pow( 0.0178212/sqrt(8.75), 2) + pow(0.01,2)) );
   hasy__53708->SetBinError(9, sqrt( pow( 0.0161438/sqrt(8.75), 2) + pow(0.01,2)) );
   hasy__53708->SetMinimum(-0.1);
   hasy__53708->SetMaximum(0.1);
   hasy__53708->SetEntries(9.072696);
   hasy__53708->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   hasy__53708->SetLineColor(ci);

   ci = TColor::GetColor("#0000ff");
   hasy__53708->SetMarkerColor(ci);
   hasy__53708->SetMarkerStyle(21);
   hasy__53708->GetXaxis()->SetTitle("#phi_{h} [deg.]");
   hasy__53708->GetXaxis()->CenterTitle(true);
   hasy__53708->GetXaxis()->SetLabelFont(22);
   hasy__53708->GetXaxis()->SetLabelSize(0.05);
   hasy__53708->GetXaxis()->SetTitleSize(0.07);
   hasy__53708->GetXaxis()->SetTitleFont(22);
   hasy__53708->GetYaxis()->SetTitle("A_{LU}");
   hasy__53708->GetYaxis()->CenterTitle(true);
   hasy__53708->GetYaxis()->SetLabelFont(22);
   hasy__53708->GetYaxis()->SetLabelSize(0.05);
   hasy__53708->GetYaxis()->SetTitleSize(0.07);
   hasy__53708->GetYaxis()->SetTitleOffset(1.2);
   hasy__53708->GetYaxis()->SetTitleFont(22);
   hasy__53708->GetZaxis()->SetLabelFont(22);
   hasy__53708->GetZaxis()->SetLabelSize(0.03);
   hasy__53708->GetZaxis()->SetTitleSize(0.035);
   hasy__53708->GetZaxis()->SetTitleFont(22);
   hasy__53708->Draw("same");
   hasy__53708->Fit(ffit1[0]);
   cxx_1->Modified();
   cxx->cd();
  
// ------------>Primitives in pad: cxx_2
   TPad *cxx_2 = new TPad("cxx_2", "cxx_2",0.51,0.6766667,0.99,0.99);
   cxx_2->Draw();
   cxx_2->cd();
   cxx_2->Range(-100.303,-0.1515152,460.303,0.1515152);
   cxx_2->SetFillColor(0);
   cxx_2->SetBorderMode(0);
   cxx_2->SetBorderSize(2);
   cxx_2->SetLeftMargin(0.17);
   cxx_2->SetRightMargin(0.17);
   cxx_2->SetTopMargin(0.17);
   cxx_2->SetBottomMargin(0.17);
   cxx_2->SetFrameBorderMode(0);
   cxx_2->SetFrameBorderMode(0);
   
   TH1F *hasy__53709 = new TH1F("hasy__53709","",12,-5,365);
   hasy__53709->SetBinContent(1,0.01475272);
   hasy__53709->SetBinContent(2,0.04030516);
   hasy__53709->SetBinContent(3,0.05505782);
   hasy__53709->SetBinContent(4,0.05505771);
   hasy__53709->SetBinContent(5,0.04030487);
   hasy__53709->SetBinContent(6,0.01475231);
   hasy__53709->SetBinContent(7,-0.01475312);
   hasy__53709->SetBinContent(8,-0.04030546);
   hasy__53709->SetBinContent(9,-0.05505792);
   hasy__53709->SetBinContent(10,-0.0550576);
   hasy__53709->SetBinContent(11,-0.04030457);
   hasy__53709->SetBinContent(12,-0.01475191);
   hasy__53709->SetBinError(1, sqrt( pow( 0.00551095/sqrt(8.75), 2) + pow(0.01,2)) );
   hasy__53709->SetBinError(2, sqrt( pow( 0.00577145/sqrt(8.75), 2) + pow(0.01,2)) );
   hasy__53709->SetBinError(3, sqrt( pow( 0.00653352/sqrt(8.75), 2) + pow(0.01,2)) );
   hasy__53709->SetBinError(4, sqrt( pow( 0.00767780/sqrt(8.75), 2) + pow(0.01,2)) );
   hasy__53709->SetBinError(5, sqrt( pow( 0.00959585/sqrt(8.75), 2) + pow(0.01,2)) );
   hasy__53709->SetBinError(6, sqrt( pow( 0.01167298/sqrt(8.75), 2) + pow(0.01,2)) );
   hasy__53709->SetBinError(7, sqrt( pow( 0.01163467/sqrt(8.75), 2) + pow(0.01,2)) );
   hasy__53709->SetBinError(8, sqrt( pow( 0.00957567/sqrt(8.75), 2) + pow(0.01,2)) );
   hasy__53709->SetBinError(9, sqrt( pow( 0.00777374/sqrt(8.75), 2) + pow(0.01,2)) );
   hasy__53709->SetBinError(10,sqrt( pow( 0.00650604/sqrt(8.75), 2) + pow(0.01,2)) );
   hasy__53709->SetBinError(11,sqrt( pow( 0.00580374/sqrt(8.75), 2) + pow(0.01,2)) );
   hasy__53709->SetBinError(12,sqrt( pow( 0.00548236/sqrt(8.75), 2) + pow(0.01,2)) );
   hasy__53709->SetMinimum(-0.1);
   hasy__53709->SetMaximum(0.1);
   hasy__53709->SetEntries(12.01037);
   hasy__53709->SetStats(0);
   hasy__53709->SetMarkerStyle(21);
   hasy__53709->GetXaxis()->SetTitle("#phi_{h} [deg.]");
   hasy__53709->GetXaxis()->CenterTitle(true);
   hasy__53709->GetXaxis()->SetLabelFont(22);
   hasy__53709->GetXaxis()->SetLabelSize(0.05);
   hasy__53709->GetXaxis()->SetTitleSize(0.07);
   hasy__53709->GetXaxis()->SetTitleFont(22);
   hasy__53709->GetYaxis()->SetTitle("A_{LU}");
   hasy__53709->GetYaxis()->CenterTitle(true);
   hasy__53709->GetYaxis()->SetLabelFont(22);
   hasy__53709->GetYaxis()->SetLabelSize(0.05);
   hasy__53709->GetYaxis()->SetTitleSize(0.07);
   hasy__53709->GetYaxis()->SetTitleOffset(1.2);
   hasy__53709->GetYaxis()->SetTitleFont(22);
   hasy__53709->GetZaxis()->SetLabelFont(22);
   hasy__53709->GetZaxis()->SetLabelSize(0.03);
   hasy__53709->GetZaxis()->SetTitleSize(0.035);
   hasy__53709->GetZaxis()->SetTitleFont(22);
   hasy__53709->Draw("");
   hasy__53709->Fit(ffit[1]);
      tex = new TLatex(10,-0.03,"0.05< p_{s} <0.12");
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(10,-0.06,"70< #theta_{s} <110");
   tex->SetLineWidth(2);
   tex->Draw();
   
   TH1F *hasy__53710 = new TH1F("hasy__53710","",9,-5,365);
   hasy__53710->SetBinContent(1,0.01949519);
   hasy__53710->SetBinContent(2,0.04936352);
   hasy__53710->SetBinContent(3,0.056134);
   hasy__53710->SetBinContent(4,0.03663864);
   hasy__53710->SetBinContent(5,-4.187454e-07);
   hasy__53710->SetBinContent(6,-0.03663928);
   hasy__53710->SetBinContent(7,-0.05613415);
   hasy__53710->SetBinContent(8,-0.0493631);
   hasy__53710->SetBinContent(9,-0.01949441);
   hasy__53710->SetBinError(1, sqrt( pow( 0.01504496/sqrt(8.75), 2) + pow(0.01,2)) );
   hasy__53710->SetBinError(2, sqrt( pow( 0.01677678/sqrt(8.75), 2) + pow(0.01,2)) );
   hasy__53710->SetBinError(3, sqrt( pow( 0.02004896/sqrt(8.75), 2) + pow(0.01,2)) );
   hasy__53710->SetBinError(4, sqrt( pow( 0.02718673/sqrt(8.75), 2) + pow(0.01,2)) );
   hasy__53710->SetBinError(5, sqrt( pow( 0.03292392/sqrt(8.75), 2) + pow(0.01,2)) );
   hasy__53710->SetBinError(6, sqrt( pow( 0.02667853/sqrt(8.75), 2) + pow(0.01,2)) );
   hasy__53710->SetBinError(7, sqrt( pow( 0.02031167/sqrt(8.75), 2) + pow(0.01,2)) );
   hasy__53710->SetBinError(8, sqrt( pow( 0.01691961/sqrt(8.75), 2) + pow(0.01,2)) );
   hasy__53710->SetBinError(9, sqrt( pow( 0.01517397/sqrt(8.75), 2) + pow(0.01,2)) );
   hasy__53710->SetMinimum(-0.1);
   hasy__53710->SetMaximum(0.1);
   hasy__53710->SetEntries(9.006744);
   hasy__53710->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   hasy__53710->SetLineColor(ci);

   ci = TColor::GetColor("#0000ff");
   hasy__53710->SetMarkerColor(ci);
   hasy__53710->SetMarkerStyle(21);
   hasy__53710->GetXaxis()->SetTitle("#phi_{h} [deg.]");
   hasy__53710->GetXaxis()->CenterTitle(true);
   hasy__53710->GetXaxis()->SetLabelFont(22);
   hasy__53710->GetXaxis()->SetLabelSize(0.05);
   hasy__53710->GetXaxis()->SetTitleSize(0.07);
   hasy__53710->GetXaxis()->SetTitleFont(22);
   hasy__53710->GetYaxis()->SetTitle("A_{LU}");
   hasy__53710->GetYaxis()->CenterTitle(true);
   hasy__53710->GetYaxis()->SetLabelFont(22);
   hasy__53710->GetYaxis()->SetLabelSize(0.05);
   hasy__53710->GetYaxis()->SetTitleSize(0.07);
   hasy__53710->GetYaxis()->SetTitleOffset(1.2);
   hasy__53710->GetYaxis()->SetTitleFont(22);
   hasy__53710->GetZaxis()->SetLabelFont(22);
   hasy__53710->GetZaxis()->SetLabelSize(0.03);
   hasy__53710->GetZaxis()->SetTitleSize(0.035);
   hasy__53710->GetZaxis()->SetTitleFont(22);
   hasy__53710->Draw("same");
   hasy__53710->Fit(ffit1[1]);
   cxx_2->Modified();
   cxx->cd();
  
// ------------>Primitives in pad: cxx_3
   TPad *cxx_3 = new TPad("cxx_3", "cxx_3",0.01,0.3433333,0.49,0.6566667);
   cxx_3->Draw();
   cxx_3->cd();
   cxx_3->Range(-100.303,-0.1515152,460.303,0.1515152);
   cxx_3->SetFillColor(0);
   cxx_3->SetBorderMode(0);
   cxx_3->SetBorderSize(2);
   cxx_3->SetLeftMargin(0.17);
   cxx_3->SetRightMargin(0.17);
   cxx_3->SetTopMargin(0.17);
   cxx_3->SetBottomMargin(0.17);
   cxx_3->SetFrameBorderMode(0);
   cxx_3->SetFrameBorderMode(0);
   
   TH1F *hasy__53711 = new TH1F("hasy__53711","",12,-5,365);
   hasy__53711->SetBinContent(1,0.01475272);
   hasy__53711->SetBinContent(2,0.04030516);
   hasy__53711->SetBinContent(3,0.05505782);
   hasy__53711->SetBinContent(4,0.05505771);
   hasy__53711->SetBinContent(5,0.04030487);
   hasy__53711->SetBinContent(6,0.01475231);
   hasy__53711->SetBinContent(7,-0.01475312);
   hasy__53711->SetBinContent(8,-0.04030546);
   hasy__53711->SetBinContent(9,-0.05505792);
   hasy__53711->SetBinContent(10,-0.0550576);
   hasy__53711->SetBinContent(11,-0.04030457);
   hasy__53711->SetBinContent(12,-0.01475191);
   hasy__53711->SetBinError(1, sqrt( pow( 0.00605516/sqrt(8.75), 2) + pow(0.01,2)) );
   hasy__53711->SetBinError(2, sqrt( pow( 0.00636981/sqrt(8.75), 2) + pow(0.01,2)) );
   hasy__53711->SetBinError(3, sqrt( pow( 0.00710867/sqrt(8.75), 2) + pow(0.01,2)) );
   hasy__53711->SetBinError(4, sqrt( pow( 0.00849888/sqrt(8.75), 2) + pow(0.01,2)) );
   hasy__53711->SetBinError(5, sqrt( pow( 0.01044971/sqrt(8.75), 2) + pow(0.01,2)) );
   hasy__53711->SetBinError(6, sqrt( pow( 0.01292442/sqrt(8.75), 2) + pow(0.01,2)) );
   hasy__53711->SetBinError(7, sqrt( pow( 0.01278818/sqrt(8.75), 2) + pow(0.01,2)) );
   hasy__53711->SetBinError(8, sqrt( pow( 0.01048289/sqrt(8.75), 2) + pow(0.01,2)) );
   hasy__53711->SetBinError(9, sqrt( pow( 0.00847569/sqrt(8.75), 2) + pow(0.01,2)) );
   hasy__53711->SetBinError(10,sqrt( pow( 0.00712977/sqrt(8.75), 2) + pow(0.01,2)) );
   hasy__53711->SetBinError(11,sqrt( pow( 0.00636744/sqrt(8.75), 2) + pow(0.01,2)) );
   hasy__53711->SetBinError(12,sqrt( pow( 0.00604940/sqrt(8.75), 2) + pow(0.01,2)) );
   hasy__53711->SetMinimum(-0.1);
   hasy__53711->SetMaximum(0.1);
   hasy__53711->SetEntries(13.60016);
   hasy__53711->SetStats(0);
   hasy__53711->SetMarkerStyle(21);
   hasy__53711->GetXaxis()->SetTitle("#phi_{h} [deg.]");
   hasy__53711->GetXaxis()->CenterTitle(true);
   hasy__53711->GetXaxis()->SetLabelFont(22);
   hasy__53711->GetXaxis()->SetLabelSize(0.05);
   hasy__53711->GetXaxis()->SetTitleSize(0.07);
   hasy__53711->GetXaxis()->SetTitleFont(22);
   hasy__53711->GetYaxis()->SetTitle("A_{LU}");
   hasy__53711->GetYaxis()->CenterTitle(true);
   hasy__53711->GetYaxis()->SetLabelFont(22);
   hasy__53711->GetYaxis()->SetLabelSize(0.05);
   hasy__53711->GetYaxis()->SetTitleSize(0.07);
   hasy__53711->GetYaxis()->SetTitleOffset(1.2);
   hasy__53711->GetYaxis()->SetTitleFont(22);
   hasy__53711->GetZaxis()->SetLabelFont(22);
   hasy__53711->GetZaxis()->SetLabelSize(0.03);
   hasy__53711->GetZaxis()->SetTitleSize(0.035);
   hasy__53711->GetZaxis()->SetTitleFont(22);
   hasy__53711->Draw("");
   hasy__53711->Fit(ffit[2]);
      tex = new TLatex(10,-0.03,"0.05< p_{s} <0.12");
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(10,-0.06,"110< #theta_{s} <159");
   tex->SetLineWidth(2);
   tex->Draw();
   
   TH1F *hasy__53712 = new TH1F("hasy__53712","",9,-5,365);
   hasy__53712->SetBinContent(1,0.01949519);
   hasy__53712->SetBinContent(2,0.04936352);
   hasy__53712->SetBinContent(3,0.056134);
   hasy__53712->SetBinContent(4,0.03663864);
   hasy__53712->SetBinContent(5,-4.187454e-07);
   hasy__53712->SetBinContent(6,-0.03663928);
   hasy__53712->SetBinContent(7,-0.05613415);
   hasy__53712->SetBinContent(8,-0.0493631);
   hasy__53712->SetBinContent(9,-0.01949441);
   hasy__53712->SetBinError(1, sqrt( pow( 0.01664649/sqrt(8.75), 2) + pow(0.01,2)) );
   hasy__53712->SetBinError(2, sqrt( pow( 0.01801173/sqrt(8.75), 2) + pow(0.01,2)) );
   hasy__53712->SetBinError(3, sqrt( pow( 0.02233545/sqrt(8.75), 2) + pow(0.01,2)) );
   hasy__53712->SetBinError(4, sqrt( pow( 0.03038791/sqrt(8.75), 2) + pow(0.01,2)) );
   hasy__53712->SetBinError(5, sqrt( pow( 0.03525482/sqrt(8.75), 2) + pow(0.01,2)) );
   hasy__53712->SetBinError(6, sqrt( pow( 0.02933102/sqrt(8.75), 2) + pow(0.01,2)) );
   hasy__53712->SetBinError(7, sqrt( pow( 0.02263404/sqrt(8.75), 2) + pow(0.01,2)) );
   hasy__53712->SetBinError(8, sqrt( pow( 0.01843874/sqrt(8.75), 2) + pow(0.01,2)) );
   hasy__53712->SetBinError(9, sqrt( pow( 0.01680259/sqrt(8.75), 2) + pow(0.01,2)) );
   hasy__53712->SetMinimum(-0.1);
   hasy__53712->SetMaximum(0.1);
   hasy__53712->SetEntries(10.79803);
   hasy__53712->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   hasy__53712->SetLineColor(ci);

   ci = TColor::GetColor("#0000ff");
   hasy__53712->SetMarkerColor(ci);
   hasy__53712->SetMarkerStyle(21);
   hasy__53712->GetXaxis()->SetTitle("#phi_{h} [deg.]");
   hasy__53712->GetXaxis()->CenterTitle(true);
   hasy__53712->GetXaxis()->SetLabelFont(22);
   hasy__53712->GetXaxis()->SetLabelSize(0.05);
   hasy__53712->GetXaxis()->SetTitleSize(0.07);
   hasy__53712->GetXaxis()->SetTitleFont(22);
   hasy__53712->GetYaxis()->SetTitle("A_{LU}");
   hasy__53712->GetYaxis()->CenterTitle(true);
   hasy__53712->GetYaxis()->SetLabelFont(22);
   hasy__53712->GetYaxis()->SetLabelSize(0.05);
   hasy__53712->GetYaxis()->SetTitleSize(0.07);
   hasy__53712->GetYaxis()->SetTitleOffset(1.2);
   hasy__53712->GetYaxis()->SetTitleFont(22);
   hasy__53712->GetZaxis()->SetLabelFont(22);
   hasy__53712->GetZaxis()->SetLabelSize(0.03);
   hasy__53712->GetZaxis()->SetTitleSize(0.035);
   hasy__53712->GetZaxis()->SetTitleFont(22);
   hasy__53712->Draw("same");
   hasy__53712->Fit(ffit1[2]);
   cxx_3->Modified();
   cxx->cd();
  
// ------------>Primitives in pad: cxx_4
   TPad *cxx_4 = new TPad("cxx_4", "cxx_4",0.51,0.3433333,0.99,0.6566667);
   cxx_4->Draw();
   cxx_4->cd();
   cxx_4->Range(-100.303,-0.1515152,460.303,0.1515152);
   cxx_4->SetFillColor(0);
   cxx_4->SetBorderMode(0);
   cxx_4->SetBorderSize(2);
   cxx_4->SetLeftMargin(0.17);
   cxx_4->SetRightMargin(0.17);
   cxx_4->SetTopMargin(0.17);
   cxx_4->SetBottomMargin(0.17);
   cxx_4->SetFrameBorderMode(0);
   cxx_4->SetFrameBorderMode(0);
   
   TH1F *hasy__53713 = new TH1F("hasy__53713","",12,-5,365);
   hasy__53713->SetBinContent(1,0.01366568);
   hasy__53713->SetBinContent(2,0.03733531);
   hasy__53713->SetBinContent(3,0.05100093);
   hasy__53713->SetBinContent(4,0.05100083);
   hasy__53713->SetBinContent(5,0.03733503);
   hasy__53713->SetBinContent(6,0.0136653);
   hasy__53713->SetBinContent(7,-0.01366605);
   hasy__53713->SetBinContent(8,-0.03733558);
   hasy__53713->SetBinContent(9,-0.05100103);
   hasy__53713->SetBinContent(10,-0.05100073);
   hasy__53713->SetBinContent(11,-0.03733476);
   hasy__53713->SetBinContent(12,-0.01366493);
   hasy__53713->SetBinError(1, sqrt( pow( 0.00795961/sqrt(8.75), 2) + pow(0.01,2)) );
   hasy__53713->SetBinError(2, sqrt( pow( 0.00845009/sqrt(8.75), 2) + pow(0.01,2)) );
   hasy__53713->SetBinError(3, sqrt( pow( 0.00931985/sqrt(8.75), 2) + pow(0.01,2)) );
   hasy__53713->SetBinError(4, sqrt( pow( 0.01114191/sqrt(8.75), 2) + pow(0.01,2)) );
   hasy__53713->SetBinError(5, sqrt( pow( 0.01374305/sqrt(8.75), 2) + pow(0.01,2)) );
   hasy__53713->SetBinError(6, sqrt( pow( 0.01671137/sqrt(8.75), 2) + pow(0.01,2)) );
   hasy__53713->SetBinError(7, sqrt( pow( 0.01701564/sqrt(8.75), 2) + pow(0.01,2)) );
   hasy__53713->SetBinError(8, sqrt( pow( 0.01391447/sqrt(8.75), 2) + pow(0.01,2)) );
   hasy__53713->SetBinError(9, sqrt( pow( 0.01104084/sqrt(8.75), 2) + pow(0.01,2)) );
   hasy__53713->SetBinError(10,sqrt( pow( 0.00928814/sqrt(8.75), 2) + pow(0.01,2)) );
   hasy__53713->SetBinError(11,sqrt( pow( 0.00839924/sqrt(8.75), 2) + pow(0.01,2)) );
   hasy__53713->SetBinError(12,sqrt( pow( 0.00793660/sqrt(8.75), 2) + pow(0.01,2)) );
   hasy__53713->SetMinimum(-0.1);
   hasy__53713->SetMaximum(0.1);
   hasy__53713->SetEntries(12.02253);
   hasy__53713->SetStats(0);
   hasy__53713->SetMarkerStyle(21);
   hasy__53713->GetXaxis()->SetTitle("#phi_{h} [deg.]");
   hasy__53713->GetXaxis()->CenterTitle(true);
   hasy__53713->GetXaxis()->SetLabelFont(22);
   hasy__53713->GetXaxis()->SetLabelSize(0.05);
   hasy__53713->GetXaxis()->SetTitleSize(0.07);
   hasy__53713->GetXaxis()->SetTitleFont(22);
   hasy__53713->GetYaxis()->SetTitle("A_{LU}");
   hasy__53713->GetYaxis()->CenterTitle(true);
   hasy__53713->GetYaxis()->SetLabelFont(22);
   hasy__53713->GetYaxis()->SetLabelSize(0.05);
   hasy__53713->GetYaxis()->SetTitleSize(0.07);
   hasy__53713->GetYaxis()->SetTitleOffset(1.2);
   hasy__53713->GetYaxis()->SetTitleFont(22);
   hasy__53713->GetZaxis()->SetLabelFont(22);
   hasy__53713->GetZaxis()->SetLabelSize(0.03);
   hasy__53713->GetZaxis()->SetTitleSize(0.035);
   hasy__53713->GetZaxis()->SetTitleFont(22);
   hasy__53713->Draw("");
   hasy__53713->Fit(ffit[3]);
      tex = new TLatex(10,-0.03,"0.12< p_{s} <0.35");
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(10,-0.06,"20< #theta_{s} <70");
   tex->SetLineWidth(2);
   tex->Draw();
   
   TH1F *hasy__53714 = new TH1F("hasy__53714","",9,-5,365);
   hasy__53714->SetBinContent(1,0.0180587);
   hasy__53714->SetBinContent(2,0.04572621);
   hasy__53714->SetBinContent(3,0.05199781);
   hasy__53714->SetBinContent(4,0.03393896);
   hasy__53714->SetBinContent(5,-3.878905e-07);
   hasy__53714->SetBinContent(6,-0.03393955);
   hasy__53714->SetBinContent(7,-0.05199794);
   hasy__53714->SetBinContent(8,-0.04572582);
   hasy__53714->SetBinContent(9,-0.01805797);
   hasy__53714->SetBinError(1, sqrt( pow( 0.0220972/sqrt(8.75), 2) + pow(0.01,2)) );
   hasy__53714->SetBinError(2, sqrt( pow( 0.0246653/sqrt(8.75), 2) + pow(0.01,2)) );
   hasy__53714->SetBinError(3, sqrt( pow( 0.0299214/sqrt(8.75), 2) + pow(0.01,2)) );
   hasy__53714->SetBinError(4, sqrt( pow( 0.0391115/sqrt(8.75), 2) + pow(0.01,2)) );
   hasy__53714->SetBinError(5, sqrt( pow( 0.0496711/sqrt(8.75), 2) + pow(0.01,2)) );
   hasy__53714->SetBinError(6, sqrt( pow( 0.0390245/sqrt(8.75), 2) + pow(0.01,2)) );
   hasy__53714->SetBinError(7, sqrt( pow( 0.0298700/sqrt(8.75), 2) + pow(0.01,2)) );
   hasy__53714->SetBinError(8, sqrt( pow( 0.0243838/sqrt(8.75), 2) + pow(0.01,2)) );
   hasy__53714->SetBinError(9, sqrt( pow( 0.0215724/sqrt(8.75), 2) + pow(0.01,2)) );
   hasy__53714->SetMinimum(-0.1);
   hasy__53714->SetMaximum(0.1);
   hasy__53714->SetEntries(10.28106);
   hasy__53714->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   hasy__53714->SetLineColor(ci);

   ci = TColor::GetColor("#0000ff");
   hasy__53714->SetMarkerColor(ci);
   hasy__53714->SetMarkerStyle(21);
   hasy__53714->GetXaxis()->SetTitle("#phi_{h} [deg.]");
   hasy__53714->GetXaxis()->CenterTitle(true);
   hasy__53714->GetXaxis()->SetLabelFont(22);
   hasy__53714->GetXaxis()->SetLabelSize(0.05);
   hasy__53714->GetXaxis()->SetTitleSize(0.07);
   hasy__53714->GetXaxis()->SetTitleFont(22);
   hasy__53714->GetYaxis()->SetTitle("A_{LU}");
   hasy__53714->GetYaxis()->CenterTitle(true);
   hasy__53714->GetYaxis()->SetLabelFont(22);
   hasy__53714->GetYaxis()->SetLabelSize(0.05);
   hasy__53714->GetYaxis()->SetTitleSize(0.07);
   hasy__53714->GetYaxis()->SetTitleOffset(1.2);
   hasy__53714->GetYaxis()->SetTitleFont(22);
   hasy__53714->GetZaxis()->SetLabelFont(22);
   hasy__53714->GetZaxis()->SetLabelSize(0.03);
   hasy__53714->GetZaxis()->SetTitleSize(0.035);
   hasy__53714->GetZaxis()->SetTitleFont(22);
   hasy__53714->Draw("same");
   hasy__53714->Fit(ffit1[3]);
   cxx_4->Modified();
   cxx->cd();
  
// ------------>Primitives in pad: cxx_5
   TPad *cxx_5 = new TPad("cxx_5", "cxx_5",0.01,0.01,0.49,0.3233333);
   cxx_5->Draw();
   cxx_5->cd();
   cxx_5->Range(-100.303,-0.1515152,460.303,0.1515152);
   cxx_5->SetFillColor(0);
   cxx_5->SetBorderMode(0);
   cxx_5->SetBorderSize(2);
   cxx_5->SetLeftMargin(0.17);
   cxx_5->SetRightMargin(0.17);
   cxx_5->SetTopMargin(0.17);
   cxx_5->SetBottomMargin(0.17);
   cxx_5->SetFrameBorderMode(0);
   cxx_5->SetFrameBorderMode(0);
   
   TH1F *hasy__53715 = new TH1F("hasy__53715","",12,-5,365);
   hasy__53715->SetBinContent(1,0.01366568);
   hasy__53715->SetBinContent(2,0.03733531);
   hasy__53715->SetBinContent(3,0.05100093);
   hasy__53715->SetBinContent(4,0.05100083);
   hasy__53715->SetBinContent(5,0.03733503);
   hasy__53715->SetBinContent(6,0.0136653);
   hasy__53715->SetBinContent(7,-0.01366605);
   hasy__53715->SetBinContent(8,-0.03733558);
   hasy__53715->SetBinContent(9,-0.05100103);
   hasy__53715->SetBinContent(10,-0.05100073);
   hasy__53715->SetBinContent(11,-0.03733476);
   hasy__53715->SetBinContent(12,-0.01366493);
   hasy__53715->SetBinError(1, sqrt( pow( 0.00796288/sqrt(8.75), 2) + pow(0.01,2)) );
   hasy__53715->SetBinError(2, sqrt( pow( 0.00845910/sqrt(8.75), 2) + pow(0.01,2)) );
   hasy__53715->SetBinError(3, sqrt( pow( 0.00951093/sqrt(8.75), 2) + pow(0.01,2)) );
   hasy__53715->SetBinError(4, sqrt( pow( 0.01134566/sqrt(8.75), 2) + pow(0.01,2)) );
   hasy__53715->SetBinError(5, sqrt( pow( 0.01406867/sqrt(8.75), 2) + pow(0.01,2)) );
   hasy__53715->SetBinError(6, sqrt( pow( 0.01675631/sqrt(8.75), 2) + pow(0.01,2)) );
   hasy__53715->SetBinError(7, sqrt( pow( 0.01704791/sqrt(8.75), 2) + pow(0.01,2)) );
   hasy__53715->SetBinError(8, sqrt( pow( 0.01410975/sqrt(8.75), 2) + pow(0.01,2)) );
   hasy__53715->SetBinError(9, sqrt( pow( 0.01128306/sqrt(8.75), 2) + pow(0.01,2)) );
   hasy__53715->SetBinError(10,sqrt( pow( 0.00952975/sqrt(8.75), 2) + pow(0.01,2)) );
   hasy__53715->SetBinError(11,sqrt( pow( 0.00841913/sqrt(8.75), 2) + pow(0.01,2)) );
   hasy__53715->SetBinError(12,sqrt( pow( 0.00796271/sqrt(8.75), 2) + pow(0.01,2)) );
   hasy__53715->SetMinimum(-0.1);
   hasy__53715->SetMaximum(0.1);
   hasy__53715->SetEntries(12.07158);
   hasy__53715->SetStats(0);
   hasy__53715->SetMarkerStyle(21);
   hasy__53715->GetXaxis()->SetTitle("#phi_{h} [deg.]");
   hasy__53715->GetXaxis()->CenterTitle(true);
   hasy__53715->GetXaxis()->SetLabelFont(22);
   hasy__53715->GetXaxis()->SetLabelSize(0.05);
   hasy__53715->GetXaxis()->SetTitleSize(0.07);
   hasy__53715->GetXaxis()->SetTitleFont(22);
   hasy__53715->GetYaxis()->SetTitle("A_{LU}");
   hasy__53715->GetYaxis()->CenterTitle(true);
   hasy__53715->GetYaxis()->SetLabelFont(22);
   hasy__53715->GetYaxis()->SetLabelSize(0.05);
   hasy__53715->GetYaxis()->SetTitleSize(0.07);
   hasy__53715->GetYaxis()->SetTitleOffset(1.2);
   hasy__53715->GetYaxis()->SetTitleFont(22);
   hasy__53715->GetZaxis()->SetLabelFont(22);
   hasy__53715->GetZaxis()->SetLabelSize(0.03);
   hasy__53715->GetZaxis()->SetTitleSize(0.035);
   hasy__53715->GetZaxis()->SetTitleFont(22);
   hasy__53715->Draw("");
   hasy__53715->Fit(ffit[4]);
      tex = new TLatex(10,-0.03,"0.12< p_{s} <0.35");
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(10,-0.06,"70< #theta_{s} <110");
   tex->SetLineWidth(2);
   tex->Draw();
   
   TH1F *hasy__53716 = new TH1F("hasy__53716","",9,-5,365);
   hasy__53716->SetBinContent(1,0.0180587);
   hasy__53716->SetBinContent(2,0.04572621);
   hasy__53716->SetBinContent(3,0.05199781);
   hasy__53716->SetBinContent(4,0.03393896);
   hasy__53716->SetBinContent(5,-3.878905e-07);
   hasy__53716->SetBinContent(6,-0.03393955);
   hasy__53716->SetBinContent(7,-0.05199794);
   hasy__53716->SetBinContent(8,-0.04572582);
   hasy__53716->SetBinContent(9,-0.01805797);
   hasy__53716->SetBinError(1, sqrt( pow( 0.02217238/sqrt(8.75), 2) + pow(0.01,2)) );
   hasy__53716->SetBinError(2, sqrt( pow( 0.02465229/sqrt(8.75), 2) + pow(0.01,2)) );
   hasy__53716->SetBinError(3, sqrt( pow( 0.02997483/sqrt(8.75), 2) + pow(0.01,2)) );
   hasy__53716->SetBinError(4, sqrt( pow( 0.04134642/sqrt(8.75), 2) + pow(0.01,2)) );
   hasy__53716->SetBinError(5, sqrt( pow( 0.04752124/sqrt(8.75), 2) + pow(0.01,2)) );
   hasy__53716->SetBinError(6, sqrt( pow( 0.04076258/sqrt(8.75), 2) + pow(0.01,2)) );
   hasy__53716->SetBinError(7, sqrt( pow( 0.03032627/sqrt(8.75), 2) + pow(0.01,2)) );
   hasy__53716->SetBinError(8, sqrt( pow( 0.02492847/sqrt(8.75), 2) + pow(0.01,2)) );
   hasy__53716->SetBinError(9, sqrt( pow( 0.02238595/sqrt(8.75), 2) + pow(0.01,2)) );
   hasy__53716->SetMinimum(-0.1);
   hasy__53716->SetMaximum(0.1);
   hasy__53716->SetEntries(9.059018);
   hasy__53716->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   hasy__53716->SetLineColor(ci);

   ci = TColor::GetColor("#0000ff");
   hasy__53716->SetMarkerColor(ci);
   hasy__53716->SetMarkerStyle(21);
   hasy__53716->GetXaxis()->SetTitle("#phi_{h} [deg.]");
   hasy__53716->GetXaxis()->CenterTitle(true);
   hasy__53716->GetXaxis()->SetLabelFont(22);
   hasy__53716->GetXaxis()->SetLabelSize(0.05);
   hasy__53716->GetXaxis()->SetTitleSize(0.07);
   hasy__53716->GetXaxis()->SetTitleFont(22);
   hasy__53716->GetYaxis()->SetTitle("A_{LU}");
   hasy__53716->GetYaxis()->CenterTitle(true);
   hasy__53716->GetYaxis()->SetLabelFont(22);
   hasy__53716->GetYaxis()->SetLabelSize(0.05);
   hasy__53716->GetYaxis()->SetTitleSize(0.07);
   hasy__53716->GetYaxis()->SetTitleOffset(1.2);
   hasy__53716->GetYaxis()->SetTitleFont(22);
   hasy__53716->GetZaxis()->SetLabelFont(22);
   hasy__53716->GetZaxis()->SetLabelSize(0.03);
   hasy__53716->GetZaxis()->SetTitleSize(0.035);
   hasy__53716->GetZaxis()->SetTitleFont(22);
   hasy__53716->Draw("same");
   hasy__53716->Fit(ffit1[4]);
   cxx_5->Modified();
   cxx->cd();
  
// ------------>Primitives in pad: cxx_6
   TPad *cxx_6 = new TPad("cxx_6", "cxx_6",0.51,0.01,0.99,0.3233333);
   cxx_6->Draw();
   cxx_6->cd();
   cxx_6->Range(-100.303,-0.1515152,460.303,0.1515152);
   cxx_6->SetFillColor(0);
   cxx_6->SetBorderMode(0);
   cxx_6->SetBorderSize(2);
   cxx_6->SetLeftMargin(0.17);
   cxx_6->SetRightMargin(0.17);
   cxx_6->SetTopMargin(0.17);
   cxx_6->SetBottomMargin(0.17);
   cxx_6->SetFrameBorderMode(0);
   cxx_6->SetFrameBorderMode(0);
   
   TH1F *hasy__53717 = new TH1F("hasy__53717","",12,-5,365);
   hasy__53717->SetBinContent(1,0.01366568);
   hasy__53717->SetBinContent(2,0.03733531);
   hasy__53717->SetBinContent(3,0.05100093);
   hasy__53717->SetBinContent(4,0.05100083);
   hasy__53717->SetBinContent(5,0.03733503);
   hasy__53717->SetBinContent(6,0.0136653);
   hasy__53717->SetBinContent(7,-0.01366605);
   hasy__53717->SetBinContent(8,-0.03733558);
   hasy__53717->SetBinContent(9,-0.05100103);
   hasy__53717->SetBinContent(10,-0.05100073);
   hasy__53717->SetBinContent(11,-0.03733476);
   hasy__53717->SetBinContent(12,-0.01366493);
   hasy__53717->SetBinError(1, sqrt( pow( 0.0082585/sqrt(8.75), 2) + pow(0.01,2)) );
   hasy__53717->SetBinError(2, sqrt( pow( 0.0087102/sqrt(8.75), 2) + pow(0.01,2)) );
   hasy__53717->SetBinError(3, sqrt( pow( 0.0097802/sqrt(8.75), 2) + pow(0.01,2)) );
   hasy__53717->SetBinError(4, sqrt( pow( 0.0115179/sqrt(8.75), 2) + pow(0.01,2)) );
   hasy__53717->SetBinError(5, sqrt( pow( 0.0144072/sqrt(8.75), 2) + pow(0.01,2)) );
   hasy__53717->SetBinError(6, sqrt( pow( 0.0176450/sqrt(8.75), 2) + pow(0.01,2)) );
   hasy__53717->SetBinError(7, sqrt( pow( 0.0175637/sqrt(8.75), 2) + pow(0.01,2)) );
   hasy__53717->SetBinError(8, sqrt( pow( 0.0144470/sqrt(8.75), 2) + pow(0.01,2)) );
   hasy__53717->SetBinError(9, sqrt( pow( 0.0115624/sqrt(8.75), 2) + pow(0.01,2)) );
   hasy__53717->SetBinError(10,sqrt( pow( 0.0097539/sqrt(8.75), 2) + pow(0.01,2)) );
   hasy__53717->SetBinError(11,sqrt( pow( 0.0086983/sqrt(8.75), 2) + pow(0.01,2)) );
   hasy__53717->SetBinError(12,sqrt( pow( 0.0082263/sqrt(8.75), 2) + pow(0.01,2)) );
   hasy__53717->SetMinimum(-0.1);
   hasy__53717->SetMaximum(0.1);
   hasy__53717->SetEntries(12.0007);
   hasy__53717->SetStats(0);
   hasy__53717->SetMarkerStyle(21);
   hasy__53717->GetXaxis()->SetTitle("#phi_{h} [deg.]");
   hasy__53717->GetXaxis()->CenterTitle(true);
   hasy__53717->GetXaxis()->SetLabelFont(22);
   hasy__53717->GetXaxis()->SetLabelSize(0.05);
   hasy__53717->GetXaxis()->SetTitleSize(0.07);
   hasy__53717->GetXaxis()->SetTitleFont(22);
   hasy__53717->GetYaxis()->SetTitle("A_{LU}");
   hasy__53717->GetYaxis()->CenterTitle(true);
   hasy__53717->GetYaxis()->SetLabelFont(22);
   hasy__53717->GetYaxis()->SetLabelSize(0.05);
   hasy__53717->GetYaxis()->SetTitleSize(0.07);
   hasy__53717->GetYaxis()->SetTitleOffset(1.2);
   hasy__53717->GetYaxis()->SetTitleFont(22);
   hasy__53717->GetZaxis()->SetLabelFont(22);
   hasy__53717->GetZaxis()->SetLabelSize(0.03);
   hasy__53717->GetZaxis()->SetTitleSize(0.035);
   hasy__53717->GetZaxis()->SetTitleFont(22);
   hasy__53717->Draw("");
   hasy__53717->Fit(ffit[5]);
      tex = new TLatex(10,-0.03,"0.12< p_{s} <0.35");
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(10,-0.06,"110< #theta_{s} <159");
   tex->SetLineWidth(2);
   tex->Draw();
   
   TH1F *hasy__53718 = new TH1F("hasy__53718","",9,-5,365);
   hasy__53718->SetBinContent(1,0.0180587);
   hasy__53718->SetBinContent(2,0.04572621);
   hasy__53718->SetBinContent(3,0.05199781);
   hasy__53718->SetBinContent(4,0.03393896);
   hasy__53718->SetBinContent(5,-3.878905e-07);
   hasy__53718->SetBinContent(6,-0.03393955);
   hasy__53718->SetBinContent(7,-0.05199794);
   hasy__53718->SetBinContent(8,-0.04572582);
   hasy__53718->SetBinContent(9,-0.01805797);
   hasy__53718->SetBinError(1, sqrt( pow( 0.02261079/sqrt(8.75), 2) + pow(0.01,2)) );
   hasy__53718->SetBinError(2, sqrt( pow( 0.02486177/sqrt(8.75), 2) + pow(0.01,2)) );
   hasy__53718->SetBinError(3, sqrt( pow( 0.03080255/sqrt(8.75), 2) + pow(0.01,2)) );
   hasy__53718->SetBinError(4, sqrt( pow( 0.04079542/sqrt(8.75), 2) + pow(0.01,2)) );
   hasy__53718->SetBinError(5, sqrt( pow( 0.04808576/sqrt(8.75), 2) + pow(0.01,2)) );
   hasy__53718->SetBinError(6, sqrt( pow( 0.04180365/sqrt(8.75), 2) + pow(0.01,2)) );
   hasy__53718->SetBinError(7, sqrt( pow( 0.03003002/sqrt(8.75), 2) + pow(0.01,2)) );
   hasy__53718->SetBinError(8, sqrt( pow( 0.02536807/sqrt(8.75), 2) + pow(0.01,2)) );
   hasy__53718->SetBinError(9, sqrt( pow( 0.02254929/sqrt(8.75), 2) + pow(0.01,2)) );
   hasy__53718->SetMinimum(-0.1);
   hasy__53718->SetMaximum(0.1);
   hasy__53718->SetEntries(9.064731);
   hasy__53718->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   hasy__53718->SetLineColor(ci);

   ci = TColor::GetColor("#0000ff");
   hasy__53718->SetMarkerColor(ci);
   hasy__53718->SetMarkerStyle(21);
   hasy__53718->GetXaxis()->SetTitle("#phi_{h} [deg.]");
   hasy__53718->GetXaxis()->CenterTitle(true);
   hasy__53718->GetXaxis()->SetLabelFont(22);
   hasy__53718->GetXaxis()->SetLabelSize(0.05);
   hasy__53718->GetXaxis()->SetTitleSize(0.07);
   hasy__53718->GetXaxis()->SetTitleFont(22);
   hasy__53718->GetYaxis()->SetTitle("A_{LU}");
   hasy__53718->GetYaxis()->CenterTitle(true);
   hasy__53718->GetYaxis()->SetLabelFont(22);
   hasy__53718->GetYaxis()->SetLabelSize(0.05);
   hasy__53718->GetYaxis()->SetTitleSize(0.07);
   hasy__53718->GetYaxis()->SetTitleOffset(1.2);
   hasy__53718->GetYaxis()->SetTitleFont(22);
   hasy__53718->GetZaxis()->SetLabelFont(22);
   hasy__53718->GetZaxis()->SetLabelSize(0.03);
   hasy__53718->GetZaxis()->SetTitleSize(0.035);
   hasy__53718->GetZaxis()->SetTitleFont(22);
   hasy__53718->Draw("same");
   hasy__53718->Fit(ffit1[5]);
   cxx_6->Modified();
   cxx->cd();
   cxx->Modified();
   cxx->cd();
   cxx->SetSelected(cxx);


// plotting the ratios
   TCanvas *Can_R = new TCanvas("Can", "",10,10,600,450);
            Can_R->SetHighLightColor(2);
            Can_R->SetFillColor(0);
            Can_R->SetBorderMode(0);
            Can_R->SetBorderSize(2);
            Can_R->SetLeftMargin(0.15);
            Can_R->SetBottomMargin(0.2);
            Can_R->SetFrameBorderMode(0);
            Can_R->SetFrameBorderMode(0);

  TH1 * HALU_R = new TH2F("HALU_R","",100,10,170,100,-0.1,1.7);
        HALU_R->SetStats(0);
        HALU_R->GetXaxis()->SetTitle("#theta^{#circ}_{s}");
        HALU_R->GetYaxis()->SetTitle("A_{LU}^{tagged}/A_{LU}^{exclusive}(#phi= 90^{#circ})");
        HALU_R->GetYaxis()->CenterTitle(true);
        HALU_R->GetXaxis()->CenterTitle(true);
        HALU_R->GetXaxis()->SetTitleSize(0.07);
        HALU_R->GetYaxis()->SetTitleSize(0.07);
        HALU_R->GetXaxis()->SetNdivisions(605);
        HALU_R->GetYaxis()->SetNdivisions(605);
        HALU_R->Draw("");

   TLegend* leg = new TLegend(0.4,0.8,0.92,0.92);
            leg-> SetNColumns(1);
            leg->SetFillColor(0);
            leg->SetTextSize(0.05);


        // for the momentum from 0.05 and 0.12
        double theta_val[3]= {45, 90, 134};
        double tagged_alu[3];
        double tagged_alu_err[3];
        double excl_alu[3];
        double excl_alu_err[3];
        double alu_ratio[3];
        double alu_ratio_err[3];

        for (int j =0; j<4; j++){
           tagged_alu[j] = ffit[j]->GetParameter(0);
           tagged_alu_err[j] = ffit[j]->GetParError(0);
 
           excl_alu[j] = ffit1[j]->GetParameter(0);
           excl_alu_err[j] = ffit1[j]->GetParError(0);
              
           find_ALU_ratio(tagged_alu[j], tagged_alu_err[j], 
                          excl_alu[j], excl_alu_err[j],
                          alu_ratio[j], alu_ratio_err[j]);
 
                } 

        TGraphErrors *me_gre_R = new TGraphErrors(3);
                 me_gre_R->SetFillColor(1);
                 me_gre_R->SetLineWidth(3);
                 me_gre_R->SetMarkerColor(kBlack);
                 me_gre_R->SetLineColor(kBlack);
                 me_gre_R->SetMarkerSize(1.5);
                 me_gre_R->SetMarkerStyle(21);


         me_gre_R->SetPoint(0, theta_val[0], alu_ratio[0] );   me_gre_R->SetPointError(0,0, alu_ratio_err[0] );
         me_gre_R->SetPoint(1, theta_val[1], alu_ratio[1] );   me_gre_R->SetPointError(1,0, alu_ratio_err[1] );
         me_gre_R->SetPoint(2, theta_val[2], alu_ratio[2] );   me_gre_R->SetPointError(2,0, alu_ratio_err[2] );
         me_gre_R->Draw("psame");
             
         leg->AddEntry(me_gre_R,"0.05< p_{s}[GeV/c] <0.12","P");        


  // for momentum from 0.12 to 0.35

        for (int j =0; j<3; j++){
           tagged_alu[j] = ffit[j+3]->GetParameter(0);
           tagged_alu_err[j] = ffit[j+3]->GetParError(0);
 
           excl_alu[j] = ffit1[j+3]->GetParameter(0);
           excl_alu_err[j] = ffit1[j+3]->GetParError(0);
              
           find_ALU_ratio(tagged_alu[j], tagged_alu_err[j], 
                          excl_alu[j], excl_alu_err[j],
                          alu_ratio[j], alu_ratio_err[j]);
 
                } 

        TGraphErrors *me_gre_R2 = new TGraphErrors(3);
                      me_gre_R2->SetFillColor(1);
                      me_gre_R2->SetLineWidth(3);
                      me_gre_R2->SetMarkerColor(kBlack);
                      me_gre_R2->SetLineColor(kBlack);
                      me_gre_R2->SetMarkerSize(1.5);
                      me_gre_R2->SetMarkerStyle(21);



         me_gre_R2->SetPoint(0, theta_val[0], alu_ratio[0]-0.4 );   me_gre_R2->SetPointError(0,0, alu_ratio_err[0] );
         me_gre_R2->SetPoint(1, theta_val[1], alu_ratio[1]-0.4 );   me_gre_R2->SetPointError(1,0, alu_ratio_err[1] );
         me_gre_R2->SetPoint(2, theta_val[2], alu_ratio[2]-0.4 );   me_gre_R2->SetPointError(2,0, alu_ratio_err[2] );

         me_gre_R2->SetMarkerColor(kBlue);
         me_gre_R2->SetLineColor(kBlue);
         me_gre_R2->SetMarkerSize(1.5);
         me_gre_R2->SetMarkerStyle(25);
         me_gre_R2->Draw("psame");
         leg->AddEntry(me_gre_R2,"0.12< p_{s}[GeV/c] <0.35","P");        

         leg->Draw("same");

   Can_R->Print("ALU_ratio.pdf");
   Can_R->Print("ALU_ratio.png");
   Can_R->Print("ALU_ratio.C");


}
