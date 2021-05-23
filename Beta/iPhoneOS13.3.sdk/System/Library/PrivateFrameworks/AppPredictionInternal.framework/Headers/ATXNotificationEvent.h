/*
 Image: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
 */

#import <Foundation/NSObject.h>

@class NSDate;

@interface ATXNotificationEvent : NSObject

{
    _Bool _ending;
    _Bool _hiding;
    _Bool _topOfPile;
    _Bool _fromOffScreen;
    long long _eventType;
    NSDate *_ts;
    unsigned long long _pos;
}

@property (nonatomic) long long eventType;
@property (retain, nonatomic) NSDate *ts;
@property (nonatomic) unsigned long long pos;
@property (nonatomic) _Bool topOfPile;
@property (nonatomic) _Bool fromOffScreen;

+ (id)hidingEventSet;
+ (id)endingEventSet;
+ (id)positiveEventSet;
+ (id)clearEventSet;

- (id)pbmsg;
- (id)init:(long long)arg1 timestamp:(id)arg2 position:(unsigned long long)arg3;
- (id)init:(long long)arg1 timestamp:(id)arg2 position:(unsigned long long)arg3 fromOffScreen:(_Bool)arg4;
- (id)init:(long long)arg1 timestamp:(id)arg2 position:(unsigned long long)arg3 fromOffScreen:(_Bool)arg4 topOfPile:(_Bool)arg5;
- (_Bool)isEndingEvent;
- (_Bool)isHidingEvent;

@end
