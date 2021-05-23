/*
 Image: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
 */

#import <Foundation/NSObject.h>

#import <TextInputCore/Swift-Protocol.h>

@class NSArray, NSMutableArray, NSMutableDictionary, NSString, TIInputMode, TIKeyboardInput, TITypingSession, TIUserModelDataStore;

@protocol OS_dispatch_queue, TISensorWriterWrapper;

@interface TISKMetricCollector : NSObject <Swift>

{
    TIInputMode *_inputMode;
    NSString *_wordSeparator;
    NSMutableDictionary *_touchToEventMap;
    NSMutableArray *_events;
    NSArray *_sortedEvents;
    NSMutableArray *_touches;
    NSMutableArray *_layoutIDs;
    NSMutableArray *_taps;
    long long _wordPosition;
    TIKeyboardInput *_lastInput;
    long long _currentWordPosition;
    long long _eventOrder;
    NSMutableArray *_currentSessionSamplesArray;
    unsigned long long _aggregatedWordThreshold;
    _Bool _isLoaded;
    TIUserModelDataStore *_userModelDataStore;
    _Bool _accentedLanguage;
    NSMutableArray *_accentedLayoutsMap;
    NSString *_idenitifer;
    NSObject<OS_dispatch_queue> *_workQueue;
    int _tccNotifyToken;
    _Bool _isTCCAuthorized;
    _Bool _skipTCCAuthorization;
    unsigned long long _wordAccumulationThreshold;
    id <TISensorWriterWrapper> _dataWriter;
    NSMutableArray *_savedSessionSamplesArray;
    TITypingSession *_typingSession;
}

@property (nonatomic) unsigned long long wordAccumulationThreshold;
@property (retain, nonatomic) id <TISensorWriterWrapper> dataWriter;
@property (retain, nonatomic) NSMutableArray *savedSessionSamplesArray;
@property (retain, nonatomic) NSMutableArray *currentSessionSamplesArray;
@property (retain, nonatomic) TITypingSession *typingSession;
@property (nonatomic) _Bool isLoaded;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)makeMetricCollector:(id)arg1 separator:(id)arg2 wordsThreshold:(unsigned long long)arg3 isTesting:(_Bool)arg4;

- (void)dealloc;
- (void)_clear;
- (id)init:(id)arg1;
- (void)sessionDidEnd:(id)arg1 aligned:(id)arg2;
- (id)init:(id)arg1 separator:(id)arg2 wordsThreshold:(unsigned long long)arg3;
- (id)init:(id)arg1 separator:(id)arg2 wordsThreshold:(unsigned long long)arg3 accentedLanguage:(_Bool)arg4;
- (id)init:(id)arg1 separator:(id)arg2 wordsThreshold:(unsigned long long)arg3 accentedLanguage:(_Bool)arg4 skipTCCAuthorization:(_Bool)arg5;
- (void)testTCCAuthorization;
- (void)_setupTCCAuthNotification;
- (id)consumeTypingSession:(id)arg1;
- (void)_resetConsumeState;
- (id)_findSessionWithLayoutOfSameDimentions:(id)arg1 layout:(id)arg2;
- (void)setupSessionSamplesForLayouts;
- (id)_consumeTypingSession:(id)arg1;
- (void)_consumeUserAction:(id)arg1;
- (void)_consumeWordEntry:(id)arg1;
- (void)_processEvents;
- (void)_haltSessionTypingTimer:(id)arg1 event:(id)arg2;
- (void)_metricWalk;
- (void)_mapTapsToEvents;
- (id)_mapIDToLayout:(unsigned long long)arg1;
- (void)_coalesceTaps;
- (id)eventsDescription;
- (id)eventsDescription:(_Bool)arg1;
- (double)totalTimeSpan;
- (double)totalTimeSpanFromLastTap;
- (void)_mergeStats:(id)arg1;
- (void)_reportRipeBuckets;
- (void)handleTypingSession:(id)arg1;
- (void)_loadStatsFromDataStore;
- (id)_retrieveSavedSessionSampleArray;
- (void)_persistSavedSessionSampleArray;
- (void)placeTaskOnWorkQueue:(CDUnknownBlockType)arg1;

@end
