/*
 Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

#import <UIKit/UIView.h>

@class CALayer, UIColor;

__attribute__((visibility("hidden")))
@interface CNAvatarCardHighlightView : UIView

{
    CALayer *_highlightLayer;
}

@property (retain, nonatomic) CALayer *highlightLayer;
@property (retain, nonatomic) UIColor *highlightColor;
@property (nonatomic, readonly) _Bool highlighted;

- (void)_commonInit;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)awakeFromNib;
- (void)setHighlighted:(_Bool)arg1 animated:(_Bool)arg2;

@end
