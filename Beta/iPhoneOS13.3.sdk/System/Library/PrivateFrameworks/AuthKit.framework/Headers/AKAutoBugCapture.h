/*
 Image: /System/Library/PrivateFrameworks/AuthKit.framework/AuthKit
 */

#import <Foundation/NSObject.h>

@interface AKAutoBugCapture : NSObject

+ (void)triggerAutoBugCaptureWithSubType:(id)arg1 andBundleID:(id)arg2 userInfo:(id)arg3;
+ (_Bool)shouldCapturePromptBugForContext:(id)arg1;
+ (id)userInfoFromContext:(id)arg1;
+ (id)userInfoFromAccount:(id)arg1;

@end
