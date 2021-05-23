/*
 Image: /System/Library/PrivateFrameworks/BridgePreferences.framework/BridgePreferences
 */

#import <OnBoardingKit/OBWelcomeController.h>

@class BPSWatchView, NSString, OBTrayButton;

@protocol BPSBuddyControllerDelegate;

@interface BPSWelcomeOptinViewController : OBWelcomeController

{
    _Bool _showSuggestedButton;
    _Bool _showAlternateButton;
    _Bool _showOkayButton;
    _Bool _showLearnMoreButton;
    _Bool _hasFinishedLoadingView;
    unsigned long long _style;
    BPSWatchView *_watchView;
    id <BPSBuddyControllerDelegate> _delegate;
    OBTrayButton *_suggestedChoiceButton;
    OBTrayButton *_alternateChoiceButton;
    OBTrayButton *_okayButton;
    OBTrayButton *_learnMoreButton;
}

@property (retain, nonatomic) BPSWatchView *watchView;
@property (retain, nonatomic) OBTrayButton *suggestedChoiceButton;
@property (retain, nonatomic) OBTrayButton *alternateChoiceButton;
@property (retain, nonatomic) OBTrayButton *okayButton;
@property (retain, nonatomic) OBTrayButton *learnMoreButton;
@property (nonatomic) _Bool showSuggestedButton;
@property (nonatomic) _Bool showAlternateButton;
@property (nonatomic) _Bool showOkayButton;
@property (nonatomic) _Bool showLearnMoreButton;
@property (nonatomic) _Bool hasFinishedLoadingView;
@property (nonatomic) unsigned long long style;
@property (weak, nonatomic) id <BPSBuddyControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (id)localizedTitle;
- (void)viewDidLoad;
- (id)detailString;
- (id)titleString;
- (id)alternateButtonTitle;
- (id)captionText;
- (id)_baseIdentifier;
- (_Bool)wantsAlternateChoicePillButton;
- (_Bool)wantsAlternateChoiceSystemButton;
- (_Bool)wantsSuggestedChoicePillButton;
- (_Bool)wantsLearnMoreButton;
- (_Bool)wantsOkayPillButton;
- (id)detailTitleString;
- (id)detailAtrributedString;
- (_Bool)wantsToShowWatchHW;
- (id)imageResource;
- (id)imageResourceBundleIdentifier;
- (_Bool)wantsLightenBlendedScreen;
- (id)suggestedButtonTitle;
- (id)okayButtonTitle;
- (void)suggestedButtonPressed:(id)arg1;
- (void)okayButtonPressed:(id)arg1;
- (void)alternateButtonPressed:(id)arg1;
- (id)learnMoreButtonTitle;
- (void)learnMoreButtonPressed:(id)arg1;
- (id)optinLocalizationBundle;
- (id)optinLocalizationStringsFile;
- (void)applyConfirmedOptin:(_Bool)arg1;
- (void)showOptinConfirmationAlert:(id)arg1 optinChoice:(_Bool)arg2;
- (void)_removeButtonObservers;
- (id)privacyBundles;
- (void)_didTapPrivacyAccept:(id)arg1;
- (void)refreshViews;
- (void)_addButtonObservers;
- (void)_refreshButtonTray;
- (id)localizedInformativeText;
- (id)followUpIdentifier;
- (id)followUpActions;
- (id)titleAttributedString;
- (id)localizedNotificationTitle;
- (id)localizedInformativeNotificationText;
- (_Bool)wantsFollowUpNotification;
- (void)addFollowUpForPageAndDevice:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)addFollowUpForPageWithCompletion:(CDUnknownBlockType)arg1;
- (void)removeFollowupForPageWithCompletion:(CDUnknownBlockType)arg1;

@end
