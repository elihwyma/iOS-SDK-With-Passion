/*
 Image: /System/Library/Frameworks/CoreML.framework/CoreML
 */

#import <NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface MLKNearestNeighborsClassifierParameters : NSObject

{
    unsigned long long _numberOfDimensions;
    long long _weightingScheme;
    long long _indexType;
    unsigned long long _leafSize;
    NSObject *_defaultLabel;
    NSString *_nearestLabelsFeatureName;
    NSString *_nearestDistancesFeatureName;
}

@property unsigned long long numberOfDimensions;
@property long long weightingScheme;
@property long long indexType;
@property unsigned long long leafSize;
@property (retain) NSObject *defaultLabel;
@property (retain) NSString *nearestLabelsFeatureName;
@property (retain) NSString *nearestDistancesFeatureName;

@end
