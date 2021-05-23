/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

#import <OfficeImport/Swift-Protocol.h>

@class OADRotation3D;

__attribute__((visibility("hidden")))
@interface OADCamera : NSObject <Swift>

{
    OADRotation3D *mRotation;
    int mCameraType;
    float mFieldOfView;
    float mZoom;
}

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (int)cameraType;
- (id)rotation;
- (void)setRotation:(id)arg1;
- (void)setZoom:(float)arg1;
- (float)zoom;
- (float)fieldOfView;
- (void)setCameraType:(int)arg1;
- (void)setFieldOfView:(float)arg1;

@end
