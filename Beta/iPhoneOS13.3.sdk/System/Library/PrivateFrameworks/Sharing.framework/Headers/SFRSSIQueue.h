/*
 Image: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface SFRSSIQueue : NSObject

{
    struct NSMutableArray *_rssiValues;
    struct NSMutableArray *_tickValues;
}

@property (nonatomic, readonly) double velocity;
@property (nonatomic, readonly) double velocitySmoothed;

- (double)velocityFromA:(unsigned long long)arg1 toB:(unsigned long long)arg2;
- (void)addSample:(double)arg1 atTicks:(unsigned long long)arg2;

@end
