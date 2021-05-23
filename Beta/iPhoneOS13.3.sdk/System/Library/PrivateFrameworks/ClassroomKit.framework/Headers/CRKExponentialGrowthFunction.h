/*
 Image: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
 */

#import <Foundation/NSObject.h>

@interface CRKExponentialGrowthFunction : NSObject

{
    double _growthRate;
}

@property (nonatomic, readonly) double growthRate;

- (double)evaluateWithValue:(double)arg1;
- (id)initWithGrowthRate:(double)arg1;

@end
