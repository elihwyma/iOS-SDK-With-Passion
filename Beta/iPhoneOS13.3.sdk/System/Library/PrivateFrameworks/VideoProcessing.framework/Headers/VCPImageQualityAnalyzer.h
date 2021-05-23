/*
 Image: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface VCPImageQualityAnalyzer : NSObject

{
    float _qualityScore;
}

@property (readonly) float qualityScore;

- (int)analyzeImageQuality:(id)arg1 irisPhotoOffsetSec:(float)arg2 cancel:(CDUnknownBlockType)arg3;

@end
