/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <SpriteKit/SKCropNode.h>

@class NTKCollectionNode, SKSpriteNode;

@interface NTKVariantNode : SKCropNode

{
    SKSpriteNode *_transitionMask;
}

@property (nonatomic, readonly) NTKCollectionNode *ticks;
@property (nonatomic, readonly) NTKCollectionNode *labels;
@property (nonatomic, readonly) NTKCollectionNode *other;

- (id)initWithElements:(id)arg1;
- (void)applyAppearanceFraction:(double)arg1;
- (void)applyAppearanceFraction:(double)arg1 inverted:(_Bool)arg2;
- (void)applyFullAppearance;
- (void)appearAnimated;
- (void)disappearAnimated;
- (void)resetAlphaAndScale;
- (void)_stopMasking;
- (void)createTransitionMaskLazily;
- (void)revealWithFraction:(double)arg1 invert:(_Bool)arg2;

@end
