/*
 Image: /System/Library/PrivateFrameworks/AVConference.framework/Frameworks/ViceroyTrace.framework/ViceroyTrace
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

@protocol OS_dispatch_queue;

@interface TimingCollection : NSObject

{
    NSMutableDictionary *timings;
    NSObject<OS_dispatch_queue> *queue;
}

- (id)init;
- (void)dealloc;
- (id)description;
- (void)startTimingForKey:(int)arg1;
- (void)stopTimingForKey:(int)arg1;
- (float)totalTimeForKey:(int)arg1;
- (void)removeTimingForKey:(int)arg1;
- (_Bool)hasKey:(int)arg1;
- (_Bool)isValidTimingForKey:(int)arg1;
- (float)timingForKey:(int)arg1;
- (void)setTiming:(float)arg1 forKey:(int)arg2;
- (void)setStartTime:(float)arg1 forKey:(int)arg2;
- (void)setStopTime:(float)arg1 forKey:(int)arg2;

@end
