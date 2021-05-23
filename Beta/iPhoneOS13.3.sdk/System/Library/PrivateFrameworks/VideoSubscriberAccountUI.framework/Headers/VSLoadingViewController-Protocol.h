/*
 Image: /System/Library/PrivateFrameworks/VideoSubscriberAccountUI.framework/VideoSubscriberAccountUI
 */

#import <VideoSubscriberAccountUI/Swift-Protocol.h>

@protocol VSLoadingViewControllerDelegate;

@protocol VSLoadingViewController <Swift>

@property (weak, nonatomic) id <VSLoadingViewControllerDelegate> delegate;
@property (nonatomic, getter=isCancellationAllowed) _Bool cancellationAllowed;

@end
