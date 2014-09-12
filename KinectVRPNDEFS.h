#ifndef KINECTVRPNDEFS
#define KINECTVRPNDEFS

#ifdef WIN32
#pragma warning( disable : 4251 )
#pragma warning( disable : 4786 )
#pragma warning( disable : 4503 )
#pragma warning( disable : 4565 )
#pragma warning( disable : 4150 )
#pragma warning( disable : 4800 )
#pragma warning( disable : 4244 )
#pragma warning( disable : 4995 )

#ifdef _STATIC_MCIVKINECTVRPN
#define KINECTVRPN_DLL_DEF
#else
#ifdef KINECTVRPN_EXPORTS
#define KINECTVRPN_DLL_DEF __declspec(dllexport)
#else
#define KINECTVRPN_DLL_DEF __declspec(dllimport)
#ifdef _DEBUG
#pragma comment(lib,"KinectVRPND")
#else
#pragma comment(lib,"KinectVRPNR")
#endif
#endif 
#endif
#else
#define KINECTVRPN_DLL_DEF
#endif

#define KINECTVRPN_DEBUG

#endif