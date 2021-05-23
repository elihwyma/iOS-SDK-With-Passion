/*
 Image: /System/Library/PrivateFrameworks/DocumentCamera.framework/DocumentCamera
 */

#import <UIKit/UIView.h>

@class DCNotesTextureView, NSLayoutConstraint;

__attribute__((visibility("hidden")))
@interface DCNotesTextureBackgroundView : UIView

{
    _Bool _scrollsTexture;
    DCNotesTextureView *_textureView;
    NSLayoutConstraint *_textureYConstraint;
    NSLayoutConstraint *_textureHeightConstraint;
}

@property (retain, nonatomic) NSLayoutConstraint *textureYConstraint;
@property (retain, nonatomic) NSLayoutConstraint *textureHeightConstraint;
@property (nonatomic, readonly) DCNotesTextureView *textureView;
@property _Bool scrollsTexture;

+ (id)textureImage;
+ (id)colorWithPaperTexturePatternImage;

- (id)initWithCoder:(id)arg1;
- (void)setBounds:(struct CGRect)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)setContentOffset:(struct CGPoint)arg1;
- (id)initWithFrame:(struct CGRect)arg1 scrollingTextures:(_Bool)arg2 hasAlpha:(_Bool)arg3;
- (void)commonInitWithScrollingTextures:(_Bool)arg1 hasAlpha:(_Bool)arg2;
- (double)heightByCoveringHeight:(double)arg1 withImage:(id)arg2;

@end
