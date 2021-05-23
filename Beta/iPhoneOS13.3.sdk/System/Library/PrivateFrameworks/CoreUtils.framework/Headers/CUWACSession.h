/*
 Image: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
 */

#import <NSObject.h>

@class CUWiFiDevice, EasyConfigDevice, NSDictionary, NSString;

@protocol OS_dispatch_queue;

@interface CUWACSession : NSObject

{
    _Bool _activateCalled;
    _Bool _invalidateCalled;
    struct LogCategory *_ucat;
    int _saveOriginalWiFiState;
    NSDictionary *_originalWiFiInfo;
    int _joinSoftAPState;
    double _joinSoftAPStartTime;
    EasyConfigDevice *_easyConfigDevice;
    int _easyConfigPreConfigState;
    struct {
        double startTime;
        unsigned char userChangedFriendlyName;
        unsigned char playPasswordSet;
        unsigned char adminPasswordSet;
        unsigned char destinationNetworkRecommendationUsed;
        double secondsToGetLinkUpOnSWAP;
        int wifiJoinSWAPError;
        unsigned char hitJoiningTargetSWAPTimeout;
        int rssiOfSWAP;
        unsigned int snrOfSWAP;
        unsigned int channelOfSWAP;
    } _easyConfigPreConfigMetrics;
    int _restoreOriginalWiFiState;
    double _restoreStartTime;
    int _easyConfigPostConfigState;
    struct {
        double secondsToGetLinkUpOnDestination;
        int wifiJoinDestinationAPError;
        unsigned char destinationNetworkPSKInKeychain;
        unsigned char hitJoiningDestinationAPTimeout;
        int rssiOfDestinationAP;
        unsigned int snrOfDestinationAP;
        unsigned int channelOfDestinationAP;
    } _easyConfigPostConfigMetrics;
    int _finishState;
    NSDictionary *_configuration;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    NSString *_label;
    CDUnknownBlockType _progressHandler;
    CDUnknownBlockType _promptForSetupCodeHandler;
    CUWiFiDevice *_wacDevice;
}

@property (copy, nonatomic) NSDictionary *configuration;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (copy, nonatomic) NSString *label;
@property (copy, nonatomic) CDUnknownBlockType progressHandler;
@property (copy, nonatomic) CDUnknownBlockType promptForSetupCodeHandler;
@property (retain, nonatomic) CUWiFiDevice *wacDevice;

- (id)init;
- (void)dealloc;
- (void)invalidate;
- (void)_cleanup;
- (void)activate;
- (void)_run;
- (void)_progress:(unsigned int)arg1 info:(id)arg2;
- (void)trySetupCode:(id)arg1;
- (int)_runSaveOriginalWiFi;
- (int)_runJoinSoftAP;
- (void)_runJoinSoftAPStart;
- (void)_runJoinSoftAPFinished:(int)arg1;
- (int)_runEasyConfigPreConfig;
- (void)_runEasyConfigPreConfigStart;
- (void)_runEasyConfigProgress:(int)arg1 info:(id)arg2;
- (int)_runRestoreOriginalWiFi;
- (void)_runRestoreOriginalWiFiStart;
- (void)_runRestoreOriginalWiFiFinished:(int)arg1;
- (int)_runEasyConfigPostConfig;
- (int)_runFinish;
- (void)_runFinishRestored:(int)arg1;

@end
