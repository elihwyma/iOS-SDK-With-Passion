/*
 Image: /System/Library/PrivateFrameworks/TVPlayback.framework/TVPlayback
 */

#import <Foundation/NSObject.h>

@interface TVPTimeRange : NSObject

{
    double _startTime;
    double _duration;
}

@property (nonatomic) double startTime;
@property (nonatomic) double duration;
@property (nonatomic, readonly) double endTime;

+ (CDStruct_5c5366e1)forwardmostCMTimeRangeInCMTimeRanges:(id)arg1;

- (id)description;
- (id)initWithStartTime:(double)arg1 endTime:(double)arg2;
- (_Bool)containsTime:(double)arg1;
- (id)initWithStartTime:(double)arg1 duration:(double)arg2;
- (id)initWithCMTimeRange:(CDStruct_5c5366e1)arg1;
- (id)intersectTimeRange:(id)arg1;

@end
