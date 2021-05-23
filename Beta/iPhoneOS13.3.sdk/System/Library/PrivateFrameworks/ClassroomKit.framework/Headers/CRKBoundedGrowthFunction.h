/*
 Image: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
 */

#import <Foundation/NSObject.h>

@protocol CRKGrowthFunction;

@interface CRKBoundedGrowthFunction : NSObject

{
    id <CRKGrowthFunction> _growthFunction;
    double _lowerBound;
    double _upperBound;
}

@property (nonatomic, readonly) id <CRKGrowthFunction> growthFunction;
@property (nonatomic, readonly) double lowerBound;
@property (nonatomic, readonly) double upperBound;

- (double)evaluateWithValue:(double)arg1;
- (id)initWithGrowthFunction:(id)arg1 lowerBound:(double)arg2 upperBound:(double)arg3;

@end
