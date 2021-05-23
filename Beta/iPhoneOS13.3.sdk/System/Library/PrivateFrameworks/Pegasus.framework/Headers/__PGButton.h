/*
 Image: /System/Library/PrivateFrameworks/Pegasus.framework/Pegasus
 */

#import <UIButton.h>

@class PGBackdropView, UIImage, UIImageView;

__attribute__((visibility("hidden")))
@interface __PGButton : UIButton

{
    PGBackdropView *_backdropView;
    UIImageView *_highlightImageView;
    UIImageView *_foregroundImageView;
    UIImage *_backgroundImage;
    long long _buttonStyle;
}

@property (nonatomic, readonly) long long buttonStyle;

- (id)initWithCoder:(id)arg1;
- (void)setBounds:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)setHighlighted:(_Bool)arg1;
- (void)setImage:(id)arg1 forState:(unsigned long long)arg2;
- (void)setBackgroundImage:(id)arg1 forState:(unsigned long long)arg2;
- (id)initWithButtonStyle:(long long)arg1;
- (void)_updateHighlightImageView;

@end
