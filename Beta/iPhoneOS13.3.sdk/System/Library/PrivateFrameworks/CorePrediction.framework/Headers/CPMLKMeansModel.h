/*
 Image: /System/Library/PrivateFrameworks/CorePrediction.framework/CorePrediction
 */

#import <CorePrediction/CPMLModel.h>

@interface CPMLKMeansModel : CPMLModel

- (id)size;
- (id)iter;
- (id)cluster;
- (id)withinss;
- (id)totss;
- (id)totalWithinss;
- (id)centers;
- (id)betweenss;

@end
