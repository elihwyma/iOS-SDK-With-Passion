/*
 Image: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
 */

#import <UIKit/UIView.h>

@class NotesTextureView;

@interface NotesTextureBackgroundView : UIView

{
    double _textureHeight;
    double _scrollOffset;
    _Bool _scrollsTexture;
    NotesTextureView *_textureView;
}

@property (nonatomic, readonly) NotesTextureView *textureView;
@property _Bool scrollsTexture;

- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)_setOverrideUserInterfaceStyle:(long long)arg1;
- (void)layoutSubviews;
- (void)setContentOffset:(struct CGPoint)arg1;
- (id)initWithFrame:(struct CGRect)arg1 scrollingTextures:(_Bool)arg2 hasAlpha:(_Bool)arg3;
- (void)commonInitWithScrollingTextures:(_Bool)arg1 hasAlpha:(_Bool)arg2;
- (double)heightByCoveringHeight:(double)arg1 withImage:(id)arg2;

@end
