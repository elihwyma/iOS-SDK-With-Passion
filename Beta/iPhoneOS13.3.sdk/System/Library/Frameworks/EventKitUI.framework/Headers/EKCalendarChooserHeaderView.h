/*
 Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

#import <UIKit/UITableViewHeaderFooterView.h>

@class EKCalendarChooser, EKGroupInfo, EKGroupInfoButton, NSArray, UIActivityIndicatorView, UILabel;

@interface EKCalendarChooserHeaderView : UITableViewHeaderFooterView

{
    UIActivityIndicatorView *_spinner;
    NSArray *_primaryLabelWithShowAllButtonLargeConstraints;
    NSArray *_primaryLabelWithoutShowAllButtonLargeConstraints;
    NSArray *_commonLargeConstraints;
    NSArray *_primaryLabelWithShowAllButtonNormalConstraints;
    NSArray *_primaryLabelWithoutShowAllButtonNormalConstraints;
    NSArray *_commonNormalConstraints;
    NSArray *_commonConstraints;
    UILabel *_primaryLabel;
    EKGroupInfoButton *_showAllButton;
    EKCalendarChooser *_chooser;
    EKGroupInfo *_group;
}

@property (retain, nonatomic) UILabel *primaryLabel;
@property (retain, nonatomic) EKGroupInfoButton *showAllButton;
@property (nonatomic) _Bool showAllButtonHidden;
@property (weak, nonatomic) EKCalendarChooser *chooser;
@property (retain, nonatomic) EKGroupInfo *group;

- (id)initWithReuseIdentifier:(id)arg1;
- (void)_contentSizeCategoryChanged:(id)arg1;
- (void)_createConstraints;
- (void)_activateConstraints;
- (void)_groupShowAllButtonTapped:(id)arg1;
- (void)_eventStoreChanged;
- (void)updateSpinner;

@end
