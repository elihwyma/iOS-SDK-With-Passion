/*
 Image: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
 */

#import <Foundation/NSObject.h>

@class CKContainer, CKRecordZoneID, CRKCloudZoneSyncEngine, CRKFileBasedKeyedDataStore, NSSet;

@interface CRKCloudSchemaBuilder : NSObject

{
    NSSet *_cloudStoringClasses;
    CKContainer *_container;
    CRKFileBasedKeyedDataStore *_store;
    CRKCloudZoneSyncEngine *_syncEngine;
    CKRecordZoneID *_zoneId;
}

@property (retain, nonatomic) NSSet *cloudStoringClasses;
@property (retain, nonatomic) CKContainer *container;
@property (retain, nonatomic) CRKFileBasedKeyedDataStore *store;
@property (retain, nonatomic) CRKCloudZoneSyncEngine *syncEngine;
@property (retain, nonatomic) CKRecordZoneID *zoneId;

- (void)cleanupWithCompletion:(CDUnknownBlockType)arg1;
- (id)skeletonRecordsForClass:(Class)arg1;
- (_Bool)cleanupFiles;
- (void)cleanupRecordZoneWithCompletion:(CDUnknownBlockType)arg1;
- (void)processRemoteDelta:(id)arg1 fromZoneSyncEngine:(id)arg2;
- (void)didReceiveCloudError:(id)arg1 fromZoneSyncEngine:(id)arg2;
- (id)initWithCloudSyncingClasses:(id)arg1 container:(id)arg2 store:(id)arg3;
- (void)buildSchemaWithCompletion:(CDUnknownBlockType)arg1;

@end
