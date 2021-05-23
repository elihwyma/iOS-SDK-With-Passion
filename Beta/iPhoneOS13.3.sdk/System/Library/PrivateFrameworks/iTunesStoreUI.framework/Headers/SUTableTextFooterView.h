/*
 Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import <UIKit/UIView.h>

@class NSArray, UIColor, UIFont;

@interface SUTableTextFooterView : UIView

{
    UIFont *_font;
    UIColor *_shadowColor;
    long long _textAlignment;
    UIColor *_textColor;
    NSArray *_textLines;
}

@property (retain, nonatomic) UIFont *font;
@property (retain, nonatomic) UIColor *shadowColor;
@property (nonatomic) long long textAlignment;
@property (retain, nonatomic) UIColor *textColor;
@property (retain, nonatomic) NSArray *textLines;

- (void)dealloc;
- (void)sizeToFit;
- (void)drawRect:(struct CGRect)arg1;

@end
