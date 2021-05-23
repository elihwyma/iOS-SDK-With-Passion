/*
 Image: /System/Library/PrivateFrameworks/VideoSubscriberAccountUI.framework/VideoSubscriberAccountUI
 */

#import <VideoSubscriberAccountUI/Swift-Protocol.h>

@class VSViewModel;

@protocol VSAuthenticationViewControllerDelegate;

@protocol VSAuthenticationViewController <Swift>

@property (weak, nonatomic) id <VSAuthenticationViewControllerDelegate> delegate;
@property (nonatomic, getter=isCancellationAllowed) _Bool cancellationAllowed;
@property (nonatomic, readonly) VSViewModel *viewModel;
@property (nonatomic, readonly) struct CGSize preferredLogoSize;

@end
