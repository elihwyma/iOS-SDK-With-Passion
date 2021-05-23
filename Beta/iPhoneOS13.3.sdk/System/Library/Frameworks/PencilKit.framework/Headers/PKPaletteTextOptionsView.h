/*
 Image: /System/Library/Frameworks/PencilKit.framework/PencilKit
 */

#import <UIKit/UIView.h>

@class UIButton;

@interface PKPaletteTextOptionsView : UIView

{
    UIButton *_textButton;
    UIButton *_signatureButton;
}

@property (nonatomic, readonly) UIButton *textButton;
@property (nonatomic, readonly) UIButton *signatureButton;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;

@end
