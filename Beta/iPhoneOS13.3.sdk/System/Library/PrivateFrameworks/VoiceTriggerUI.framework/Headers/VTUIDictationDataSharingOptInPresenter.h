/*
 Image: /System/Library/PrivateFrameworks/VoiceTriggerUI.framework/VoiceTriggerUI
 */

#import <Foundation/NSObject.h>

@protocol VTUIDictationDataSharingOptInPresentationDelegate;

@interface VTUIDictationDataSharingOptInPresenter : NSObject

{
    id <VTUIDictationDataSharingOptInPresentationDelegate> _presentationDelegate;
}

@property (weak, nonatomic) id <VTUIDictationDataSharingOptInPresentationDelegate> presentationDelegate;

- (id)dataSharingOptInView;
- (void)_optInButtonTapped;
- (void)_optOutButtonTapped;
- (void)_learnMoreButtonTapped;
- (id)dataSharingOptInAlertController;
- (id)dataSharingReminderAlertController;
- (id)dictationDataSharingOptInAlertViewModel;
- (id)dictationDataSharingOptInReminderViewModel;

@end
