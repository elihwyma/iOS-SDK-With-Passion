/*
 Image: /System/Library/PrivateFrameworks/ExchangeSync.framework/Frameworks/DAEAS.framework/DAEAS
 */

#import <DataAccess/DATaskManager.h>

@class ASGetOptionsTask, ASPolicyManager, ASProtocol, ASTask, NSError, NSMutableDictionary, NSString;

@interface ASTaskManager : DATaskManager

{
    ASPolicyManager *_policyManager;
    NSString *_easProtocolVersion;
    NSError *_versionError;
    NSMutableDictionary *_taskIDToTask;
    ASTask *_modalGetOptionsTask;
    ASGetOptionsTask *_getOptionsTask;
    ASTask *_modalPolicyKeyUpdateTask;
}

@property (retain, nonatomic) ASPolicyManager *policyManager;
@property (retain, nonatomic) NSError *versionError;
@property (retain, nonatomic) NSMutableDictionary *taskIDToTask;
@property (weak, nonatomic) ASTask *modalGetOptionsTask;
@property (retain, nonatomic) ASGetOptionsTask *getOptionsTask;
@property (weak, nonatomic) ASTask *modalPolicyKeyUpdateTask;
@property (nonatomic, readonly) NSString *deviceID;
@property (nonatomic, readonly) NSString *policyKey;
@property (nonatomic, readonly) ASProtocol *protocol;
@property (retain, nonatomic) NSString *easProtocolVersion;

- (void)dealloc;
- (id)_version;
- (void)cancelAllTasks;
- (void)shutdown;
- (void)cancelTaskWithID:(int)arg1;
- (id)stateString;
- (_Bool)shouldCancelTaskDueToOnPowerFetchMode;
- (void)_populateVersionDescriptions;
- (void)taskManagerDidAddTask:(id)arg1;
- (void)cancelTask:(id)arg1;
- (void)taskManagerWillRemoveTask:(id)arg1;
- (_Bool)_hasTasksIndicatingARunningSync;
- (void)taskDidFinish:(id)arg1;
- (void)taskRequestModal:(id)arg1;
- (void)taskEndModal:(id)arg1;
- (_Bool)taskIsModal:(id)arg1;
- (id)initWithAccount:(id)arg1 policyManager:(id)arg2;
- (void)getOptionsTask:(id)arg1 completedWithStatus:(long long)arg2 supportedCommands:(id)arg3 supportedVersions:(id)arg4 error:(id)arg5;
- (void)policyManagerUpdatedPolicy:(id)arg1;
- (void)policyManagerFailedToUpdatePolicy:(id)arg1;
- (void)requestEASVersionWithDelegateTask:(id)arg1;
- (void)updatePolicyKeyWithDelegateTask:(id)arg1;
- (void)setEASProtocolVersion:(id)arg1;
- (void)_finishAllTasksWithError:(id)arg1;
- (void)finishTask:(id)arg1 withError:(id)arg2;

@end
