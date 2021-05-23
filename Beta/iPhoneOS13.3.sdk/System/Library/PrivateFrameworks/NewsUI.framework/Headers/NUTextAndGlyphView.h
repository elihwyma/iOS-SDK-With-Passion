/*
 Image: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
 */

#import <UIKit/UIView.h>

@class NSString, NUTextAndGlyph, UIImageView, UILabel;

@interface NUTextAndGlyphView : UIView

{
    NUTextAndGlyph *_textAndGlyph;
    UILabel *_label;
    UIImageView *_imageView;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) UILabel *label;
@property (nonatomic, readonly) UIImageView *imageView;
@property (retain, nonatomic) NUTextAndGlyph *textAndGlyph;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)nu_crossFadeViewClearVisibleState;
- (void)nu_crossFadeViewSetValue:(id)arg1;

@end
