/*
 Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

#import <NSObject.h>

@class CKServerChangeToken, NSArray, NSMutableDictionary, NSMutableOrderedSet, NSMutableSet;

@protocol OS_dispatch_queue;

@interface CKSyncEngineMetadata : NSObject

{
    _Bool _needsToFetchDatabaseChanges;
    _Bool _needsToSaveDatabaseSubscription;
    CKServerChangeToken *_serverChangeTokenForDatabase;
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableSet *_zoneIDsNeedingToFetchChangesSet;
    NSMutableDictionary *_serverChangeTokensByZoneID;
    NSMutableDictionary *_zonesToSaveDictionary;
    NSMutableOrderedSet *_zoneIDsToDeleteSet;
    NSMutableOrderedSet *_pendingModificationsSet;
    NSMutableOrderedSet *_inFlightModificationsSet;
    unsigned long long _internalChangeCount;
    NSMutableOrderedSet *_fakeRecordIDsToSaveForSerializationTests;
    NSMutableOrderedSet *_fakeRecordIDsToDeleteForSerializationTests;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSMutableSet *zoneIDsNeedingToFetchChangesSet;
@property (retain, nonatomic) NSMutableDictionary *serverChangeTokensByZoneID;
@property (retain, nonatomic) NSMutableDictionary *zonesToSaveDictionary;
@property (retain, nonatomic) NSMutableOrderedSet *zoneIDsToDeleteSet;
@property (retain, nonatomic) NSMutableOrderedSet *pendingModificationsSet;
@property (retain, nonatomic) NSMutableOrderedSet *inFlightModificationsSet;
@property (nonatomic) unsigned long long internalChangeCount;
@property (retain, nonatomic) NSMutableOrderedSet *fakeRecordIDsToSaveForSerializationTests;
@property (retain, nonatomic) NSMutableOrderedSet *fakeRecordIDsToDeleteForSerializationTests;
@property (nonatomic, readonly) unsigned long long changeCount;
@property (nonatomic) _Bool needsToFetchDatabaseChanges;
@property (retain, nonatomic) CKServerChangeToken *serverChangeTokenForDatabase;
@property (nonatomic) _Bool needsToSaveDatabaseSubscription;
@property (nonatomic, readonly) NSArray *zoneIDsNeedingToFetchChanges;
@property (nonatomic, readonly) NSArray *zonesToSave;
@property (nonatomic, readonly) NSArray *zoneIDsToDelete;
@property (nonatomic, readonly) NSArray *pendingRecordModifications;
@property (nonatomic, readonly) NSArray *inFlightRecordModifications;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithData:(id)arg1;
- (void)commonInit;
- (id)CKDescriptionPropertiesWithPublic:(_Bool)arg1 private:(_Bool)arg2 shouldExpand:(_Bool)arg3;
- (id)recordIDsToDelete;
- (void)markRecordModifications:(id)arg1 inFlight:(_Bool)arg2;
- (void)getDataRepresentation:(CDUnknownBlockType)arg1;
- (void)addPendingRecordModifications:(id)arg1;
- (void)setNeedsToSave:(_Bool)arg1 zones:(id)arg2;
- (void)setNeedsToDelete:(_Bool)arg1 zoneIDs:(id)arg2;
- (void)removeInFlightRecordModifications:(id)arg1;
- (void)removePendingRecordModifications:(id)arg1;
- (id)serverChangeTokenForRecordZoneID:(id)arg1;
- (void)setNeedsToFetchChanges:(_Bool)arg1 forRecordZoneID:(id)arg2;
- (void)setServerChangeToken:(id)arg1 forRecordZoneID:(id)arg2;
- (id)pendingRecordIDsWithModificationType:(long long)arg1;
- (id)recordIDsToSave;
- (_Bool)needsToFetchChangesForZoneID:(id)arg1;
- (_Bool)needsToSaveZone:(id)arg1;
- (_Bool)needsToDeleteZoneID:(id)arg1;

@end
