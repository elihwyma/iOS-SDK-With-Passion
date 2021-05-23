/*
 Image: /System/Library/PrivateFrameworks/PencilPairingUI.framework/PencilPairingUI
 */

#import <UIKit/UIView.h>

@class PKInk, UIImageView;

@interface PNPWizardScratchpadInkView : UIView

{
    UIImageView *_imageView;
    _Bool _selected;
    _Bool _pressed;
    PKInk *_ink;
}

@property (nonatomic, readonly) PKInk *ink;
@property (nonatomic) _Bool selected;
@property (nonatomic) _Bool pressed;

+ (void)initialize;
+ (double)preferredHeight;

- (id)initWithIndex:(long long)arg1;
- (struct CGSize)intrinsicContentSize;
- (void)layoutSubviews;

@end
