/*
 Image: /System/Library/PrivateFrameworks/ATFoundation.framework/ATFoundation
 */

#import <Foundation/NSObject.h>

@interface ATMovingAverage : NSObject

{
    unsigned long long _window;
    double *_values;
    unsigned long long _count;
    unsigned long long _index;
}

@property (nonatomic, readonly) unsigned long long window;
@property (nonatomic, readonly) double average;

- (void)dealloc;
- (void)reset;
- (id)initWithWindow:(unsigned long long)arg1;
- (void)update:(double)arg1;

@end
