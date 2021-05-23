/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <UIKit/UIView.h>

@class NSArray, NSMutableArray, NSString, SKUIColorScheme, UILabel;

__attribute__((visibility("hidden")))
@interface SKUIProductInformationView : UIView

{
    SKUIColorScheme *_colorScheme;
    struct UIEdgeInsets _contentInset;
    NSArray *_informationLines;
    NSMutableArray *_imageValues;
    NSMutableArray *_keyLabels;
    UIView *_separatorView;
    UILabel *_titleLabel;
    NSMutableArray *_valueLabels;
}

@property (retain, nonatomic) SKUIColorScheme *colorScheme;
@property (nonatomic) struct UIEdgeInsets contentInset;
@property (retain, nonatomic) NSArray *informationLines;
@property (nonatomic) _Bool hidesSeparatorView;
@property (retain, nonatomic) NSString *title;

- (void)setBackgroundColor:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (double)_keyWidth;

@end
