/*
 Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface CIBurstClusterDivider : NSObject

{
    float dividerScore;
    int trueLocalMaximum;
    int leftImage;
    float actionAmount;
    float noiseThreshold;
    float highNoiseThreshold;
}

@property float dividerScore;
@property int trueLocalMaximum;
@property int leftImage;
@property float actionAmount;
@property float noiseThreshold;
@property float highNoiseThreshold;

- (long long)compareDividers:(id)arg1;
- (long long)compareIndices:(id)arg1;
- (long long)compareActionAmounts:(id)arg1;

@end
