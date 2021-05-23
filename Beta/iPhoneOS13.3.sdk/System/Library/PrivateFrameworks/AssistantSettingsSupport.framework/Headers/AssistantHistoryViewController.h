/*
 Image: /System/Library/PrivateFrameworks/AssistantSettingsSupport.framework/AssistantSettingsSupport
 */

#import <Preferences/PSListController.h>

@class AFSettingsConnection, PSDeleteButtonCell, UIActivityIndicatorView;

@protocol AssistantHistoryDelegate;

@interface AssistantHistoryViewController : PSListController

{
    AFSettingsConnection *_settingsConnection;
    PSDeleteButtonCell *_deleteButtonCell;
    UIActivityIndicatorView *_indicatorView;
    id <AssistantHistoryDelegate> _delegate;
}

@property (weak, nonatomic) id <AssistantHistoryDelegate> delegate;

- (id)init;
- (id)specifiers;
- (long long)_getDataSharingOptInStatus;
- (void)_presentPrivacySheet;
- (void)_handleDeleteSiriHistoryButtonPress;
- (void)_deleteSiriHistory;
- (void)_startIndicatorViewSpinning;
- (void)_endIndicatorViewSpinning;
- (void)_presentErrorAlert;
- (void)_animateSpinnerIn;
- (id)_deletionResponseAlertForFailure;

@end
