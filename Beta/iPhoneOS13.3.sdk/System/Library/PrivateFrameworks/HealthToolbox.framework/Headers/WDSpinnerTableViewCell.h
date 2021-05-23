/*
 Image: /System/Library/PrivateFrameworks/HealthToolbox.framework/HealthToolbox
 */

#import <UIKit/UITableViewCell.h>

@class NSString, UIActivityIndicatorView, UILabel, UIView;

__attribute__((visibility("hidden")))
@interface WDSpinnerTableViewCell : UITableViewCell

{
    UIView *_contentContainerView;
    UIActivityIndicatorView *_spinner;
    UILabel *_waitingReasonLabel;
}

@property (retain) UIView *contentContainerView;
@property (retain) UIActivityIndicatorView *spinner;
@property (retain) UILabel *waitingReasonLabel;
@property (retain, nonatomic) NSString *waitingReason;

+ (id)defaultReuseIdentifier;

- (void)prepareForReuse;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)setupConstraints;
- (void)setupSubviews;

@end
