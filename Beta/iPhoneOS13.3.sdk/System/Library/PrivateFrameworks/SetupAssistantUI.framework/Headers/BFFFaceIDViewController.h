/*
 Image: /System/Library/PrivateFrameworks/SetupAssistantUI.framework/SetupAssistantUI
 */

#import <OnBoardingKit/OBSplashController.h>

@class BKUIPearlEnrollControllerPreloadedState, NSString, OBPrivacyLinkController, UIImageView;

@protocol BFFFaceIDViewControllerDelegate, BYDeviceProvider;

@interface BFFFaceIDViewController : OBSplashController

{
    BKUIPearlEnrollControllerPreloadedState *_preloadedState;
    UIImageView *_splashImageView;
    _Bool _completesOnCancel;
    _Bool _inDemo;
    _Bool _supportsPaymentRegistration;
    id <BYDeviceProvider> _deviceProvider;
    id <BFFFaceIDViewControllerDelegate> _faceIDViewControllerDelegate;
    OBPrivacyLinkController *_privacyLink;
}

@property (retain, nonatomic) OBPrivacyLinkController *privacyLink;
@property (nonatomic) _Bool supportsPaymentRegistration;
@property (nonatomic) _Bool completesOnCancel;
@property (nonatomic, readonly) _Bool inDemo;
@property (retain, nonatomic) id <BYDeviceProvider> deviceProvider;
@property (weak, nonatomic) id <BFFFaceIDViewControllerDelegate> faceIDViewControllerDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)loadView;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)_userDidTapCancelButton:(id)arg1;
- (void)performExtendedInitializationWithCompletion:(CDUnknownBlockType)arg1;
- (id)initInDemo:(_Bool)arg1;
- (id)_createSplashImageView;
- (void)_didSelectEnroll;
- (void)_didSelectSkip;
- (void)resetColorsAnimated:(_Bool)arg1;
- (void)pearlEnrollController:(id)arg1 finishedEnrollWithError:(id)arg2;
- (void)willStartOver;

@end
