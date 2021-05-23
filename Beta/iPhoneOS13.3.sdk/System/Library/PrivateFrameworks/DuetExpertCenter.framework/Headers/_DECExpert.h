/*
 Image: /System/Library/PrivateFrameworks/DuetExpertCenter.framework/DuetExpertCenter
 */

#import <Foundation/NSObject.h>

@class NSString, NSXPCConnection, PETDistributionEventTracker, PETGoalConversionEventTracker, PETScalarEventTracker, _DECBackupHelper;

@protocol OS_dispatch_queue, _DECExpertDelegate;

@interface _DECExpert : NSObject

{
    NSXPCConnection *_connection;
    NSObject<OS_dispatch_queue> *_queue;
    _DECBackupHelper *_backupHelper;
    PETGoalConversionEventTracker *_predictionResultTracker;
    PETDistributionEventTracker *_predictionTimeTracker;
    PETScalarEventTracker *_saveModelTracker;
    PETScalarEventTracker *_restoreModelTracker;
    unsigned long long _category;
    struct NSString *_identifier;
    id <_DECExpertDelegate> _delegate;
}

@property (nonatomic) unsigned long long category;
@property (retain, nonatomic) NSString *identifier;
@property (weak, nonatomic) id <_DECExpertDelegate> delegate;

- (id)init;
- (void)prewarmPredictionForCategories:(unsigned long long)arg1 consumer:(unsigned long long)arg2 reply:(CDUnknownBlockType)arg3;
- (void)receiveFeedback:(id)arg1 consumer:(unsigned long long)arg2 reply:(CDUnknownBlockType)arg3;
- (void)trainWithReply:(CDUnknownBlockType)arg1;
- (void)saveModelWithByteLimit:(unsigned long long)arg1 reply:(CDUnknownBlockType)arg2;
- (void)restoreModelWithReply:(CDUnknownBlockType)arg1;
- (void)predictionForCategories:(unsigned long long)arg1 consumer:(unsigned long long)arg2 criteria:(id)arg3 limit:(unsigned long long)arg4 reply:(CDUnknownBlockType)arg5;
- (id)initWithCategory:(unsigned long long)arg1 identifier:(struct NSString *)arg2;
- (void)setPrediction:(id)arg1 category:(unsigned long long)arg2 consumer:(unsigned long long)arg3;

@end
