/*
 Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import <Celestial/BWLandmarksInferenceConfiguration.h>

@interface BWFaceSegmentsWithLandmarksInferenceConfiguration : BWLandmarksInferenceConfiguration

{
    _Bool _detectFacesInFullSizeInput;
    _Bool _skipFaceLandmarkDetection;
    _Bool _includesInvalidContent;
}

@property (nonatomic) _Bool detectFacesInFullSizeInput;
@property (nonatomic) _Bool skipFaceLandmarkDetection;
@property (nonatomic) _Bool includesInvalidContent;

+ (id)configuration;

- (id)initWithInferenceType:(int)arg1;

@end
