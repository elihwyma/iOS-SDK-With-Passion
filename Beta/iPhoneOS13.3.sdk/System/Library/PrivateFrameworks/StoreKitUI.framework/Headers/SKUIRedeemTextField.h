/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <UIKit/UITextField.h>

@class UIView;

__attribute__((visibility("hidden")))
@interface SKUIRedeemTextField : UITextField

{
    UIView *_bottomBorderView;
    UIView *_topBorderView;
    UIView *_backdropView;
    _Bool _backdropBackground;
    _Bool _suppressBorder;
}

@property (nonatomic) _Bool backdropBackground;
@property (nonatomic) _Bool suppressBorder;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (struct CGRect)textRectForBounds:(struct CGRect)arg1;
- (struct CGRect)editingRectForBounds:(struct CGRect)arg1;
- (struct CGRect)placeholderRectForBounds:(struct CGRect)arg1;

@end
