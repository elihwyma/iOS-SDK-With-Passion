/*
 Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import <iTunesStore/ISOperation.h>

@class NSObject, NSString, PKPass, SSAuthenticationContext, UIViewController;

@protocol OS_dispatch_semaphore;

@interface SUAddiTunesPassOperation : ISOperation

{
    _Bool _addedCard;
    SSAuthenticationContext *_authenticationContext;
    UIViewController *_viewController;
    PKPass *_pass;
    PKPass *_presentedPass;
    NSObject<OS_dispatch_semaphore> *_semaphore;
}

@property (nonatomic) _Bool addedCard;
@property (retain, nonatomic) PKPass *presentedPass;
@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *semaphore;
@property (retain, nonatomic) PKPass *pass;
@property (retain, nonatomic) SSAuthenticationContext *authenticationContext;
@property (nonatomic, readonly) UIViewController *viewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)run;
- (id)initWithViewController:(id)arg1;
- (void)addPassesViewControllerDidFinish:(id)arg1;

@end
