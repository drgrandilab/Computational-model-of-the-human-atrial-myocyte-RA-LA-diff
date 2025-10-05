#ifndef RyR_HPP
#define RyR_HPP
#include "xor_rand.hpp"

class RyR
{
public:
	RyR(int RYR_Num = 41, int ID = 0, double Jmax_set = 0.0147 * 18 * 0.5);
	~RyR();

	int RyR_1, RyR_2, RyR_3;
	xor_rand random_num_RyR;

	double Po;
        double Jmax;
	int N_RyR;

	double Update_RyR_stochastic(double dt, double Caj, double CaSRj);
	int Update_RyR_rates_stochastic(double num, double p);
	void set_Jmax(double Jmax_set) {
		Jmax = Jmax_set;
	}

	double static constexpr MaxSR      = 15;
	double static constexpr MinSR      = 1;
	double static constexpr ec50SR     = 450;
	double static constexpr hkosrca    = 2.5;
	double static constexpr Ku         = 5.0;
	double static constexpr Kb         = 0.005;
    double static constexpr tauu       = 125.0;
	double static constexpr taub       = 0.5;
	double static constexpr tauc1      = 2.0;
	double static constexpr tauc2      = 0.3;
	double static constexpr taup       = 0.022;
	double static constexpr tautr      = 5.0;
	double static constexpr BCSQN0     = 400;
    double static constexpr Kcp        = 10.0;
	double static constexpr pedk12     = 0.000001;
	double static constexpr pedk43     = 0.000001;        
    double static constexpr  Bmax_Csqn          = 400;          // [uM]
    double static constexpr  BCSQN              = Bmax_Csqn;
    double static constexpr  koff_csqn          = 65;           // [1/ms]
    double static constexpr  kon_csqn           = 100 * 1e-3;   // [1/uM/ms]
    double static constexpr  kd_csqn            = koff_csqn / kon_csqn;
    double static constexpr  Kc                 = kd_csqn;
    double static constexpr  nM                 = 15;
    double static constexpr  nD                 = 35;
    double static constexpr  rhoinf             = 5000;
    double static constexpr  hh                 = 23.0;
    double static constexpr  KK                 = 900;
};

#endif
