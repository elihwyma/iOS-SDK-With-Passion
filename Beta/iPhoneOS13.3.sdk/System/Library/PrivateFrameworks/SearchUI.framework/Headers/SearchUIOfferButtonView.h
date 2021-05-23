/*
 Image: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
 */

#import <UIKit/UIButton.h>

@class NSString, TLKEmbossedLabel;

@interface SearchUIOfferButtonView : UIButton

{
    NSString *_offerTitle;
    NSString *_symbolImageName;
    TLKEmbossedLabel *_label;
    UIButton *_button;
}

@property (retain, nonatomic) TLKEmbossedLabel *label;
@property (retain, nonatomic) UIButton *button;
@property (retain, nonatomic) NSString *offerTitle;
@property (nonatomic) _Bool adjustsFontSizeToFitWidth;
@property (retain, nonatomic) NSString *symbolImageName;

- (id)init;
- (void)layoutSubviews;
- (void)setHighlighted:(_Bool)arg1;
- (void)didMoveToWindow;
- (void)_dynamicUserInterfaceTraitDidChange;
- (void)tlk_updateForAppearance:(id)arg1;
- (void)updateSelectionState:(_Bool)arg1;

@end
