/*
 Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import <iTunesStoreUI/SUSubtitledButton.h>

@class UIBezierPath, UIView;

@interface SURoundedCornersButton : SUSubtitledButton

{
    UIBezierPath *_bezierPath;
    UIView *_highlightedBackgroundView;
    UIBezierPath *_shadowPath;
}

- (void)dealloc;
- (void)setFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (id)_highlightedBackgroundView;

@end
