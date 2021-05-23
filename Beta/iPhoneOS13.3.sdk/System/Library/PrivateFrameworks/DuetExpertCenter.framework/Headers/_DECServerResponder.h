/*
 Image: /System/Library/PrivateFrameworks/DuetExpertCenter.framework/DuetExpertCenter
 */

#import <Foundation/NSObject.h>

@class NSMutableArray, _DECBackupHelper, _DECFeedbackBuilder, _DECPredictionMap, _DECUpdatePredictionsNotification;

@protocol OS_dispatch_queue, _DECRankBuilder;

@interface _DECServerResponder : NSObject

{
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableArray *_servers;
    struct _opaque_pthread_rwlock_t _serversRWLock;
    _DECFeedbackBuilder *_feedbackBuilder;
    _DECBackupHelper *_backupHelper;
    _DECPredictionMap *_predictionsAwaitingFeedback;
    _DECUpdatePredictionsNotification *_updateNotification;
    id <_DECRankBuilder> _rankBuilder;
}

@property (retain, nonatomic) id <_DECRankBuilder> rankBuilder;

+ (id)sharedInstance;

- (id)init;
- (void)dealloc;
- (id)_consumers;
- (id)_experts;
- (void)registerClient:(long long)arg1 category:(unsigned long long)arg2 identifier:(id)arg3 reply:(CDUnknownBlockType)arg4;
- (void)predictionForCategories:(unsigned long long)arg1 consumer:(unsigned long long)arg2 criteria:(id)arg3 limit:(unsigned long long)arg4 providesFeedback:(_Bool)arg5 reply:(CDUnknownBlockType)arg6;
- (void)setPrediction:(id)arg1 category:(unsigned long long)arg2 consumer:(unsigned long long)arg3 reply:(CDUnknownBlockType)arg4;
- (void)prewarmPredictionForCategories:(unsigned long long)arg1 consumer:(unsigned long long)arg2 reply:(CDUnknownBlockType)arg3;
- (void)predictionForCategories:(unsigned long long)arg1 consumer:(unsigned long long)arg2 limit:(unsigned long long)arg3 providesFeedback:(_Bool)arg4 reply:(CDUnknownBlockType)arg5;
- (void)userEngaged:(id)arg1 result:(id)arg2 metadata:(id)arg3 reply:(CDUnknownBlockType)arg4;
- (void)userAbandoned:(id)arg1 result:(id)arg2 metadata:(id)arg3 reply:(CDUnknownBlockType)arg4;
- (void)_setupFeedbackBuilder;
- (id)_validExperts;
- (void)restoreModels;
- (id)_validConsumers;
- (void)predictionForCategories:(unsigned long long)arg1 consumer:(unsigned long long)arg2 criteria:(id)arg3 limit:(unsigned long long)arg4 backgroundQuery:(_Bool)arg5 providesFeedback:(_Bool)arg6 reply:(CDUnknownBlockType)arg7;
- (void)addServer:(id)arg1;
- (void)removeServer:(id)arg1;
- (void)trainExperts;
- (void)saveModels;
- (_Bool)is2GBOrLargerDevice;
- (_Bool)feedbackNewerThan:(double)arg1;

@end
