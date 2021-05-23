/*
 Image: /System/Library/PrivateFrameworks/SpotlightServices.framework/SpotlightServices
 */

#import <Foundation/NSObject.h>

@interface SSADEventReporter : NSObject

+ (void)reportModelDeletionForType:(unsigned long long)arg1;
+ (void)reportModelUnpackageEventWithType:(unsigned long long)arg1;
+ (void)reportKey:(id)arg1;
+ (void)reportModelLoadingError;
+ (void)reportBadL2Models;
+ (void)reportBadL3Models;
+ (void)reportBadDirectivesForModelType:(unsigned long long)arg1;

@end
