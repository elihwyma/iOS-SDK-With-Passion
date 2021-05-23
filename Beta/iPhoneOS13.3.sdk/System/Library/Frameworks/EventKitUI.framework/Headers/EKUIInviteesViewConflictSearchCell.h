/*
 Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

#import <UIKit/UITableViewCell.h>

@class NSArray, UIActivityIndicatorView, UIColor, UILabel;

@interface EKUIInviteesViewConflictSearchCell : UITableViewCell

{
    UILabel *_label;
    NSArray *_persistentConstraints;
    double _leftInset;
    UIActivityIndicatorView *_spinner;
    UIColor *_originalLabelFontColor;
}

@property (retain, nonatomic) UILabel *label;
@property (retain, nonatomic) NSArray *persistentConstraints;
@property (nonatomic) double leftInset;
@property (retain, nonatomic) UIActivityIndicatorView *spinner;
@property (retain, nonatomic) UIColor *originalLabelFontColor;

+ (id)_labelFont;
+ (id)_showMoreLocalizedString;
+ (id)_grayTextColor;

- (void)updateConstraints;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)_setText:(id)arg1 textColor:(id)arg2 spinnerEnabled:(_Bool)arg3;
- (void)setInitialSearchInProgressState;
- (void)setNoAvailableTimesStateWithNumberOfExistingTimes:(unsigned long long)arg1 hasError:(_Bool)arg2;
- (void)setShowMoreState;
- (void)setAvailabilityRequestInProgressState;

@end
