/*
 Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface CannedAVSync : NSObject

{
    double _base;
    double _modulo;
}

@property (nonatomic) double base;
@property (nonatomic) double modulo;

+ (id)sharedCannedAVSync;

- (id)init;
- (void)clear;
- (double)clampForTime:(double)arg1;
- (void)addDrift:(double)arg1;
- (void)addStreamWithCount:(int)arg1 rate:(double)arg2;

@end
