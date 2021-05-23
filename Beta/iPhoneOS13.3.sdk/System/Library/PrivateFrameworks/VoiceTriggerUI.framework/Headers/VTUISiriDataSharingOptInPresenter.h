/*
 Image: /System/Library/PrivateFrameworks/VoiceTriggerUI.framework/VoiceTriggerUI
 */

#import <Foundation/NSObject.h>

@class AFSettingsConnection, VTUIProximityDataSharingOptInView, VTUISiriDataSharingOptInViewController;

@protocol OS_dispatch_queue, VTUISiriDataSharingOptInPresentationDelegate;

@interface VTUISiriDataSharingOptInPresenter : NSObject

{
    AFSettingsConnection *_settings;
    NSObject<OS_dispatch_queue> *_settingsQueue;
    long long _dataSharingOptInStatus;
    VTUISiriDataSharingOptInViewController *_currentWelcomeController;
    VTUIProximityDataSharingOptInView *_currentProxView;
    id <VTUISiriDataSharingOptInPresentationDelegate> _presentationDelegate;
}

@property (weak, nonatomic) id <VTUISiriDataSharingOptInPresentationDelegate> presentationDelegate;

+ (_Bool)siriDataSharingOptInViewFeatureFlagEnabled;

- (id)init;
- (void)_requestDismissal;
- (_Bool)shouldShowSiriDataSharingOptInView;
- (id)dataSharingOptInTextWelcomeControllerForViewStyle:(long long)arg1;
- (void)tearDownPresentedViews;
- (id)dataSharingOptInViewForFrame:(struct CGRect)arg1 viewStyle:(long long)arg2;
- (void)_fetchSiriDataSharingEnabled;
- (id)_modalViewControllerForViewStyle:(long long)arg1;
- (id)_proximityViewForFrame:(struct CGRect)arg1;
- (void)_userTappedDetailLinkText;
- (void)_userTappedOptInToDataSharing;
- (void)_userTappedOptOutOfDataSharing;
- (void)_userTappedDismissButtonFromProxCard;
- (void)_setSiriDataSharingStatus:(long long)arg1 forceDismissal:(_Bool)arg2;
- (void)didDismissFromViewController:(id)arg1;

@end
