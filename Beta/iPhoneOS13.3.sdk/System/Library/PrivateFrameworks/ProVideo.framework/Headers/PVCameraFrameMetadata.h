/*
 Image: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
 */

#import <Foundation/NSObject.h>

@interface PVCameraFrameMetadata : NSObject

{
    long long _cameraPosition;
    double _rollRadians;
    long long _interfaceOrientation;
    long long _captureVideoOrientation;
    CDStruct_91d2e2b9 _orientation;
}

@property (nonatomic, readonly) long long cameraPosition;
@property (nonatomic, readonly) CDStruct_91d2e2b9 orientation;
@property (nonatomic, readonly) double rollRadians;
@property (nonatomic, readonly) long long interfaceOrientation;
@property (nonatomic, readonly) long long captureVideoOrientation;

+ (id)frameMetadata:(long long)arg1:(CDStruct_91d2e2b9)arg2:(double)arg3:(long long)arg4:(long long)arg5;

- (id)description;

@end
