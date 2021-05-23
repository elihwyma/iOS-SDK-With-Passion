/*
 Image: /System/Library/PrivateFrameworks/CoverSheet.framework/CoverSheet
 */

#import <CoverSheet/CSCoverSheetViewControllerBase.h>

@class CSStatusTextView, MCProfileConnection, NSString;

@protocol CSStatusTextViewControllerDelegate;

@interface CSStatusTextViewController : CSCoverSheetViewControllerBase

{
    CSStatusTextView *_view;
    NSString *_overrideFooterText;
    MCProfileConnection *_profileConnection;
    id <CSStatusTextViewControllerDelegate> _delegate;
}

@property (weak, nonatomic) id <CSStatusTextViewControllerDelegate> delegate;
@property (copy, nonatomic) NSString *overrideFooterText;

- (id)init;
- (void)loadView;
- (void)viewWillAppear:(_Bool)arg1;
- (void)didMoveToParentViewController:(id)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)_updateText;
- (id)statusTextView;
- (void)_profileStateChangedNotification:(id)arg1;
- (void)_updateTextForProfiles;
- (void)_updateTextForLegal;
- (void)_updateTextForDeviceInformation;
- (void)_updateTextForSupervision;
- (void)_updateTextForProvisionalEnrollment;
- (id)_legalString;
- (id)_legalContact;

@end
