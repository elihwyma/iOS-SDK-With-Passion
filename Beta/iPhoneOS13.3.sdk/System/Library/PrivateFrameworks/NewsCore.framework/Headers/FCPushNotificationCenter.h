/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <Foundation/NSObject.h>

@class FCCKPrivateDatabase, NSMapTable, NSString;

@interface FCPushNotificationCenter : NSObject

{
    _Bool _syncingEnabled;
    FCCKPrivateDatabase *_privateDatabase;
    NSMapTable *_recordZoneObservers;
}

@property (retain, nonatomic) FCCKPrivateDatabase *privateDatabase;
@property (retain, nonatomic) NSMapTable *recordZoneObservers;
@property (nonatomic, getter=isSyncingEnabled) _Bool syncingEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)removeRecordZoneObserver:(id)arg1;
- (void)addObserver:(id)arg1 forChangesToRecordZoneID:(id)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (void)enableSyncing;
- (void)disableSyncing;
- (void)prepareForUse;
- (void)_handlePrivateDatabaseNotification:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)serverChangeTokenKey;
- (void)_fetchChangesForRecordZoneIDs:(id)arg1;
- (void)_deleteLocalDataForRecordZoneIDs:(id)arg1;
- (void)_saveDatabaseServerChangeToken:(id)arg1;
- (void)handleRemoteNotification:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)initWithPrivateDatabase:(id)arg1 storeDirectory:(id)arg2;

@end
