/*
 Image: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
 */

#import <Foundation/NSObject.h>

@interface _ATXMovingAverage : NSObject

{
    double _movingAverage;
    double _movingError;
    long long _count;
    double _alpha;
}

@property (nonatomic, readonly) double movingAverage;
@property (nonatomic, readonly) double movingError;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)addElement:(double)arg1;
- (id)initWithAlpha:(double)arg1;

@end
