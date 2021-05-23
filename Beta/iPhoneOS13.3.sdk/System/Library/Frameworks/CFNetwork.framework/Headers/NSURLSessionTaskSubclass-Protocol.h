/*
 Image: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
 */

#import <CFNetwork/Swift-Protocol.h>

@protocol NSURLSessionTaskSubclass <Swift>

- (unsigned short)_onSessionQueue_disavow;
- (unsigned short)_onqueue_cancel;
- (unsigned short)_onqueue_suspend;
- (unsigned short)_onqueue_resume;
- (unsigned short)_onqueue_adjustPoolPriority;
- (unsigned short)_onqueue_adjustLoadingPoolPriority;
- (unsigned short)_onSessionQueue_cleanupAndBreakCycles;

@end
