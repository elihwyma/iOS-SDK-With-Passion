/*
 Image: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
 */

#import <AvatarUI/Swift-Protocol.h>

@protocol AVTPreloadingTask <Swift>

@property (getter=isCanceled) _Bool canceled;
@property (copy, nonatomic, readonly) CDUnknownBlockType completionHandler;

@end
