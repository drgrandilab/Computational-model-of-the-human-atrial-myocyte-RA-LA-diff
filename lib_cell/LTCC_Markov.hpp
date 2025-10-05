#ifndef LTCC_Markov_HPP
#define LTCC_Markov_HPP

#include <fstream>
#include <vector>
#include "xor_rand.hpp"

class LTCC_Markov
{
public:
	LTCC_Markov(int NCaL_set = 4, int ID = 0);
	~LTCC_Markov();

	std::vector<int> LTCC_State;
	xor_rand random_num_LTCC;

        // LTCC Current - Fixed Parameters
        double static constexpr cpt     = 3.75e-3 * 0.55;     // [mM]
        double static constexpr cat     = 7.617e-3;           // [mM]
        double static constexpr s1o     = 4.2 * 0.0182688;    // [1/ms]
        double static constexpr k1o     = 4.2 * 0.024168;     // [1/ms]
        double static constexpr k2o     = 0.000103615;  // [1/ms]
        double static constexpr sp0     = 1.5;
        double static constexpr sp1     = 3;            // [ms]
        double static constexpr sp2     = 27;           // [mV]
        double static constexpr sp3     = 3;            // [mV]
        double static constexpr sp4     = 4;            // [mV]
        double static constexpr sp5     = 7.1 ;         // [mV]
        double static constexpr sp6     = 15.6;         // [mV]
        double static constexpr sp7     = 10;           // [ms]
        double static constexpr sp8     = 4954;         // [ms]
        double static constexpr sp9     = 78.0329;      // [ms]
        double static constexpr sp10    = 0.1;          // [ms]
        double static constexpr aR2     = 1;
        double static constexpr sR2     = -9;           // [mV]
        double static constexpr pR2     = 1.0 / 6.0;    //[1/mV]
        double static constexpr aT2     = 1;            // [1/ms]
        double static constexpr sT2     = -1000;        // [mV]
        double static constexpr pT2     = 0.100;        // [1/mV]
        double static constexpr aR1     = 0.09091;
        double static constexpr sR1     = -1000;        // [mV]
        double static constexpr pR1     = 0.100;        // [1/mV]
        double static constexpr aT1     = 0.30303;      // [1/ms]
        double static constexpr sT1     = -1000;        // [mV]
        double static constexpr pT1     = 0.100;        // [1/mV]
        double static constexpr aRv2    = 0.9;
        double static constexpr sRv2    = -29;          // [mV]
        double static constexpr pRv2    = 0.135;        // [1/mV]
        double static constexpr aTv2    = 500;          // [1/ms]
        double static constexpr sTv2    = -25;          // [mV]
        double static constexpr pTv2    = 0.050;        // [1/mV]
        double static constexpr aRv1    = 0.85;
        double static constexpr sRv1    = -27;          // [mV]
        double static constexpr pRv1    = 0.090;        // [1/mV]
        double static constexpr aTv1    = 270;          // [1/ms]
        double static constexpr sTv1    = -180;         // [mV]
        double static constexpr pTv1    = 0.100;        // [1/mV]

	int NCaL;
	int open_NCaL_num;
	double Po_LCCj_m1;
	int flag_7_state, ICa_speed;

	double update_states_v7(double dt, double Caj, double Vm);
	void print_to_file(double t, std::ofstream & output_file);

        // Constants
	constexpr static double R    = 8314;    // [J/kmol*K]
	constexpr static double Frdy = 96485;   // [C/mol]
	constexpr static double Temp = 310;     // [K]
	constexpr static double FoRT = Frdy / R / Temp;
	constexpr static double Qpow = (Temp - 310) / 10;

        // Fixed ion concentrations
	double static constexpr Ko  = 5.4;         // Extracellular K   [mM]
	double static constexpr Nao = 140;         // Extracellular Na  [mM]
	double static constexpr Cao = 1.8;         // Extracellular Ca  [mM]
};
#endif
