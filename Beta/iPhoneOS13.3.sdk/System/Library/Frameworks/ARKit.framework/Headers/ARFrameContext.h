/*
 Image: /System/Library/Frameworks/ARKit.framework/ARKit
 */

#import <Foundation/NSObject.h>

@class ARDeviceOrientationData, ARImageData, ARLocationData, ARWorldMap, NSMutableArray, NSMutableSet, NSString;

@interface ARFrameContext : NSObject

{
    NSMutableArray *_anchorsToAdd;
    NSMutableArray *_anchorsToRemove;
    _Bool _didRelocalize;
    _Bool _sessionTransformUpdated;
    _Bool _sessionTransformReset;
    _Bool _sessionTransformShouldResumeCameraHeading;
    _Bool _sessionTransformShouldResumeCameraPosition;
    _Bool _shouldRemoveExistingAnchors;
    ARImageData *_imageData;
    ARDeviceOrientationData *_orientationData;
    ARLocationData *_locationData;
    long long _worldAlignment;
    ARWorldMap *_worldMap;
    unsigned long long _frameDebugOptions;
    NSMutableSet *_collaborationData;
    CDStruct_14d5dc5e _relocalizationDeltaTransform;
    CDStruct_14d5dc5e _sessionTransform;
}

@property (nonatomic) _Bool didRelocalize;
@property (nonatomic) CDStruct_14d5dc5e relocalizationDeltaTransform;
@property (nonatomic) CDStruct_14d5dc5e sessionTransform;
@property (nonatomic, readonly) _Bool sessionTransformUpdated;
@property (nonatomic, readonly) _Bool sessionTransformReset;
@property (nonatomic, readonly) _Bool sessionTransformShouldResumeCameraHeading;
@property (nonatomic, readonly) _Bool sessionTransformShouldResumeCameraPosition;
@property (nonatomic, readonly) _Bool shouldRemoveExistingAnchors;
@property (retain, nonatomic) NSMutableSet *collaborationData;
@property (retain, nonatomic) ARImageData *imageData;
@property (retain, nonatomic) ARDeviceOrientationData *orientationData;
@property (retain, nonatomic) ARLocationData *locationData;
@property (nonatomic) long long worldAlignment;
@property (retain, nonatomic) ARWorldMap *worldMap;
@property (nonatomic) unsigned long long frameDebugOptions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (long long)cameraPosition;
- (void)addAnchor:(id)arg1;
- (void)removeAnchor:(id)arg1;
- (id)resultDataOfClass:(Class)arg1;
- (id)anchorsToAdd;
- (id)anchorsToRemove;
- (void)resetSessionTransform;
- (void)resumeSessionCameraPosition;
- (void)resumeSessionCameraPositionAndHeading;
- (void)clearAddedAnchors;

@end
