/*
 Image: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities
 */

#import <Foundation/NSObject.h>

@class NSDictionary;

@interface AXMVisionFeatureFaceLandmarks : NSObject

{
    _Bool _is3DLandmarks;
    NSDictionary *_results;
}

@property (nonatomic) _Bool is3DLandmarks;
@property (retain, nonatomic) NSDictionary *results;

+ (_Bool)supportsSecureCoding;
+ (id)unitTestingFaceLandmarksIs3D:(_Bool)arg1;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithVisionFaceLandmarks:(id)arg1;
- (id)pointsArrayForRegion:(id)arg1;
- (id)pointValuesForFaceLandmarkType:(unsigned long long)arg1;
- (id)localizedStringForLandmarkType:(unsigned long long)arg1;

@end
