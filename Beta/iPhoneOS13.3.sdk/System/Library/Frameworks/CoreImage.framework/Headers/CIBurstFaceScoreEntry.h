/*
 Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface CIBurstFaceScoreEntry : NSObject

{
    float maxScore;
    float minScore;
    float sumScores;
    float sumSqScores;
    int numScores;
}

@property float maxScore;
@property float minScore;
@property int numScores;

- (float)computeAverage;
- (id)initWithScore:(float)arg1;
- (void)addScore:(float)arg1;
- (float)computeStandardDeviation;

@end
