/*
 Image: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary, REMChangeSet, REMChangeToken, REMChangeTracking, REMObjectID, REMStore;

@protocol REMDAAccountProviding;

@interface REMDAChangeTrackingHelper : NSObject

{
    id <REMDAAccountProviding> _account;
    REMChangeSet *_changeSet;
    REMChangeToken *_sinceToken;
    REMChangeToken *_upToToken;
    REMStore *_remStore;
    REMChangeTracking *_changeTracking;
    REMObjectID *_cached_remAccountObjectID;
    NSMutableDictionary *_cached_insertedModelObjectResultsByModelClassName;
    NSMutableDictionary *_cached_updatedModelObjectResultsByModelClassName;
}

@property (retain, nonatomic) REMChangeSet *changeSet;
@property (retain, nonatomic) REMChangeToken *sinceToken;
@property (retain, nonatomic) REMChangeToken *upToToken;
@property (retain, nonatomic) REMStore *remStore;
@property (retain, nonatomic) REMChangeTracking *changeTracking;
@property (retain, nonatomic) REMObjectID *cached_remAccountObjectID;
@property (retain, nonatomic) NSMutableDictionary *cached_insertedModelObjectResultsByModelClassName;
@property (retain, nonatomic) NSMutableDictionary *cached_updatedModelObjectResultsByModelClassName;
@property (nonatomic, readonly) id <REMDAAccountProviding> account;

+ (_Bool)shouldIgnoreChangeOfModelClassProperties:(Class)arg1 withChangeObject:(id)arg2;

- (id)_rem_changeTracking;
- (id)fetchAndInitializeChangeTrackingStateIfNeeded;
- (id)_rem_changeTrackingClientName;
- (id)_cachedModeObjectResultsForModelClass:(Class)arg1 changeType:(long long)arg2;
- (long long)_changeTypeMaskFromChangeType:(long long)arg1;
- (id)_changedModelObjectsOfClass:(Class)arg1 ofChangeTypes:(long long)arg2;
- (void)_setCachedModeObjectResults:(id)arg1 forModelClass:(Class)arg2 changeType:(long long)arg3;
- (id)_rem_accountObjectID;
- (void)_handleLazyDeletionChange:(id)arg1 ofModelClass:(Class)arg2 forClientID:(id)arg3 deleteHandler:(CDUnknownBlockType)arg4 undeleteHandler:(CDUnknownBlockType)arg5;
- (id)_fetchModelObjectsOfClass:(Class)arg1 withObjectIDs:(id)arg2;
- (id)_fetchModelObjectOfClass:(Class)arg1 withObjectID:(id)arg2 includeMarkedForDelete:(_Bool)arg3;
- (id)initWithREMDAAccount:(id)arg1 withREMStore:(id)arg2;
- (id)fetchChangesSinceLastConsumed;
- (void)markChangesConsumed;
- (id)changedModelObjectsOfModelClass:(Class)arg1 ofChangeType:(long long)arg2;
- (id)changedIdentifiersOfModelClass:(Class)arg1 ofChangeType:(long long)arg2;
- (void)clearCachedModelObjectResultsForModelClass:(Class)arg1;

@end
