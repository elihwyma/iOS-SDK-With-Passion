/*
 Image: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
 */

#import <Foundation/NSObject.h>

@class AVMetadataFaceObject;

@interface PVFaceDetectionDepr : NSObject

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

@property (nonatomic) long long ID;
@property (nonatomic) _Bool hasRollAngle;
@property (nonatomic) double rollAngleInDegrees;
@property (nonatomic) _Bool hasYawAngle;
@property (nonatomic) double yawAngleInDegrees;
@property (nonatomic) struct CGRect boundingBox;
@property (nonatomic) CDStruct_1b6d18a9 time;
@property (nonatomic) long long detectionOrientation;
@property (retain) AVMetadataFaceObject *faceObject;

- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)debugDescription;
- (_Bool)isEqualToFaceDetection:(id)arg1;
- (id)initWithFaceObject:(id)arg1;

@end
