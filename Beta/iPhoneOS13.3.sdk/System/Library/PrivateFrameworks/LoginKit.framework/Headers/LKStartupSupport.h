/*
 Image: /System/Library/PrivateFrameworks/LoginKit.framework/LoginKit
 */

#import <NSObject.h>

@interface LKStartupSupport : NSObject

+ (void)postStartupActions;
+ (void)postStartupTransitionActions;
+ (_Bool)inUserSessionLoginUI;

@end
