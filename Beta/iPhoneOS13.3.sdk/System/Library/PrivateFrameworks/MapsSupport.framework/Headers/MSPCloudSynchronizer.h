/*
 Image: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
 */

#import <Foundation/NSObject.h>

@class MSPCloudClientRegistration, MSPCloudKitAccountAccess, MSPCloudMigrator, MSPCloudSynchronizerRunConditions, MSPJournal, NSArray, NSString, NSUUID;

@protocol MSPCloudSynchronizerDelegate, OS_dispatch_queue, OS_dispatch_source;

@interface MSPCloudSynchronizer : NSObject

{
    _Bool _isRunning;
    _Bool _hasMigratedPreSync;
    _Bool _hasMigrated;
    NSString *_accountID;
    MSPCloudSynchronizerRunConditions *_runConditions;
    NSObject<OS_dispatch_source> *_mergeTimer;
    NSUUID *_clientIdentifier;
    MSPCloudClientRegistration *_clientRegistration;
    MSPJournal *_journal;
    NSObject<OS_dispatch_queue> *_mergeQueue;
    MSPCloudMigrator *_migrator;
    unsigned long long _lastRetryInterval;
    NSArray *_containers;
    id <MSPCloudSynchronizerDelegate> _delegate;
    MSPCloudKitAccountAccess *_cloudAccess;
}

@property (retain, nonatomic) NSString *accountID;
@property (nonatomic) _Bool isRunning;
@property (retain, nonatomic) MSPCloudSynchronizerRunConditions *runConditions;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *mergeTimer;
@property (retain, nonatomic) NSUUID *clientIdentifier;
@property (retain, nonatomic) MSPCloudClientRegistration *clientRegistration;
@property (retain, nonatomic) MSPJournal *journal;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *mergeQueue;
@property (retain, nonatomic) MSPCloudMigrator *migrator;
@property (nonatomic) _Bool hasMigratedPreSync;
@property (nonatomic) _Bool hasMigrated;
@property (nonatomic) unsigned long long lastRetryInterval;
@property (retain, nonatomic) NSArray *containers;
@property (weak, nonatomic) id <MSPCloudSynchronizerDelegate> delegate;
@property (retain, nonatomic) MSPCloudKitAccountAccess *cloudAccess;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)stop;
- (void)start;
- (_Bool)isCurrentlyRunning;
- (void)didReceiveRemoteNotification:(id)arg1;
- (void)runConditionsChanged:(id)arg1;
- (void)merge;
- (id)initWithContainers:(id)arg1;
- (id)initWithCloudContainers:(id)arg1 clientRegistration:(id)arg2 runConditions:(id)arg3 cloudAccess:(id)arg4;
- (void)performPreSyncMigrations:(CDUnknownBlockType)arg1;
- (void)requestMergeWithReason:(unsigned long long)arg1;
- (void)requestMergeWithReason:(unsigned long long)arg1 afterDelay:(unsigned long long)arg2;
- (void)handleAccountChangeWithError:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)performMigrationsWithCompletion:(CDUnknownBlockType)arg1;
- (void)_merge;
- (void)prepareForMergeWithGroup:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)requestMerge;
- (unsigned long long)retryIntervalForError:(id)arg1;
- (id)initWithDefaultRemoteContainers;
- (id)initWithDefaultLocalContainers;

@end
