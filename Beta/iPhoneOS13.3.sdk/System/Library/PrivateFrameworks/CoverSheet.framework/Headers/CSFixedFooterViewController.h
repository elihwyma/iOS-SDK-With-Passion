/*
 Image: /System/Library/PrivateFrameworks/CoverSheet.framework/CoverSheet
 */

#import <CoverSheet/CSCoverSheetViewControllerBase.h>

@class CSFixedFooterView, CSStatusTextViewController, NSString;

@protocol SBFAuthenticationStatusProvider;

@interface CSFixedFooterViewController : CSCoverSheetViewControllerBase

{
    CSStatusTextViewController *_statusTextViewController;
    NSString *_cachedMesaFailureText;
    _Bool _temporaryMesaFailureTextActive;
    _Bool _authenticatedSinceFingerOn;
    id <SBFAuthenticationStatusProvider> _authenticationStatusProvider;
}

@property (retain, nonatomic) id <SBFAuthenticationStatusProvider> authenticationStatusProvider;
@property (nonatomic, readonly) CSFixedFooterView *fixedFooterView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (Class)viewClass;

- (id)init;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (_Bool)handleEvent:(id)arg1;
- (void)updateCallToActionForReversingInteractiveTransition;
- (void)updateCallToActionForMesaMatchFailure;
- (void)coverSheetStatusTextViewControllerContentDidChange:(id)arg1;
- (void)_updateCallToActionTextAnimated:(_Bool)arg1;
- (void)_addStatusTextViewControllerIfNecessary;

@end
