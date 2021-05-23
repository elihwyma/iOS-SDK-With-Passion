/*
 Image: /System/Library/PrivateFrameworks/SensorKitUI.framework/SensorKitUI
 */

#import <UIKit/UITableViewCell.h>

@class NSArray, UIColor, UIFont, UILabel, UIStackView;

@interface SRAuthorizationCategoryDetailCell : UITableViewCell

{
    _Bool _showAppUsage;
    _Bool _OBKStyle;
    UILabel *_categorySubTitleLabel;
    UILabel *_categoryTitleLabel;
    UILabel *_appUsageTitleLabel;
    UILabel *_appUsageBodyLabel;
    UILabel *_collectedTitleLabel;
    UILabel *_notCollectedTitleLabel;
    NSArray *_collectedLabels;
    NSArray *_notCollectedLabels;
    long long _numberOfCollectedLabels;
    long long _numberOfNotCollectedLabels;
    UIStackView *_categoryStack;
    UIStackView *_appUsageStack;
    UIStackView *_stacks;
    UIFont *_titleFont;
    UIFont *_bodyFont;
    UIColor *_fontColor;
}

@property (retain, nonatomic) NSArray *collectedLabels;
@property (retain, nonatomic) NSArray *notCollectedLabels;
@property (retain, nonatomic) UIStackView *categoryStack;
@property (retain, nonatomic) UIStackView *appUsageStack;
@property (retain, nonatomic) UIStackView *stacks;
@property (retain, nonatomic) UIFont *titleFont;
@property (retain, nonatomic) UIFont *bodyFont;
@property (retain, nonatomic) UIColor *fontColor;
@property (nonatomic) _Bool OBKStyle;
@property (nonatomic, readonly) UILabel *categorySubTitleLabel;
@property (nonatomic, readonly) UILabel *categoryTitleLabel;
@property (nonatomic, readonly) UILabel *appUsageTitleLabel;
@property (nonatomic, readonly) UILabel *appUsageBodyLabel;
@property (nonatomic, readonly) UILabel *collectedTitleLabel;
@property (nonatomic, readonly) UILabel *notCollectedTitleLabel;
@property (nonatomic) _Bool showAppUsage;
@property (nonatomic) long long numberOfCollectedLabels;
@property (nonatomic) long long numberOfNotCollectedLabels;

- (void)dealloc;
- (id)dynamicHeightLabel;
- (id)stackViewForSubviews:(id)arg1 spacing:(double)arg2;
- (void)addBulletStackViewForCollected:(_Bool)arg1 count:(long long)arg2;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 titleFont:(id)arg3 bodyFont:(id)arg4 fontColor:(id)arg5 OBKStyle:(_Bool)arg6;

@end
