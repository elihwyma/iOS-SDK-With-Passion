/*
 Image: /System/Library/PrivateFrameworks/HomeAI.framework/HomeAI
 */

#import <Foundation/NSObject.h>

@class HMFUnfairLock, NSMutableArray;

@interface MovingAverage : NSObject

{
    double _movingAverage;
    HMFUnfairLock *_lock;
    NSMutableArray *_queue;
    unsigned long long _windowSize;
}

@property (nonatomic, readonly) HMFUnfairLock *lock;
@property (retain, nonatomic) NSMutableArray *queue;
@property (nonatomic, readonly) unsigned long long windowSize;
@property double movingAverage;

- (id)initWithWindowSize:(unsigned long long)arg1;
- (void)addNumber:(id)arg1;
- (double)movingAverageForInterval:(double)arg1 defaultValue:(double)arg2;

@end
