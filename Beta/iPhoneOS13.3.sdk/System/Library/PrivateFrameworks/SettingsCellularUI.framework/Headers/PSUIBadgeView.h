/*
 Image: /System/Library/PrivateFrameworks/SettingsCellularUI.framework/SettingsCellularUI
 */

#import <UIKit/UIView.h>

@class NSString, UILabel;

__attribute__((visibility("hidden")))
@interface PSUIBadgeView : UIView

{
    UILabel *_badgeLabel;
    double _fontSize;
    double _cornerRadius;
    double _minPadding;
    double _baseline;
}

@property (retain, nonatomic) UILabel *badgeLabel;
@property (nonatomic) double fontSize;
@property (nonatomic) double cornerRadius;
@property (nonatomic) double minPadding;
@property (nonatomic) double baseline;
@property (copy, nonatomic) NSString *text;

- (id)init;
- (struct CGSize)intrinsicContentSize;

@end
