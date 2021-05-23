/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <Foundation/NSObject.h>

@class HDDataProvenanceManager, HDEntityEncoder, HDProfile, HDSQLiteDatabase, NSMutableDictionary;

@interface HDDataProvenanceCache : NSObject

{
    HDProfile *_profile;
    HDDataProvenanceManager *_provenanceManager;
    HDSQLiteDatabase *_database;
    HDEntityEncoder *_sourceEncoder;
    NSMutableDictionary *_provenanceByID;
    NSMutableDictionary *_codableSourcesByID;
    NSMutableDictionary *_deviceUUIDBytesByID;
    NSMutableDictionary *_sourceByPersistentIDCache;
    NSMutableDictionary *_sourceRevisionByDataProvenanceIDCache;
    NSMutableDictionary *_sourceRevisionsDictionaryBySourceCache;
    NSMutableDictionary *_deviceByPersistentIDCache;
    NSMutableDictionary *_codableObjectCollectionsByProvenance;
}

@property (retain, nonatomic) HDProfile *profile;
@property (retain, nonatomic) HDDataProvenanceManager *provenanceManager;
@property (retain, nonatomic) HDSQLiteDatabase *database;
@property (retain, nonatomic) HDEntityEncoder *sourceEncoder;
@property (retain, nonatomic) NSMutableDictionary *provenanceByID;
@property (retain, nonatomic) NSMutableDictionary *codableSourcesByID;
@property (retain, nonatomic) NSMutableDictionary *deviceUUIDBytesByID;
@property (retain, nonatomic) NSMutableDictionary *sourceByPersistentIDCache;
@property (retain, nonatomic) NSMutableDictionary *sourceRevisionByDataProvenanceIDCache;
@property (retain, nonatomic) NSMutableDictionary *sourceRevisionsDictionaryBySourceCache;
@property (retain, nonatomic) NSMutableDictionary *deviceByPersistentIDCache;
@property (retain, nonatomic) NSMutableDictionary *codableObjectCollectionsByProvenance;

- (id)codableSourceWithProvenance:(id)arg1;
- (id)deviceUUIDBytesWithProvenance:(id)arg1;
- (id)codableProvenanceWithProvenance:(id)arg1;
- (id)_sourceForPersistentID:(id)arg1 profile:(id)arg2 error:(id *)arg3;
- (id)initWithProfile:(id)arg1 database:(id)arg2 purpose:(long long)arg3;
- (id)provenanceWithID:(id)arg1;
- (id)codableObjectCollectionForProvenance:(id)arg1;
- (void)clearCodableObjectCollections;
- (id)allCodableObjectCollections;
- (id)sourceRevisionForProvenanceID:(id)arg1 dataProvenance:(id)arg2 profile:(id)arg3 error:(id *)arg4;
- (id)deviceForPersistentID:(id)arg1 profile:(id)arg2 error:(id *)arg3;

@end
