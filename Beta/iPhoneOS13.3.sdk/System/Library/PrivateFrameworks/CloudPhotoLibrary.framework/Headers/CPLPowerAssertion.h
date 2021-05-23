/*
 Image: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
 */

#import <NSObject.h>

@interface CPLPowerAssertion : NSObject

+ (void)_doProtected:(CDUnknownBlockType)arg1;
+ (void)_retainAssertion;
+ (void)_releaseAssertion;
+ (void)disableSleep;
+ (void)enableSleep;
+ (_Bool)hasEnoughPower;
+ (void)setHasEnoughPower:(_Bool)arg1;
+ (id)powerAssertionStatus;

@end
