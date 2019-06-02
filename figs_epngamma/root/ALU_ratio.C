void ALU_ratio()
{
//=========Macro generated from canvas: Can/
//=========  (Sun Jun  2 02:46:04 2019) by ROOT version 6.14/04
   TCanvas *Can = new TCanvas("Can", "",0,0,600,450);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   Can->SetHighLightColor(2);
   Can->Range(-21.16883,-0.6,186.6234,1.9);
   Can->SetFillColor(0);
   Can->SetBorderMode(0);
   Can->SetBorderSize(2);
   Can->SetLeftMargin(0.15);
   Can->SetRightMargin(0.08);
   Can->SetTopMargin(0.08);
   Can->SetBottomMargin(0.2);
   Can->SetFrameBorderMode(0);
   Can->SetFrameBorderMode(0);
   
   TH2F *HALU_R__1 = new TH2F("HALU_R__1","",100,10,170,100,-0.1,1.7);
   HALU_R__1->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   HALU_R__1->SetLineColor(ci);
   HALU_R__1->GetXaxis()->SetTitle("#theta^{#circ}_{s}");
   HALU_R__1->GetXaxis()->CenterTitle(true);
   HALU_R__1->GetXaxis()->SetNdivisions(605);
   HALU_R__1->GetXaxis()->SetLabelFont(22);
   HALU_R__1->GetXaxis()->SetLabelSize(0.05);
   HALU_R__1->GetXaxis()->SetTitleSize(0.07);
   HALU_R__1->GetXaxis()->SetTitleFont(22);
   HALU_R__1->GetYaxis()->SetTitle("A_{LU}^{tagged}/A_{LU}^{exclusive}(#phi= 90^{#circ})");
   HALU_R__1->GetYaxis()->CenterTitle(true);
   HALU_R__1->GetYaxis()->SetNdivisions(605);
   HALU_R__1->GetYaxis()->SetLabelFont(22);
   HALU_R__1->GetYaxis()->SetLabelSize(0.05);
   HALU_R__1->GetYaxis()->SetTitleSize(0.07);
   HALU_R__1->GetYaxis()->SetTitleOffset(0);
   HALU_R__1->GetYaxis()->SetTitleFont(22);
   HALU_R__1->GetZaxis()->SetLabelFont(22);
   HALU_R__1->GetZaxis()->SetLabelSize(0.035);
   HALU_R__1->GetZaxis()->SetTitleSize(0.035);
   HALU_R__1->GetZaxis()->SetTitleFont(22);
   HALU_R__1->Draw("");
   
   Double_t Graph0_fx1001[3] = {
   45,
   90,
   134};
   Double_t Graph0_fy1001[3] = {
   1.000531,
   1.000376,
   1.000582};
   Double_t Graph0_fex1001[3] = {
   0,
   0,
   0};
   Double_t Graph0_fey1001[3] = {
   0.1293551,
   0.1268019,
   0.1302404};
   TGraphErrors *gre = new TGraphErrors(3,Graph0_fx1001,Graph0_fy1001,Graph0_fex1001,Graph0_fey1001);
   gre->SetName("Graph0");
   gre->SetTitle("Graph");
   gre->SetFillColor(1);
   gre->SetFillStyle(1000);
   gre->SetLineWidth(3);
   gre->SetMarkerStyle(21);
   gre->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph01001 = new TH1F("Graph_Graph01001","Graph",100,36.1,142.9);
   Graph_Graph01001->SetMinimum(0.8442934);
   Graph_Graph01001->SetMaximum(1.15687);
   Graph_Graph01001->SetDirectory(0);
   Graph_Graph01001->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph01001->SetLineColor(ci);
   Graph_Graph01001->GetXaxis()->SetLabelFont(22);
   Graph_Graph01001->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph01001->GetXaxis()->SetTitleSize(0.9);
   Graph_Graph01001->GetXaxis()->SetTitleFont(22);
   Graph_Graph01001->GetYaxis()->SetLabelFont(22);
   Graph_Graph01001->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph01001->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph01001->GetYaxis()->SetTitleOffset(0);
   Graph_Graph01001->GetYaxis()->SetTitleFont(22);
   Graph_Graph01001->GetZaxis()->SetLabelFont(22);
   Graph_Graph01001->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph01001->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph01001->GetZaxis()->SetTitleFont(22);
   gre->SetHistogram(Graph_Graph01001);
   
   gre->Draw("p");
   
   Double_t Graph1_fx1002[3] = {
   45,
   90,
   134};
   Double_t Graph1_fy1002[3] = {
   0.600776,
   0.6011264,
   0.6010894};
   Double_t Graph1_fex1002[3] = {
   0,
   0,
   0};
   Double_t Graph1_fey1002[3] = {
   0.1548701,
   0.1563787,
   0.1570159};
   gre = new TGraphErrors(3,Graph1_fx1002,Graph1_fy1002,Graph1_fex1002,Graph1_fey1002);
   gre->SetName("Graph1");
   gre->SetTitle("Graph");
   gre->SetFillColor(1);
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#0000ff");
   gre->SetLineColor(ci);
   gre->SetLineWidth(3);

   ci = TColor::GetColor("#0000ff");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(25);
   gre->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph11002 = new TH1F("Graph_Graph11002","Graph",100,36.1,142.9);
   Graph_Graph11002->SetMinimum(0.4126704);
   Graph_Graph11002->SetMaximum(0.7895085);
   Graph_Graph11002->SetDirectory(0);
   Graph_Graph11002->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph11002->SetLineColor(ci);
   Graph_Graph11002->GetXaxis()->SetLabelFont(22);
   Graph_Graph11002->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph11002->GetXaxis()->SetTitleSize(0.9);
   Graph_Graph11002->GetXaxis()->SetTitleFont(22);
   Graph_Graph11002->GetYaxis()->SetLabelFont(22);
   Graph_Graph11002->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph11002->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph11002->GetYaxis()->SetTitleOffset(0);
   Graph_Graph11002->GetYaxis()->SetTitleFont(22);
   Graph_Graph11002->GetZaxis()->SetLabelFont(22);
   Graph_Graph11002->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph11002->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph11002->GetZaxis()->SetTitleFont(22);
   gre->SetHistogram(Graph_Graph11002);
   
   gre->Draw("p");
   
   TLegend *leg = new TLegend(0.4,0.8,0.92,0.92,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetTextSize(0.05);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("Graph0","0.05< p_{s}[GeV/c] <0.12","P");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1.5);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Graph1","0.12< p_{s}[GeV/c] <0.35","P");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#0000ff");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(25);
   entry->SetMarkerSize(1.5);
   entry->SetTextFont(42);
   leg->Draw();
   Can->Modified();
   Can->cd();
   Can->SetSelected(Can);
}
