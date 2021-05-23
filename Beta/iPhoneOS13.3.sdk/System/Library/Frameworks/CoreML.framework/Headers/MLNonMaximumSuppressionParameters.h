/*
 Image: /System/Library/Frameworks/CoreML.framework/CoreML
 */

#import <NSObject.h>

@class NSArray, NSString;

@interface MLNonMaximumSuppressionParameters : NSObject

{
    _Bool _perClass;
    int _suppressionMethod;
    double _iouThreshold;
    double _confidenceThreshold;
    unsigned long long _minBoxes;
    long long _maxBoxes;
    unsigned long long _numClasses;
    NSString *_confidenceInputFeatureName;
    NSString *_coordinatesInputFeatureName;
    NSString *_iouThresholdInputFeatureName;
    NSString *_confidenceThresholdInputFeatureName;
    NSString *_confidenceOutputFeatureName;
    NSString *_coordinatesOutputFeatureName;
    NSArray *_labelNames;
}

@property int suppressionMethod;
@property double iouThreshold;
@property double confidenceThreshold;
@property unsigned long long minBoxes;
@property long long maxBoxes;
@property unsigned long long numClasses;
@property _Bool perClass;
@property (retain) NSString *confidenceInputFeatureName;
@property (retain) NSString *coordinatesInputFeatureName;
@property (retain) NSString *iouThresholdInputFeatureName;
@property (retain) NSString *confidenceThresholdInputFeatureName;
@property (retain) NSString *confidenceOutputFeatureName;
@property (retain) NSString *coordinatesOutputFeatureName;
@property (retain) NSArray *labelNames;

- (id)objectBoundingBoxOutputDescription;

@end
