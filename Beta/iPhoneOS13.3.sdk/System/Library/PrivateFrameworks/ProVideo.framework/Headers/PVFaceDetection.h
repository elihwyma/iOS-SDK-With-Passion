/*
 Image: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
 */

#import <Foundation/NSObject.h>

@class AVMetadataFaceObject;

@interface PVFaceDetection : NSObject

{
    _Bool _hasRollAngle;
    _Bool _hasYawAngle;
    long long _ID;
    double _rollAngleInDegrees;
    double _yawAngleInDegrees;
    long long _detectionOrientation;
    AVMetadataFaceObject *_faceObject;
    CDStruct_1b6d18a9 _time;
    struct CGRect _boundingBox;
}

@property (nonatomic, readonly) long long ID;
@property (nonatomic, readonly) _Bool hasRollAngle;
@property (nonatomic, readonly) double rollAngleInDegrees;
@property (nonatomic, readonly) _Bool hasYawAngle;
@property (nonatomic, readonly) double yawAngleInDegrees;
@property (nonatomic, readonly) struct CGRect boundingBox;
@property (nonatomic, readonly) long long detectionOrientation;
@property (nonatomic, readonly) CDStruct_1b6d18a9 time;
@property (retain, nonatomic, readonly) AVMetadataFaceObject *faceObject;

+ (id)faceDetection:(long long)arg1:(_Bool)arg2:(double)arg3:(_Bool)arg4:(double)arg5:(struct CGRect)arg6:(long long)arg7:(CDStruct_1b6d18a9)arg8:(id)arg9;

- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)debugDescription;
- (_Bool)isEqualToFaceDetection:(id)arg1;

@end
