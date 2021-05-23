/*
 Image: /System/Library/PrivateFrameworks/AssetViewer.framework/AssetViewer
 */

#import <UIKit/UIView.h>

@class ASVBadgeDescription, UIImageView, UIVisualEffectView;

@interface ASVBadgeView : UIView

{
    UIVisualEffectView *_blurView;
    UIImageView *_badgeImageView;
    UIView *_shadowView;
    _Bool _highlighted;
    ASVBadgeDescription *_badgeDescription;
    struct CGSize _thumbnailSize;
}

@property (nonatomic) struct CGSize thumbnailSize;
@property (nonatomic, readonly) ASVBadgeDescription *badgeDescription;
@property (nonatomic, getter=isHighlighted) _Bool highlighted;

+ (id)badgeView;
+ (id)normalBlurViewEffects;
+ (id)highlightedBlurViewEffects;
+ (void)applyBlurWithBackground:(id)arg1 offset:(struct CGPoint)arg2;
+ (id)badgeForThumbnail:(id)arg1;

- (struct CGSize)intrinsicContentSize;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)_updateShadow;
- (void)setUpView;

@end
