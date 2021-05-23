/*
 Image: /System/Library/PrivateFrameworks/PassKitUIFoundation.framework/PassKitUIFoundation
 */

#import <PassKitCore/PKMicaLayer.h>

@class CALayer, NSString;

@interface PKPhoneGlyphLayer : PKMicaLayer

{
    CALayer *_highlightLayer;
    struct CGPoint _highlightOffscreenPosition;
    struct CGPoint _highlightOnscreenPosition;
    NSString *_phoneWiggleAnimationKey;
}

- (id)init;
- (void)dealloc;
- (void)setHighlighted:(_Bool)arg1 animated:(_Bool)arg2;
- (void)layerDidBecomeVisible:(_Bool)arg1;
- (id)initWithFrame:(struct CGRect)arg1 package:(id)arg2;
- (void)_restartPhoneWiggleIfNecessary;
- (void)_startPhoneWiggle;
- (void)_endPhoneWiggle;

@end
