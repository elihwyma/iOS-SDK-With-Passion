/*
 Image: /System/Library/PrivateFrameworks/HealthToolbox.framework/HealthToolbox
 */

#import <UIKit/UITableViewCell.h>

@class HKSource, NSString, UIFont;

__attribute__((visibility("hidden")))
@interface WDDataTableViewCell : UITableViewCell

{
    _Bool _displayValueAdjustsFontSizeToFitWidth;
    HKSource *_source;
    NSString *_displayValue;
    NSString *_dateString;
    UIFont *_bodyFont;
    struct UIEdgeInsets _marginInsets;
}

@property (retain, nonatomic) UIFont *bodyFont;
@property (retain, nonatomic) HKSource *source;
@property (nonatomic) struct UIEdgeInsets marginInsets;
@property (retain, nonatomic) NSString *displayValue;
@property (retain, nonatomic) NSString *dateString;
@property (nonatomic) _Bool displayValueAdjustsFontSizeToFitWidth;

- (void)dealloc;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)_contentSizeCategoryDidChange:(id)arg1;
- (void)_setupUI;
- (void)_updateMarginInsets;

@end
