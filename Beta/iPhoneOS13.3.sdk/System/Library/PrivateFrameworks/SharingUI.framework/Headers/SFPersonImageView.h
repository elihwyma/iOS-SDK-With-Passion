/*
 Image: /System/Library/PrivateFrameworks/SharingUI.framework/SharingUI
 */

#import <UIKit/UIImageView.h>

@interface SFPersonImageView : UIImageView

{
    _Bool _imageIsSquare;
    double _highlightDarkeningAlpha;
}

@property (nonatomic) _Bool imageIsSquare;
@property (nonatomic) double highlightDarkeningAlpha;

+ (id)darkenImage:(id)arg1 toLevel:(double)arg2;

- (void)setImage:(id)arg1;
- (void)layoutSubviews;
- (void)setHighlighted:(_Bool)arg1;
- (id)initWithImage:(id)arg1 isSquare:(_Bool)arg2;

@end
