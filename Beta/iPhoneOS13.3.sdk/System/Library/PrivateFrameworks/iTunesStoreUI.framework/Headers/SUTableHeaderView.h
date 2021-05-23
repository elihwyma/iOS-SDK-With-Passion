/*
 Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import <UIKit/UIView.h>

@class NSString, UIColor, UIFont, UILabel;

@interface SUTableHeaderView : UIView

{
    UIColor *_bottomBorderColor;
    struct UIEdgeInsets _edgeInsets;
    long long _index;
    long long _style;
    UILabel *_subtitleLabel;
    UILabel *_titleLabel;
}

@property (retain, nonatomic) UIColor *bottomBorderColor;
@property (nonatomic) struct UIEdgeInsets edgeInsets;
@property (nonatomic) long long index;
@property (retain, nonatomic) UIColor *shadowColor;
@property (nonatomic) long long style;
@property (retain, nonatomic) NSString *subtitle;
@property (retain, nonatomic) UIFont *subtitleFont;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) UIFont *titleFont;
@property (retain, nonatomic) UIColor *textColor;

- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)sizeToFit;
- (void)drawRect:(struct CGRect)arg1;

@end
