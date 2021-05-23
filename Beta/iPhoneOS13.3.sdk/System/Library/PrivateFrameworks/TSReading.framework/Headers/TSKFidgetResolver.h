/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <Foundation/NSObject.h>

@interface TSKFidgetResolver : NSObject

{
    double _fidgetThreshold;
    id *_values;
    double *_times;
    unsigned long long _head;
}

@property (nonatomic) double fidgetThreshold;
@property (nonatomic, readonly) id nonFidgetValue;

- (id)init;
- (void)dealloc;
- (unsigned long long)p_previousValidIndexFromIndex:(unsigned long long)arg1;
- (void)pushValue:(id)arg1 withTime:(double)arg2;
- (void)p_advanceHead;
- (void)pushValue:(id)arg1;

@end
