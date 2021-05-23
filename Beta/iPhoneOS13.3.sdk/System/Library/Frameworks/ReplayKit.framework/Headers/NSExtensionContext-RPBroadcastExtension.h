/*
 Image: /System/Library/Frameworks/ReplayKit.framework/ReplayKit
 */

#import <Foundation/NSExtensionContext.h>

@interface NSExtensionContext (RPBroadcastExtension)

- (void)completeRequestWithBroadcastURL:(id)arg1 broadcastConfiguration:(id)arg2 setupInfo:(id)arg3;
- (void)completeRequestWithBroadcastURL:(id)arg1 setupInfo:(id)arg2;
- (void)loadBroadcastingApplicationInfoWithCompletion:(CDUnknownBlockType)arg1;

@end
