/*
 Image: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
 */

#import <Foundation/NSObject.h>

@class NSDate;

@protocol AVTAvatarRecord;

@interface AVTUsageTrackingRecordTimedEvent : NSObject

{
    _Bool _paused;
    id <AVTAvatarRecord> _record;
    NSDate *_currentStartTime;
    double _totalTime;
}

@property (retain, nonatomic) NSDate *currentStartTime;
@property (nonatomic) double totalTime;
@property (nonatomic) _Bool paused;
@property (nonatomic, readonly) id <AVTAvatarRecord> record;

- (id)initWithStartTime:(id)arg1 record:(id)arg2;
- (void)pauseAtTime:(id)arg1;
- (void)resumeAtTime:(id)arg1;
- (double)totalElapsedTimeAtTime:(id)arg1;

@end
