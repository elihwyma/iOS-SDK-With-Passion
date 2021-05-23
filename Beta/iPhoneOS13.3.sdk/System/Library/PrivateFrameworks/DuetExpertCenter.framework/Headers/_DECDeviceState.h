/*
 Image: /System/Library/PrivateFrameworks/DuetExpertCenter.framework/DuetExpertCenter
 */

#import <Foundation/NSObject.h>

@interface _DECDeviceState : NSObject

+ (_Bool)isClassCLocked;
+ (_Bool)isUnlocked;
+ (_Bool)isDemoModeEnabled;
+ (void)blockUntilFirstUnlock;
+ (void)registerBlockForFirstUnlock:(CDUnknownBlockType)arg1;
+ (void)registerBlockForFirstUnlock:(CDUnknownBlockType)arg1 executeIfUnlocked:(_Bool)arg2;

@end
