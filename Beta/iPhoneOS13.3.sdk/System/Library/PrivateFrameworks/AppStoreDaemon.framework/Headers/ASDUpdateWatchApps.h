/*
 Image: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/AppStoreDaemon
 */

#import <Foundation/NSObject.h>

@interface ASDUpdateWatchApps : NSObject

+ (_Bool)shouldPromptBeforeUpdating;
+ (void)shouldPromptBeforeUpdatingWithResultHandler:(CDUnknownBlockType)arg1;
+ (_Bool)updateBundleIDs:(id)arg1 userInitiated:(_Bool)arg2 error:(id *)arg3;
+ (void)updateBundleIDs:(id)arg1 userInitiated:(_Bool)arg2 withResultHandler:(CDUnknownBlockType)arg3;

@end
