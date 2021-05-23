/*
 Image: /System/Library/PrivateFrameworks/CoreHandwriting.framework/CoreHandwriting
 */

#import <Foundation/NSObject.h>

@class CHRecognitionSession, CHRecognitionSessionResult, NSString;

@protocol CHQueryDelegate, CHStrokeProviderVersion, OS_dispatch_queue;

@interface CHQuery : NSObject

{
    NSObject<OS_dispatch_queue> *_processingQueue;
    CHRecognitionSessionResult *_currentProcessingSessionResult;
    double _lastProcessedTime;
    _Bool __queryActive;
    id <CHQueryDelegate> _delegate;
    CHRecognitionSession *_recognitionSession;
    id <CHStrokeProviderVersion> _lastProcessedStrokeProviderVersion;
    double _preferredUpdatesInterval;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (retain, nonatomic, readonly) NSObject<OS_dispatch_queue> *processingQueue;
@property (retain, nonatomic, readonly) NSString *debugName;
@property (nonatomic) _Bool _queryActive;
@property (copy) id <CHStrokeProviderVersion> lastProcessedStrokeProviderVersion;
@property (nonatomic) id <CHQueryDelegate> delegate;
@property (retain, nonatomic, readonly) CHRecognitionSession *recognitionSession;
@property (nonatomic) double preferredUpdatesInterval;

- (id)init;
- (void)dealloc;
- (void)pause;
- (void)start;
- (id)initWithRecognitionSession:(id)arg1;
- (void)waitForPendingUpdates;
- (void)q_updateQueryResult;
- (id)q_sessionResult;
- (void)q_queryResultDidChange;
- (void)q_setNeedsQueryResultUpdating;
- (void)recognitionSessionDidUpdateRecognitionResult:(id)arg1;
- (double)preferredRecognitionResultUpdatesInterval;
- (void)_updateForRecognitionSessionResultChangeIfNeeded;

@end
