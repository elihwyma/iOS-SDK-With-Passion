/*
 Image: /System/Library/PrivateFrameworks/VideoSubscriberAccountUI.framework/VideoSubscriberAccountUI
 */

#import <Foundation/NSObject.h>

@class NSOperationQueue;

@interface VSViewControllerFactory : NSObject

{
    NSOperationQueue *_privateQueue;
}

@property (retain, nonatomic) NSOperationQueue *privateQueue;

+ (id)sharedFactory;

- (id)init;
- (id)loadingViewController;
- (void)viewServiceRemoteViewControllerWithCompletion:(CDUnknownBlockType)arg1;
- (id)authenticationViewControllerForViewModel:(id)arg1;
- (id)identityProviderPickerViewControllerWithIdentityProviders:(id)arg1;
- (id)viewControllerToConfirmAccountDeletionForIdentityProviderDisplayName:(id)arg1 preferredStyle:(long long)arg2 confirmationHandler:(CDUnknownBlockType)arg3;
- (id)viewControllerToConfirmDeveloperIdentityProviderDeletionWithConfirmationHandler:(CDUnknownBlockType)arg1;
- (id)viewControllerForUnsupportedProvider:(id)arg1 withRequestingAppDisplayName:(id)arg2 storage:(id)arg3 acknowledgementHandler:(CDUnknownBlockType)arg4;
- (id)viewControllerForAppsSupportedByIdentityProvider:(id)arg1 delegate:(id)arg2;
- (id)viewControllerForPlaybackActivityReportingFromAppsWithBundleIDs:(id)arg1 grantingVouchers:(_Bool)arg2 appleAccount:(id)arg3 identityProvider:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;

@end
