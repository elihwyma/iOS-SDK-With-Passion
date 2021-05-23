/*
 Image: /System/Library/Frameworks/ARKit.framework/ARKit
 */

#import <Foundation/NSObject.h>

@class ARCubemapGenerator, AREnvironmentProbeUpdate, ARImageData, NSMutableArray, NSMutableDictionary, NSUUID;

@protocol OS_dispatch_semaphore;

@interface AREnvironmentProbeManager : NSObject

{
    double _minimumProbeUpdateInterval;
    double _lastProbeUpdateTime;
    NSMutableArray *_initialProbeIdentifiers;
    NSMutableArray *_anchorsToRemove;
    NSMutableDictionary *_probesByIdentifier;
    NSMutableDictionary *_probeIdentifiersByPlaneIdentifier;
    NSMutableArray *_requestedProbeIdentifiers;
    NSMutableArray *_updatedProbeIdentifiers;
    NSMutableArray *_directTexturingIdentifiers;
    NSUUID *_universeProbeIdentifier;
    NSObject<OS_dispatch_semaphore> *_textureDataSemaphore;
    NSMutableArray *_probeUpdateQueue;
    AREnvironmentProbeUpdate *_currentProbeUpdate;
    NSObject<OS_dispatch_semaphore> *_semaphore;
    ARImageData *_lastImageData;
    CDStruct_14d5dc5e _lastCameraTransform;
    vector_f1799d67 _lastPlanes;
    ARCubemapGenerator *_cubemapGenerator;
    _Bool _isReady;
    long long _mode;
}

@property (nonatomic, readonly) long long mode;

- (id).cxx_construct;
- (id)initWithMode:(long long)arg1;
- (id)updateProbesForTimestamp:(double)arg1 planes:(vector_f1799d67)arg2 imageData:(id)arg3 pose:(id)arg4 enableDirectTexturingForProbesWithIdentifier:(id)arg5;
- (void)insertIntoQueue:(id)arg1;
- (void)requestTextureForProbe:(id)arg1;
- (_Bool)addProbeWithAnchor:(id)arg1 timestamp:(double)arg2 textureImmediately:(_Bool)arg3;
- (void)updateProbesFromExistingAnchors:(id)arg1;

@end
