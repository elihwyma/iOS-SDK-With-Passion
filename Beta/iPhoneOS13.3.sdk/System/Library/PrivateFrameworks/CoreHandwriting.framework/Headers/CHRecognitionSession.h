/*
 Image: /System/Library/PrivateFrameworks/CoreHandwriting.framework/CoreHandwriting
 */

#import <Foundation/NSObject.h>

@class CHRecognitionSessionResult, NSArray, NSData, NSMutableArray, NSMutableDictionary, NSString;

@protocol CHRecognitionSessionDataSource, CHStrokeProvider, OS_dispatch_queue;

@interface CHRecognitionSession : NSObject

{
    CHRecognitionSessionResult *_lastRecognitionResult;
    long long _status;
    id <CHStrokeProvider> _latestStrokeProvider;
    _Bool _strokeGroupingOnly;
    _Bool __hasUnprocessedChanges;
    unsigned int __taskQueueQoSClass;
    long long _mode;
    NSArray *_preferredLocales;
    id <CHRecognitionSessionDataSource> _dataSource;
    long long _recognitionEnvironment;
    long long _priority;
    NSArray *__effectiveLocales;
    NSMutableDictionary *__recognizersByLocaleID;
    unsigned long long __changeCoalescingIndex;
    NSMutableArray *__changeObservers;
    NSMutableArray *__inputDrawingClients;
    NSObject<OS_dispatch_queue> *__tasksWorkQueue;
    NSObject<OS_dispatch_queue> *__sessionQueue;
    NSMutableArray *__activeTasks;
}

@property (nonatomic) _Bool strokeGroupingOnly;
@property (retain, readonly) CHRecognitionSessionResult *lastRecognitionResult;
@property (nonatomic, readonly) long long status;
@property (retain, readonly) id <CHStrokeProvider> latestStrokeProvider;
@property (copy, nonatomic, setter=_setEffectiveLocales:) NSArray *_effectiveLocales;
@property (retain, setter=_setLastRecognitionResult:) CHRecognitionSessionResult *lastRecognitionResult;
@property (nonatomic, setter=_setStatus:) long long status;
@property (retain, setter=_setLatestStrokeProvider:) id <CHStrokeProvider> latestStrokeProvider;
@property (nonatomic, setter=_setHasUnprocessedChanges:) _Bool _hasUnprocessedChanges;
@property (retain, nonatomic, readonly) NSMutableDictionary *_recognizersByLocaleID;
@property (nonatomic) unsigned long long _changeCoalescingIndex;
@property (retain, nonatomic, readonly) NSMutableArray *_changeObservers;
@property (retain, nonatomic, readonly) NSMutableArray *_inputDrawingClients;
@property (retain, nonatomic, readonly) NSObject<OS_dispatch_queue> *_tasksWorkQueue;
@property (retain, nonatomic, readonly) NSObject<OS_dispatch_queue> *_sessionQueue;
@property (nonatomic, readonly) unsigned int _taskQueueQoSClass;
@property (retain, nonatomic, readonly) NSMutableArray *_activeTasks;
@property (nonatomic, readonly) long long mode;
@property (copy, nonatomic) NSArray *preferredLocales;
@property (copy, nonatomic) NSArray *locales;
@property (nonatomic) id <CHRecognitionSessionDataSource> dataSource;
@property (nonatomic) long long recognitionEnvironment;
@property (nonatomic) long long priority;
@property (nonatomic, readonly) NSData *sessionData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)_isLocaleSupported:(id)arg1;
+ (id)effectiveLocalesFromLocales:(id)arg1;
+ (id)createRecognizerForLocale:(id)arg1 remote:(_Bool)arg2 priority:(long long)arg3;

- (id)init;
- (void)dealloc;
- (id)initWithMode:(long long)arg1;
- (void)registerChangeObserver:(id)arg1;
- (void)unregisterChangeObserver:(id)arg1;
- (void)_notifyObserversWithBlock:(CDUnknownBlockType)arg1;
- (void)setNeedsRecognitionUpdate;
- (void)cancelOngoingRequests;
- (id)indexableContent;
- (id)recognizerForLocale:(id)arg1;
- (void)registerInputDrawingClient:(id)arg1;
- (void)unregisterInputDrawingClient:(id)arg1;
- (void)waitForPendingRecognitionTasks;
- (void)_setupExecutionQueuesForMode:(long long)arg1;
- (void)_cleanupCachedRecognizers;
- (_Bool)_isReadyToProcessChanges;
- (void)rebuildRecognitionResults;
- (_Bool)_hasPendingRecognitionTasks;
- (void)_scheduleProcessStrokeProviderChangesImmediately:(_Bool)arg1;
- (void)_updateRecognitionSessionStatus;
- (void)_cancelOngoingRequests;
- (void)_processPendingStrokeChangesIfAvailable;
- (double)_preferredCoalescingInterval;
- (id)_newRecognitionSessionTask;
- (_Bool)_shouldRunRecognitionLocally;
- (_Bool)loadSessionData:(id)arg1 error:(id *)arg2;
- (id)recognizableDrawingForStrokeGroupQueryItem:(id)arg1;
- (id)lastRecognitionResultWaitingForPendingTasks;

@end
