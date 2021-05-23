/*
 Image: /System/Library/PrivateFrameworks/BiometricKitUI.framework/BiometricKitUI
 */

#import <MetalKit/MTKView.h>

@class BKUIPearlCrossHairsManager, MISSING_TYPE, MTLSAnimatablePathCollection, MTLSPathBufferData, MTLSplineRenderer, NSObject;

@protocol MTLCommandQueue, OS_dispatch_semaphore;

@interface BKUIPearlCrossHairsRenderingView : MTKView

{
    NSObject<OS_dispatch_semaphore> *_inFlightSemaphore;
    id <MTLCommandQueue> _commandQueue;
    double _time;
    float _pathBlend;
    float _pathBlendDest;
    unsigned long long _state;
    MTLSAnimatablePathCollection *_crosshairsPathCollection;
    BKUIPearlCrossHairsManager *_crosshairsInstanceManager;
    MTLSPathBufferData *_crosshairsData;
    MTLSAnimatablePathCollection *_checkMarkPathCollection;
    MTLSPathBufferData *_checkMarkData;
    MTLSplineRenderer *_renderer;
    MISSING_TYPE *_axis;
}

@property (nonatomic) unsigned long long state;
@property MISSING_TYPE *axis;
@property (retain) MTLSAnimatablePathCollection *crosshairsPathCollection;
@property (retain) BKUIPearlCrossHairsManager *crosshairsInstanceManager;
@property (retain) MTLSPathBufferData *crosshairsData;
@property (retain) MTLSAnimatablePathCollection *checkMarkPathCollection;
@property (retain) MTLSPathBufferData *checkMarkData;
@property (retain) MTLSplineRenderer *renderer;
@property (nonatomic) _Bool grayscale;

- (void)setSampleCount:(unsigned long long)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (unsigned long long)getState;
- (id)initWithFrame:(struct CGRect)arg1 device:(id)arg2;
- (void)setAxis:(_Bool)arg1 animated: /* Error: Ran out of types for this method. */;

@end
