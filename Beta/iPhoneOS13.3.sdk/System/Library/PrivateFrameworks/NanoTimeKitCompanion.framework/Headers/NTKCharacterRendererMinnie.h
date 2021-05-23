/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <NanoTimeKitCompanion/NTKCharacterRenderer.h>

@class NSMutableArray, _Flower, _Skirt;

@interface NTKCharacterRendererMinnie : NTKCharacterRenderer

{
    _Flower *_flower;
    _Skirt *_skirt;
    NSMutableArray *_footTexs[2];
}

- (id)initWithLoader:(id)arg1;
- (void)setupGeometry;
- (void)setupBodyState;
- (void)loadFootTextures;
- (int)getBlinkFrameFor15sTime:(float)arg1;
- (void)_drawBodyWithEncoder:(id)arg1;
- (void)_drawTappingFootWithEncoder:(id)arg1;
- (void)_drawHeadWithEncoder:(id)arg1;
- (float)_getBlinkDuration;
- (void)_drawFlowerWithEncoder:(id)arg1;
- (void)_drawSkirtWithEncoder:(id)arg1;

@end
