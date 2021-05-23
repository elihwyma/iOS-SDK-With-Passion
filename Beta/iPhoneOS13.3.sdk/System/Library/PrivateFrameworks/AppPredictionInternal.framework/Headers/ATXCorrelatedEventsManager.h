/*
 Image: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
 */

#import <Foundation/NSObject.h>

@class ATXCorrelatedEventsDateBuffer, _PASLock;

@interface ATXCorrelatedEventsManager : NSObject

{
    _PASLock *_correlatedEventsLock;
    _PASLock *_typeAEventDataLock;
    _PASLock *_typeBEventDataLock;
    Class _firstEventType;
    Class _secondEventType;
    ATXCorrelatedEventsDateBuffer *_firstEventTypeDateBuffer;
    ATXCorrelatedEventsDateBuffer *_secondEventTypeDateBuffer;
}

@property (nonatomic, readonly) Class firstEventType;
@property (nonatomic, readonly) Class secondEventType;
@property (nonatomic, readonly) ATXCorrelatedEventsDateBuffer *firstEventTypeDateBuffer;
@property (nonatomic, readonly) ATXCorrelatedEventsDateBuffer *secondEventTypeDateBuffer;

+ (_Bool)eventsOverlapForEventA:(id)arg1 withDateBuffer:(id)arg2 eventB:(id)arg3 withDateBuffer:(id)arg4;

- (id)correlatedEvents;
- (id)initWithFirstEventType:(Class)arg1 firstEventTypeDateBuffer:(id)arg2 secondEventType:(Class)arg3 secondEventTypeDateBuffer:(id)arg4;
- (void)insertEvents:(id)arg1 forEventType:(long long)arg2;
- (void)correlateEvents;

@end
