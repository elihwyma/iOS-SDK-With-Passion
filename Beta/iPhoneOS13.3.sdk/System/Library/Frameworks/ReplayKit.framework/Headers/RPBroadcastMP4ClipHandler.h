/*
 Image: /System/Library/Frameworks/ReplayKit.framework/ReplayKit
 */

#import <ReplayKit/RPBroadcastHandler.h>

@interface RPBroadcastMP4ClipHandler : RPBroadcastHandler

- (void)beginRequestWithExtensionContext:(id)arg1;
- (void)processMP4ClipWithURL:(id)arg1 setupInfo:(id)arg2 finished:(_Bool)arg3;
- (void)finishedProcessingMP4ClipWithUpdatedBroadcastConfiguration:(id)arg1 error:(id)arg2;

@end
