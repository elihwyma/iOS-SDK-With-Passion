/*
 Image: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
 */

#import <Foundation/NSObject.h>

@interface ATXCorrelatedEventsDateBuffer : NSObject

{
    double _bufferSeconds;
    long long _bufferType;
}

@property (nonatomic, readonly) double bufferSeconds;
@property (nonatomic, readonly) long long bufferType;

- (id)initWithBufferSeconds:(double)arg1 andBufferType:(long long)arg2;
- (id)startDateWithBufferForEvent:(id)arg1;
- (id)endDateWithBufferForEvent:(id)arg1;

@end
