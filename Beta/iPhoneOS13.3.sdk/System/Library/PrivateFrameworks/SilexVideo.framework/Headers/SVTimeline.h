/*
 Image: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
 */

#import <Foundation/NSObject.h>

@class NSMutableArray;

@interface SVTimeline : NSObject

{
    double _duration;
    double _time;
    NSMutableArray *_actions;
}

@property (nonatomic, readonly) NSMutableArray *actions;
@property (nonatomic) double duration;
@property (nonatomic) double time;

- (id)init;
- (void)dealloc;
- (void)addAction:(id)arg1;
- (void)removeAction:(id)arg1;
- (void)removeActions:(id)arg1;
- (_Bool)hasPassedTimeOffset:(double)arg1;
- (id)performBlock:(CDUnknownBlockType)arg1 at:(double)arg2;
- (void)cancelScheduledBlocks;
- (void)executeActionsForTime:(double)arg1 withDuration:(double)arg2;
- (double)executionTimeOfTime:(double)arg1 withinDuration:(double)arg2;
- (void)resetTime;

@end
