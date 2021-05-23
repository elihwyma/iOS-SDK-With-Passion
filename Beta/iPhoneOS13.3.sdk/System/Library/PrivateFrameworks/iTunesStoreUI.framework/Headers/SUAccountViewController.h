/*
 Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import <iTunesStoreUI/SUStorePageViewController.h>

@class ACAccount, NSDictionary, NSString, NSURL, SUMescalSession;

@interface SUAccountViewController : SUStorePageViewController

{
    _Bool _failed;
    long long _style;
    NSURL *_accountURL;
    SUMescalSession *_mescalSession;
    long long _mescalState;
    NSString *_primingSignature;
    NSDictionary *_tidHeaders;
    ACAccount *_account;
}

@property (nonatomic, readonly, getter=_mescalSession) SUMescalSession *_mescalSession;
@property (retain, nonatomic) ACAccount *account;
@property (nonatomic) long long style;

+ (id)_latestAccountViewController;

- (id)init;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)_didEnterBackground:(id)arg1;
- (void)_forceOrientationBackToSupportedOrientation;
- (void)handleFailureWithError:(id)arg1;
- (id)initWithExternalAccountURL:(id)arg1;
- (id)copyArchivableContext;
- (id)newFetchOperation;
- (id)newViewControllerForPage:(id)arg1 ofType:(long long)arg2 returningError:(id *)arg3;
- (void)enqueueFetchOperation;
- (_Bool)shouldSignRequests;
- (id)_bagKeyForStyle:(long long)arg1;
- (id)_URLByRemovingBlacklistedParametersWithURL:(id)arg1;
- (_Bool)_shouldUseWebViewFastPath;
- (void)_mescalDidOpenWithSession:(id)arg1 error:(id)arg2;
- (id)_authenticationQueryParametersForStyle:(long long)arg1;
- (void)_closeMescalSession;

@end
