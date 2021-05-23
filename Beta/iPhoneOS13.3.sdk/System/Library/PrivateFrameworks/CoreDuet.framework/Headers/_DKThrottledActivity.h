/*
 Image: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol _DKSimpleKeyValueStore;

@interface _DKThrottledActivity : NSObject

{
    NSString *_namespace;
    id <_DKSimpleKeyValueStore> _store;
}

@property (retain, nonatomic) id <_DKSimpleKeyValueStore> store;

+ (id)standardInstance;

- (id)description;
- (id)initWithStore:(id)arg1 namespace:(id)arg2;
- (void)performWithMinimumIntervalInSecondsOf:(double)arg1 name:(id)arg2 queue:(id)arg3 activityBlock:(CDUnknownBlockType)arg4;
- (void)performWithDelayInSecondsOf:(double)arg1 name:(id)arg2 queue:(id)arg3 activityBlock:(CDUnknownBlockType)arg4;
- (void)performNoMoreOftenInDaysThan:(double)arg1 name:(id)arg2 activityBlock:(CDUnknownBlockType)arg3 throttleBlock:(CDUnknownBlockType)arg4;
- (void)performNoMoreOftenInDaysThan:(double)arg1 name:(id)arg2 activityBlock:(CDUnknownBlockType)arg3;
- (void)performWithMinimumIntervalInMinutesOf:(double)arg1 name:(id)arg2 queue:(id)arg3 activityBlock:(CDUnknownBlockType)arg4;
- (id)activityThrottler;
- (void)clearHistoryForName:(id)arg1;
- (void)performNoMoreOftenInSecondsThan:(double)arg1 name:(id)arg2 activityBlock:(CDUnknownBlockType)arg3;
- (void)performNoMoreOftenInSecondsThan:(double)arg1 name:(id)arg2 activityBlock:(CDUnknownBlockType)arg3 throttleBlock:(CDUnknownBlockType)arg4;
- (void)performNoMoreOftenInMinutesThan:(double)arg1 name:(id)arg2 activityBlock:(CDUnknownBlockType)arg3;
- (void)performNoMoreOftenInMinutesThan:(double)arg1 name:(id)arg2 activityBlock:(CDUnknownBlockType)arg3 throttleBlock:(CDUnknownBlockType)arg4;
- (void)performNoMoreOftenInHoursThan:(double)arg1 name:(id)arg2 activityBlock:(CDUnknownBlockType)arg3;
- (void)performNoMoreOftenInHoursThan:(double)arg1 name:(id)arg2 activityBlock:(CDUnknownBlockType)arg3 throttleBlock:(CDUnknownBlockType)arg4;
- (void)performWithMinimumIntervalInHoursOf:(double)arg1 name:(id)arg2 queue:(id)arg3 activityBlock:(CDUnknownBlockType)arg4;
- (void)performWithMinimumIntervalInDaysOf:(double)arg1 name:(id)arg2 queue:(id)arg3 activityBlock:(CDUnknownBlockType)arg4;
- (void)performWithDelayInMinutesOf:(double)arg1 name:(id)arg2 queue:(id)arg3 activityBlock:(CDUnknownBlockType)arg4;
- (void)performWithDelayInHoursOf:(double)arg1 name:(id)arg2 queue:(id)arg3 activityBlock:(CDUnknownBlockType)arg4;
- (void)performWithDelayInDaysOf:(double)arg1 name:(id)arg2 queue:(id)arg3 activityBlock:(CDUnknownBlockType)arg4;
- (void)setDate:(id)arg1 forName:(id)arg2;

@end
