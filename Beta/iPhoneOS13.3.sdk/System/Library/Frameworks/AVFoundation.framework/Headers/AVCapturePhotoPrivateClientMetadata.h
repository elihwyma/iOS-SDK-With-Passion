/*
 Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSString;

@interface AVCapturePhotoPrivateClientMetadata : NSObject

{
    NSDictionary *_inferenceAttachments;
    NSDictionary *_detectedObjectInfo;
    unsigned int _spatialOverCaptureImageStitchingConfidenceScore;
    _Bool _spatialOverCaptureImageHorizonLinePresent;
    float _spatialOverCaptureImageHorizonLineAngleInDegrees;
    float _spatialOverCaptureImageHorizonLineVerticalCenterlineIntersection;
}

@property (readonly) NSString *captureFolderClientPath;
@property (readonly) NSDictionary *inferenceAttachments;
@property (readonly) NSDictionary *detectedObjectInfo;
@property (readonly) unsigned int spatialOverCaptureImageStitchingConfidenceScore;
@property (readonly) _Bool spatialOverCaptureImageHorizonLinePresent;
@property (readonly) float spatialOverCaptureImageHorizonLineAngleInDegrees;
@property (readonly) float spatialOverCaptureImageHorizonLineVerticalCenterlineIntersection;

+ (_Bool)supportsSecureCoding;

- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithMetadataDictionary:(id)arg1;

@end
