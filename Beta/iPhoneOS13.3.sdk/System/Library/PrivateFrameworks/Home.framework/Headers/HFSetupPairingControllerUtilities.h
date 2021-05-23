/*
 Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

#import <Foundation/NSObject.h>

@interface HFSetupPairingControllerUtilities : NSObject

+ (id)descriptionForPairingPhase:(unsigned long long)arg1;
+ (_Bool)isPairingPhaseIdle:(unsigned long long)arg1;
+ (unsigned long long)processSetupAccessoryProgressChange:(long long)arg1 currentPhase:(unsigned long long)arg2 context:(id)arg3 discoveredAccessory:(id)arg4 setupResult:(id)arg5 home:(id)arg6 callerClass:(Class)arg7;
+ (void)getStatusTitle:(id *)arg1 statusDescription:(id *)arg2 forPairingPhase:(unsigned long long)arg3 phaseStartDate:(id)arg4 discoveredAccessory:(id)arg5 setupResult:(id)arg6;
+ (double)accessoryDiscoverySoftTimeout;
+ (id)_accessoryNotFoundStatusDescriptionSuffixForSetupResult:(id)arg1;
+ (_Bool)_context:(id)arg1 requiresUserConsentToAddInHome:(id)arg2;
+ (_Bool)_context:(id)arg1 requiresUserConsentToReplaceInHome:(id)arg2;
+ (double)accessoryDiscoveryFatalTimeout;

@end
