void ReadRange()
{
	TFile *file = new TFile("Range.root","RECREATE");
	TChain *chain = new TChain("RangeTree","");
	TString inputFile;
	chain->Add("/home/storage2/users/wangyinjie/Ntuple-Processor-main-copy/Data/Data1/*.root_DIR");
	chain->Write();
	file ->Write();
}
