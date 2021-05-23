/*
 Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

#import <UIKit/UIView.h>

@class UILabel;

@interface PSKeychainSyncHeaderView : UIView

{
    UILabel *_titleLabel;
    UILabel *_detailLabel;
    _Bool _usesCompactLayout;
}

@property (nonatomic) _Bool usesCompactLayout;

- (void)layoutSubviews;
- (void)setTitleText:(id)arg1;
- (void)setDetailText:(id)arg1;
- (id)initWithSpecifier:(id)arg1;
- (double)preferredHeightForWidth:(double)arg1 inTableView:(id)arg2;

@end
