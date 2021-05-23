/*
 Image: /System/Library/PrivateFrameworks/BridgePreferences.framework/BridgePreferences
 */

#import <UIKit/UIViewController.h>

@class NSString, UILabel, UIView;

@protocol BPSBuddyControllerDelegate;

@interface BPSSetupPageViewController : UIViewController

{
    UIView *_contentView;
    UILabel *_titleLabel;
    id <BPSBuddyControllerDelegate> _delegate;
}

@property (nonatomic, readonly) UILabel *titleLabel;
@property (nonatomic, readonly) struct CGRect computedTitleFrame;
@property (nonatomic, readonly) UIView *contentView;
@property (weak, nonatomic) id <BPSBuddyControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (id)localizedTitle;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (id)titleString;
- (id)_baseIdentifier;
- (_Bool)contentViewIsInAdjustedScrollView;
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
- (void)updateTitleLabel;
- (double)verticalTitleInset;

@end
