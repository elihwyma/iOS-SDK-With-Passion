/*
 Image: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
 */

#import <Foundation/NSObject.h>

@class CFXAnimojiEffectRenderer, CFXFaceTrackingRenderer, JTFrameRateCalculator, JTPixelRotationSession, NSString, PVLivePlayer, PVLivePlayerCameraSource;

@protocol CFXRendererDelegate;

@interface CFXRenderer : NSObject

{
    _Bool _logged_render_request_failure_animoji;
    _Bool _logged_render_request_failure_facetracking;
    long long _captureMode;
    long long _cameraMode;
    JTPixelRotationSession *_pixelRotationSession;
    id <CFXRendererDelegate> _delegate;
    PVLivePlayer *_livePlayer;
    PVLivePlayerCameraSource *_cameraSource;
    CFXAnimojiEffectRenderer *_animojiRenderer;
    CFXFaceTrackingRenderer *_faceTrackingRenderer;
    JTFrameRateCalculator *_fpsCalc;
}

@property (nonatomic) long long captureMode;
@property (nonatomic, readonly) long long cameraMode;
@property (retain, nonatomic) JTPixelRotationSession *pixelRotationSession;
@property (weak, nonatomic) id <CFXRendererDelegate> delegate;
@property (retain, nonatomic) PVLivePlayer *livePlayer;
@property (nonatomic, readonly) _Bool livePlayerIsSaturated;
@property (retain, nonatomic) PVLivePlayerCameraSource *cameraSource;
@property (retain, nonatomic) CFXAnimojiEffectRenderer *animojiRenderer;
@property (retain, nonatomic) CFXFaceTrackingRenderer *faceTrackingRenderer;
@property (nonatomic, readonly) JTFrameRateCalculator *fpsCalc;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (void)initialize;

- (void)dealloc;
- (void)pause;
- (void)resume;
- (void)flush;
- (void)shutdown;
- (id)initWithDelegate:(id)arg1 captureMode:(long long)arg2;
- (void)willDropCameraFrame;
- (void)renderFrame:(id)arg1 effectComposition:(id)arg2;
- (id)buildRenderRequest:(id)arg1 time:(CDStruct_1b6d18a9)arg2;
- (void)renderRequestComplete:(id)arg1 results:(id)arg2 completedOutOfOrder:(_Bool)arg3;
- (void)livePlayerDroppedFrame:(int)arg1 sources:(id)arg2 time:(CDStruct_1b6d18a9)arg3;
- (id)CFX_PVFrameSetFromCFXFrame:(id)arg1;
- (id)CFX_JTEffectsFromCFXEffectComposition:(id)arg1 forRenderTime:(CDStruct_1b6d18a9)arg2;

@end
