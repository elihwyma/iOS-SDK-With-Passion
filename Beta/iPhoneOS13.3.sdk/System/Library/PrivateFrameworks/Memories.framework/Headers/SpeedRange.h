/*
 Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

#import <Foundation/NSObject.h>

@class SpeedRanges;

__attribute__((visibility("hidden")))
@interface SpeedRange : NSObject

{
    int _startMedia;
    int _startClip;
    double _rate;
    SpeedRange *_prev;
    SpeedRange *_next;
    SpeedRanges *_container;
    SpeedRange *_accurate;
    SpeedRange *_accurateNext;
}

@property (nonatomic) int startMedia;
@property (nonatomic) int startClip;
@property (weak, nonatomic) SpeedRange *prev;
@property (weak, nonatomic) SpeedRange *next;
@property (weak, nonatomic) SpeedRanges *container;
@property (weak, nonatomic) SpeedRange *accurate;
@property (weak, nonatomic) SpeedRange *accurateNext;
@property (nonatomic) int leftEdge;
@property (nonatomic) int rightEdge;
@property (nonatomic) double rate;
@property (nonatomic, readonly) int durationMedia;
@property (nonatomic, readonly) int durationClip;
@property (nonatomic, readonly) _Bool isFreeze;
@property (nonatomic, readonly) int accurateStartClip;
@property (nonatomic, readonly) int accurateDurationClip;

+ (id)speedRangeWithRate:(float)arg1 startMedia:(int)arg2 startClip:(int)arg3;

- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (CDStruct_1b6d18a9)applySpeed:(CDStruct_1b6d18a9)arg1;
- (void)rippleClipTimeDown;
- (void)setAndRippleLeftEdge:(int)arg1;
- (int)convertToMediaTimeAndUnrampedClipTime:(int *)arg1;
- (id)splitRangeAtClipTime:(int)arg1;
- (id)insertFreezeAtClipTime:(int)arg1;

@end
