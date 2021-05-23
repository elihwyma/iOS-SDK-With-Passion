/*
 Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import <iTunesStore/ISOperation.h>

@class AKAppleIDAuthenticationInAppContext, NSString, UIViewController;

@interface SUScriptAppleIdAuthenticationOperation : ISOperation

{
    AKAppleIDAuthenticationInAppContext *_authenticationContext;
    UIViewController *_viewController;
    NSString *_status;
}

@property (retain, nonatomic) NSString *status;

- (void)run;
- (id)initWithUsername:(id)arg1 password:(id)arg2 viewController:(id)arg3;
- (void)sendCompletionCallback:(id)arg1;

@end
