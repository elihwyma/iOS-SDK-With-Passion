/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <UIKit/UITableViewCell.h>

@class HKElectrocardiogram, HKElectrocardiogramCardView, NSLayoutConstraint;

@interface HKElectrocardiogramTableViewCell : UITableViewCell

{
    _Bool _bottomPaddingDisabled;
    HKElectrocardiogramCardView *_cardView;
    NSLayoutConstraint *_bottomPaddingConstraint;
}

@property (retain, nonatomic) HKElectrocardiogramCardView *cardView;
@property (retain, nonatomic) NSLayoutConstraint *bottomPaddingConstraint;
@property (retain, nonatomic) HKElectrocardiogram *sample;
@property (nonatomic) _Bool bottomPaddingDisabled;

+ (id)defaultReuseIdentifier;
+ (double)estimatedHeight;

- (void)prepareForReuse;
- (void)_setupConstraints;
- (id)initWithSample:(id)arg1 dateCache:(id)arg2 onboarding:(_Bool)arg3;
- (void)_setupUIWithSample:(id)arg1 dateCache:(id)arg2 onboarding:(_Bool)arg3;

@end
