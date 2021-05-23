/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class CADisplayLink, NSMutableArray, NSMutableDictionary;

@protocol UIEventFetcherSink;

__attribute__((visibility("hidden")))
@interface UIEventFetcher : NSObject

{
    NSMutableArray *_incomingHIDEvents;
    NSMutableArray *_incomingHIDEventsFiltered;
    struct __CFRunLoop *_cfRunLoop;
    struct __CFRunLoopSource *_triggerHandOffEventsRunLoopSource;
    CDUnknownBlockType _receiveBlock;
    CDUnknownBlockType _addToFilteredEventsBlock;
    CDUnknownBlockType _gameControllerEventFilterGenerator;
    CDUnknownBlockType _passiveObservationFilterGenerator;
    CDUnknownBlockType _watchSystemAppFilter;
    NSMutableArray *_eventFilters;
    int _displayLinkIdleTicks;
    CADisplayLink *_displayLink;
    long long _countOfDigitizerEventsReceivedSinceLastDisplayLinkCallback;
    long long _countOfDigitizerEventsReceivedInPreviousFrame;
    _Bool _didSignalOneMoveEventSinceLastDisplayLinkCallback;
    double _lastImportantEventTimestamp;
    double _lastSignalTimestamp;
    double _estimatedDisplayLinkDrift;
    long long _lastSignalType;
    unsigned long long _lastSignalReason;
    _Bool _needsSignalOnDisplayLink;
    id <UIEventFetcherSink> _eventFetcherSink;
    double _commitTimeForTouchEvents;
    NSMutableDictionary *_latestMoveDragEventsBySessionID;
    double _latestMoveDragEventTimestamp;
    double _latestMoveDragEventResendTimestamp;
}

@property (nonatomic) _Bool needsSignalOnDisplayLink;
@property (nonatomic) double commitTimeForTouchEvents;
@property (retain, nonatomic) NSMutableDictionary *latestMoveDragEventsBySessionID;
@property (nonatomic) double latestMoveDragEventTimestamp;
@property (nonatomic) double latestMoveDragEventResendTimestamp;
@property (retain, nonatomic) id <UIEventFetcherSink> eventFetcherSink;
@property (nonatomic, readonly) struct __CFRunLoop *_eventFetchRunLoop;

- (id)init;
- (void)_receiveHIDEvent:(struct __IOHIDEvent *)arg1;
- (void)_setHIDGameControllerEventObserver:(CDUnknownBlockType)arg1 onQueue:(id)arg2;
- (void)_removeHIDGameControllerEventObserver;
- (void)_setHIDEventObserver:(CDUnknownBlockType)arg1 onQueue:(id)arg2;
- (void)_removeHIDEventObserver;
- (void)drainEventsIntoEnvironment:(id)arg1;
- (void)setupThreadAndRun;
- (void)_setupFilterChain;
- (void)displayLinkDidFire:(id)arg1;
- (void)signalEventsAvailableWithReason:(unsigned long long)arg1 filteredEventCount:(long long)arg2;
- (void)setupForRunLoop:(id)arg1;
- (void)threadMain;
- (void)_receiveHIDEventInternal:(struct __IOHIDEvent *)arg1;
- (void)_removeHIDEventFilter:(CDUnknownBlockType)arg1;
- (void)_addHIDEventFilter:(CDUnknownBlockType)arg1;
- (void)filterEvents;

@end
