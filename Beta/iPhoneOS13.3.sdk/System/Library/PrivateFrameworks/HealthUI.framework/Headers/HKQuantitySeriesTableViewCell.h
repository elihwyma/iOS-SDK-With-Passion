/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <UIKit/UITableViewCell.h>

@class NSArray;

@interface HKQuantitySeriesTableViewCell : UITableViewCell

{
    NSArray *_currentConstraints;
}

@property (retain, nonatomic) NSArray *currentConstraints;

+ (id)reuseIdentifier;

- (void)traitCollectionDidChange:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (id)_makeConstraints;
- (void)_configureLabels;
- (void)_configureLayoutForTraitCollection:(id)arg1;
- (id)_makeAccessibilityConstraints;

@end
