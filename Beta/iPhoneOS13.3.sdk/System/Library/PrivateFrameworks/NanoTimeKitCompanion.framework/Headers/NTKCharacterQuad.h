/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <ClockKitUI/CLKUIQuad.h>

@class CLKDevice, NTKCharacterRenderer;

@interface NTKCharacterQuad : CLKUIQuad

{
    CLKDevice *_clkDevice;
    NTKCharacterRenderer *_renderer;
}

@property (retain, nonatomic) NTKCharacterRenderer *renderer;

- (void)dealloc;
- (void)purge;
- (void)setupForQuadView:(id)arg1;
- (_Bool)prepareForTime:(double)arg1;
- (void)renderForDisplayWithEncoder:(id)arg1;
- (id)clkDevice;
- (id)initWithCLKDevice:(id)arg1;

@end
