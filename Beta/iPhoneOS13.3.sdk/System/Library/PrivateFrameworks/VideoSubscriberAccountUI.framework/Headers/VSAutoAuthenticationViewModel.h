/*
 Image: /System/Library/PrivateFrameworks/VideoSubscriberAccountUI.framework/VideoSubscriberAccountUI
 */

#import <VideoSubscriberAccountUI/VSCuratedViewModel.h>

@class NSString;

@protocol VSAutoAuthenticationViewModelDelegate;

__attribute__((visibility("hidden")))
@interface VSAutoAuthenticationViewModel : VSCuratedViewModel

{
    id <VSAutoAuthenticationViewModelDelegate> _delegate;
    NSString *_messageTitle;
    NSString *_accountName;
    NSString *_manualSignInTitle;
    NSString *_manualSignInButtonText;
}

@property (weak, nonatomic) id <VSAutoAuthenticationViewModelDelegate> delegate;
@property (copy, nonatomic) NSString *messageTitle;
@property (copy, nonatomic) NSString *accountName;
@property (copy, nonatomic) NSString *manualSignInTitle;
@property (copy, nonatomic) NSString *manualSignInButtonText;

- (id)init;
- (void)configureWithRequest:(id)arg1;
- (void)didSelectManualSignInButton;

@end
