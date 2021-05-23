/*
 Image: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
 */

#import <Foundation/NSObject.h>

#import <ProVideo/Swift-Protocol.h>

@class NSString;

@interface OZFxPlug3DAPI : NSObject <Swift>

{
    _Bool _is3D;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (_Bool)isUsingCamera;
- (_Bool)is3D;
- (id)cameraMatrixAtTime:(double)arg1;
- (id)layerMatrixAtTime:(double)arg1;
- (double)focalLengthAtTime:(double)arg1;
- (id)worldToFilmMatrix;
- (id)worldToObjectMatrix;
- (id)worldToEyeMatrix;
- (double)focalLengthAtFxTime:(CDUnion_baaf6063)arg1;
- (_Bool)conformsToProtocol:(id)arg1 version:(unsigned int)arg2;
- (void)_setCameraMatrix:(PCMatrix44Tmpl_93ed1289)arg1;
- (void)_setWorldToFilmMatrix:(PCMatrix44Tmpl_93ed1289)arg1;
- (void)_setLayerMatrix:(PCMatrix44Tmpl_93ed1289)arg1;
- (void)_setWorldToLayerMatrix:(PCMatrix44Tmpl_93ed1289)arg1;
- (void)_setWorldToObjectMatrix:(PCMatrix44Tmpl_93ed1289)arg1;
- (void)_setWorldToEyeMatrix:(PCMatrix44Tmpl_93ed1289)arg1;
- (void)_setIs3D:(_Bool)arg1;
- (void)_setFocalLength:(double)arg1;
- (id)worldToLayerMatrix;

@end
