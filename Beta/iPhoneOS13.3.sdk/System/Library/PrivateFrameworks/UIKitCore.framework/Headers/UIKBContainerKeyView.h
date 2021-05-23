/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIKBKeyView.h>

__attribute__((visibility("hidden")))
@interface UIKBContainerKeyView : UIKBKeyView

{
    UIKBKeyView *_keyView;
}

- (void)dealloc;
- (id)key;
- (id)factory;
- (void)displayLayer:(id)arg1;
- (void)setNeedsDisplay;
- (void)setRenderConfig:(id)arg1;
- (void)prepareForDisplay;
- (id)contentsKeyView;
- (void)setDrawFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1 keyplane:(id)arg2 key:(id)arg3;
- (id)renderConfig;
- (void)dimKeys:(id)arg1;
- (id)keyplane;
- (_Bool)hasRendered;
- (void)updateForKeyplane:(id)arg1 key:(id)arg2;
- (id)layerForRenderFlags:(long long)arg1;
- (struct CGRect)drawFrame;
- (_Bool)requiresSublayers;
- (long long)imageOrientationForLayer:(id)arg1;
- (void)changeBackgroundToEnabled;
- (void)changeBackgroundToActiveIfNecessary;
- (void)setFactory:(id)arg1;

@end
