/*
 Image: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
 */

#import <Foundation/NSObject.h>

@class NSLocale, NSPointerArray, NSString, TIKeyboardLayout, TITypingDESRecordWriter, TITypingSession;

@protocol OS_dispatch_queue;

@interface TITypingSessionMonitor : NSObject

{
    NSObject<OS_dispatch_queue> *_workQueue;
    _Bool _useDODML;
    TITypingSession *_currentTypingSession;
    TITypingDESRecordWriter *_desRecordWriter;
    NSLocale *_locale;
    NSPointerArray *_aggregateEventsObservers;
    TIKeyboardLayout *_currentLayout;
}

@property (retain, nonatomic) TITypingSession *currentTypingSession;
@property (retain, nonatomic) TITypingDESRecordWriter *desRecordWriter;
@property (retain, nonatomic) NSLocale *locale;
@property (retain, nonatomic) NSPointerArray *aggregateEventsObservers;
@property (retain, nonatomic) TIKeyboardLayout *currentLayout;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)shouldRecordSession:(id)arg1;
+ (id)temporaryKeyboardsDirectory;
+ (id)pathForTimeTaggedFileName:(id)arg1;
+ (id)loadAllStoredSessions;

- (id)forwardingTargetForSelector:(SEL)arg1;
- (void)layoutDidChange:(id)arg1 keyboardState:(id)arg2;
- (void)addAggregatedEventObserver:(id)arg1;
- (void)keyboardDidSuspend;
- (id)initWithLocale:(id)arg1 useDODML:(_Bool)arg2;

@end
