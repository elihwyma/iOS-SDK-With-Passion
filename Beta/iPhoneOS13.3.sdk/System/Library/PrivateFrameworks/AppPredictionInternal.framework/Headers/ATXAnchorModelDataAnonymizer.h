/*
 Image: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
 */

#import <Foundation/NSObject.h>

@interface ATXAnchorModelDataAnonymizer : NSObject

+ (_Bool)isFirstPartyApp:(id)arg1;
+ (id)readDeviceSpecificSalt;
+ (id)setSaltToUserDefaults:(id)arg1 scheme:(id)arg2;
+ (void)anonymizeMessage:(id)arg1;
+ (void)_hashAndSaltActionKeyMetadataIfNeededInList:(id)arg1 withSalt:(id)arg2;
+ (_Bool)shouldAnonymizeBundle:(id)arg1;
+ (_Bool)shouldAnonymizeActionType:(id)arg1 forBundleId:(id)arg2;

@end
