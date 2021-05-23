/*
 Image: /System/Library/PrivateFrameworks/FaceCore.framework/FaceCore
 */

#import <Foundation/NSObject.h>

@class NSData, NSDictionary;

@interface FCRFace : NSObject

{
    CDStruct_ac082cae face;
    CDStruct_ac082cae leftEye;
    CDStruct_ac082cae rightEye;
    CDStruct_ac082cae mouth;
    double faceSize;
    double faceAngle;
    long long trackID;
    unsigned long long trackDuration;
    NSData *faceprint;
    int faceType;
    NSDictionary *faceLandmarkPoints;
    NSDictionary *expressionFeatures;
    NSDictionary *additionalInfo;
}

@property CDStruct_ac082cae face;
@property CDStruct_ac082cae leftEye;
@property CDStruct_ac082cae rightEye;
@property CDStruct_ac082cae mouth;
@property double faceSize;
@property double faceAngle;
@property long long trackID;
@property unsigned long long trackDuration;
@property (retain) NSData *faceprint;
@property int faceType;
@property (retain) NSDictionary *faceLandmarkPoints;
@property (retain) NSDictionary *expressionFeatures;
@property (retain) NSDictionary *additionalInfo;
@property (readonly) _Bool hasLeftEyeBounds;
@property (readonly) _Bool hasRightEyeBounds;
@property (readonly) _Bool hasMouthBounds;

- (void)dealloc;

@end
