/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <QuartzCore/CALayer.h>

@class _UILabelContentLayer;

__attribute__((visibility("hidden")))
@interface _UILabelLayer : CALayer

{
    _UILabelContentLayer *_contentLayer;
    _Bool _contentInsetsValid;
    struct UIEdgeInsets _contentInsets;
}

- (void)setBounds:(struct CGRect)arg1;
- (void)setNeedsDisplayInRect:(struct CGRect)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)setMasksToBounds:(_Bool)arg1;
- (void)setContentsScale:(double)arg1;
- (void)setContentsGravity:(id)arg1;
- (void)setNeedsDisplayOnBoundsChange:(_Bool)arg1;
- (void)setContentsMultiplyColor:(struct CGColor *)arg1;
- (void)setContentsFormat:(id)arg1;
- (void)layoutSublayers;
- (id)_labelLayerToClipDuringBoundsSizeAnimation;
- (void)_setLabelMasksToBoundsForAnimation:(_Bool)arg1;
- (void)invalidateContentInsets;
- (void)_clearContents;
- (void)_updateContentLayer;
- (void)updateContentInsets;
- (void)updateContentLayerSize;
- (void)_setFrameOrBounds:(struct CGRect)arg1 settingAction:(CDUnknownBlockType)arg2;

@end
