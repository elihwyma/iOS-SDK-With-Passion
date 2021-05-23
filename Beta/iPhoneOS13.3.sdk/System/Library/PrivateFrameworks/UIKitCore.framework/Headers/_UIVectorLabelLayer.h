/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <QuartzCore/CALayer.h>

#import <UIKitCore/Swift-Protocol.h>

@class NSArray, NSString, _UIVectorTextLayout;

__attribute__((visibility("hidden")))
@interface _UIVectorLabelLayer : CALayer <Swift>

{
    NSArray *_currentLayers;
    _UIVectorTextLayout *_currentTextLayout;
    unsigned long long _maxRenderedMoveDistance;
}

@property (copy, nonatomic) _UIVectorTextLayout *textLayout;
@property (nonatomic) unsigned long long maxRenderedMoveDistance;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (void)initialize;

- (id)init;
- (void)willChangeValueForKey:(id)arg1;
- (void)didChangeValueForKey:(id)arg1;
- (id)actionForLayer:(id)arg1 forKey:(id)arg2;
- (void)_applyTextLayoutChangeFrom:(id)arg1 to:(id)arg2;
- (void)_cleanupUnusedLayers;
- (id)_layersForTextLayout:(id)arg1;
- (_Bool)_isPathCompatible:(struct CGPath *)arg1 with:(struct CGPath *)arg2;
- (void)_transitionWithSetup:(CDUnknownBlockType)arg1 target:(CDUnknownBlockType)arg2;
- (id)_findSimilarLayer:(id)arg1 inLayers:(id)arg2;

@end
