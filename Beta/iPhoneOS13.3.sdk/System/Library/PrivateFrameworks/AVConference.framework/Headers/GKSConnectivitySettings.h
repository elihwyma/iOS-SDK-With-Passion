/*
 Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

#import <Foundation/NSObject.h>

@interface GKSConnectivitySettings : NSObject

+ (void)setServerAddresses:(id)arg1;
+ (struct tagIPPORT *)getIPPortForService:(id)arg1;
+ (id)getClientOption:(id)arg1;
+ (id)getAddressForService:(id)arg1;
+ (int)getNATTypeFromCarrierBundle;
+ (int)getKeepAliveTimeoutFromCarrierBundle;
+ (id)getAllSettings;
+ (void)setAddress:(id)arg1 forService:(id)arg2;
+ (void)setClientOptions:(id)arg1;
+ (struct tagIPPORT *)getCachedIPPort;
+ (void)clearAllSettingsWithRefreshIntervalInSeconds:(int)arg1;
+ (_Bool)supportsHEVCEncoding;
+ (_Bool)supportsEVSCodec;
+ (_Bool)supportsRedAudio;
+ (_Bool)supportiRATRecommendation;
+ (int)getRateControllerType;
+ (int)getDecryptionTimeoutInterval;
+ (int)getNewSessionJoiningInterval;
+ (int)getAdaptiveLearningState;
+ (int)getShortTermHistoryLength;
+ (int)getLongTermHistoryLength;
+ (double)getAdaptiveLearningA;
+ (double)getAdjustmentFactorA;
+ (double)getShortTermValueWeightA;
+ (double)getLongTermValueWeightA;
+ (double)getAdaptiveLearningB;
+ (double)getAdjustmentFactorB;
+ (double)getShortTermValueWeightB;
+ (double)getLongTermValueWeightB;
+ (double)getAdjustmentFactorC;
+ (double)getShortTermValueWeightC;
+ (double)getLongTermValueWeightC;
+ (double)getThresholdForSwitch:(unsigned int)arg1;
+ (unsigned int)getAbTestMasterLocalSwitches;
+ (unsigned char)getAbTestingState;
+ (id)getTestGroupPermutations:(unsigned char)arg1;
+ (double)getRemoteMediaStallTimeout;
+ (double)getNoRemoteDuplicationThresholdFast;

- (id)init;
- (void)dealloc;

@end
