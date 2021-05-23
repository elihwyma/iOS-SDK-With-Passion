/*
 Image: /System/Library/PrivateFrameworks/BridgePreferences.framework/BridgePreferences
 */

#import <Foundation/NSObject.h>

@interface BPSApplePayLocallyStoredValueManager : NSObject

+ (id)remoteLocallyStoredValuePassNames;
+ (void)_presentApplePayLocallyStoredValueWarningInController:(id)arg1 unableToConnect:(_Bool)arg2 legacyDevice:(_Bool)arg3 withCompletion:(CDUnknownBlockType)arg4;
+ (void)_attemptToMarkAllAppletsForDeletionWithCompletion:(CDUnknownBlockType)arg1;
+ (void)presentApplePayLocallyStoredValueOfflineWarningIfNeededInController:(id)arg1 forPairedDevice:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;

@end
