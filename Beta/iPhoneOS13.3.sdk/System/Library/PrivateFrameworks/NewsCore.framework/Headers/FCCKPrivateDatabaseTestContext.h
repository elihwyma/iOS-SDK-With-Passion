/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <Foundation/NSObject.h>

@class CKDatabase, CKRecord, CKRecordID, CKRecordZone, CKRecordZoneID, FCCKPrivateDatabase, NSArray, NSDictionary, TCKDatabase;

@interface FCCKPrivateDatabaseTestContext : NSObject

{
    FCCKPrivateDatabase *_database;
    CKDatabase *_ckDatabase;
    CKDatabase *_ckDatabaseWithZoneWidePCS;
    CKDatabase *_ckSecureDatabase;
    TCKDatabase *_tckDatabase;
    TCKDatabase *_tckDatabaseWithZoneWidePCS;
    TCKDatabase *_tckSecureDatabase;
    CKRecordID *_clientRecordID;
    CKRecordID *_clientRecordIDWithZoneWidePCS;
    CKRecordID *_clientRecordIDSecure;
    NSArray *_allClientRecordIDs;
    CKRecordID *_serverRecordID;
    CKRecordID *_serverRecordIDWithZoneWidePCS;
    CKRecordID *_serverRecordIDSecure;
    NSArray *_allServerRecordIDs;
    CKRecord *_clientRecord;
    CKRecord *_clientRecordWithZoneWidePCS;
    CKRecord *_clientRecordSecure;
    NSArray *_allClientRecords;
    NSDictionary *_allClientRecordsByID;
    CKRecord *_serverRecord;
    CKRecord *_serverRecordWithZoneWidePCS;
    CKRecord *_serverRecordSecure;
    NSArray *_allServerRecords;
    CKRecordZoneID *_clientZoneID;
    CKRecordZoneID *_clientZoneIDWithZoneWidePCS;
    CKRecordZoneID *_clientZoneIDSecure;
    NSArray *_allClientZoneIDs;
    CKRecordZoneID *_serverZoneID;
    CKRecordZoneID *_serverZoneIDWithZoneWidePCS;
    CKRecordZoneID *_serverZoneIDSecure;
    NSArray *_allServerZoneIDs;
    CKRecordZone *_clientZone;
    CKRecordZone *_clientZoneWithZoneWidePCS;
    CKRecordZone *_clientZoneSecure;
    NSArray *_allClientZones;
    NSDictionary *_allClientZonesByID;
    CKRecordZone *_serverZone;
    CKRecordZone *_serverZoneWithZoneWidePCS;
    CKRecordZone *_serverZoneSecure;
    NSArray *_allServerZones;
    CKRecordID *_defaultZoneClientRecordID;
    CKRecordID *_defaultZoneClientRecordIDSecure;
    NSArray *_allDefaultZoneClientRecordIDs;
    CKRecordID *_defaultZoneServerRecordID;
    CKRecordID *_defaultZoneServerRecordIDSecure;
    CKRecord *_defaultZoneClientRecord;
    CKRecord *_defaultZoneClientRecordSecure;
    NSArray *_allDefaultZoneClientRecords;
    NSDictionary *_allDefaultZoneClientRecordsByID;
    CKRecord *_defaultZoneServerRecord;
    CKRecord *_defaultZoneServerRecordSecure;
}

@property (nonatomic, readonly) FCCKPrivateDatabase *database;
@property (nonatomic, readonly) CKDatabase *ckDatabase;
@property (nonatomic, readonly) CKDatabase *ckDatabaseWithZoneWidePCS;
@property (nonatomic, readonly) CKDatabase *ckSecureDatabase;
@property (nonatomic, readonly) TCKDatabase *tckDatabase;
@property (nonatomic, readonly) TCKDatabase *tckDatabaseWithZoneWidePCS;
@property (nonatomic, readonly) TCKDatabase *tckSecureDatabase;
@property (nonatomic, readonly) CKRecordID *clientRecordID;
@property (nonatomic, readonly) CKRecordID *clientRecordIDWithZoneWidePCS;
@property (nonatomic, readonly) CKRecordID *clientRecordIDSecure;
@property (nonatomic, readonly) NSArray *allClientRecordIDs;
@property (nonatomic, readonly) CKRecordID *serverRecordID;
@property (nonatomic, readonly) CKRecordID *serverRecordIDWithZoneWidePCS;
@property (nonatomic, readonly) CKRecordID *serverRecordIDSecure;
@property (nonatomic, readonly) NSArray *allServerRecordIDs;
@property (nonatomic, readonly) CKRecord *clientRecord;
@property (nonatomic, readonly) CKRecord *clientRecordWithZoneWidePCS;
@property (nonatomic, readonly) CKRecord *clientRecordSecure;
@property (nonatomic, readonly) NSArray *allClientRecords;
@property (nonatomic, readonly) NSDictionary *allClientRecordsByID;
@property (nonatomic, readonly) CKRecord *serverRecord;
@property (nonatomic, readonly) CKRecord *serverRecordWithZoneWidePCS;
@property (nonatomic, readonly) CKRecord *serverRecordSecure;
@property (nonatomic, readonly) NSArray *allServerRecords;
@property (nonatomic, readonly) CKRecordZoneID *clientZoneID;
@property (nonatomic, readonly) CKRecordZoneID *clientZoneIDWithZoneWidePCS;
@property (nonatomic, readonly) CKRecordZoneID *clientZoneIDSecure;
@property (nonatomic, readonly) NSArray *allClientZoneIDs;
@property (nonatomic, readonly) CKRecordZoneID *serverZoneID;
@property (nonatomic, readonly) CKRecordZoneID *serverZoneIDWithZoneWidePCS;
@property (nonatomic, readonly) CKRecordZoneID *serverZoneIDSecure;
@property (nonatomic, readonly) NSArray *allServerZoneIDs;
@property (nonatomic, readonly) CKRecordZone *clientZone;
@property (nonatomic, readonly) CKRecordZone *clientZoneWithZoneWidePCS;
@property (nonatomic, readonly) CKRecordZone *clientZoneSecure;
@property (nonatomic, readonly) NSArray *allClientZones;
@property (nonatomic, readonly) NSDictionary *allClientZonesByID;
@property (nonatomic, readonly) CKRecordZone *serverZone;
@property (nonatomic, readonly) CKRecordZone *serverZoneWithZoneWidePCS;
@property (nonatomic, readonly) CKRecordZone *serverZoneSecure;
@property (nonatomic, readonly) NSArray *allServerZones;
@property (nonatomic, readonly) CKRecordID *defaultZoneClientRecordID;
@property (nonatomic, readonly) CKRecordID *defaultZoneClientRecordIDSecure;
@property (nonatomic, readonly) NSArray *allDefaultZoneClientRecordIDs;
@property (nonatomic, readonly) CKRecordID *defaultZoneServerRecordID;
@property (nonatomic, readonly) CKRecordID *defaultZoneServerRecordIDSecure;
@property (nonatomic, readonly) CKRecord *defaultZoneClientRecord;
@property (nonatomic, readonly) CKRecord *defaultZoneClientRecordSecure;
@property (nonatomic, readonly) NSArray *allDefaultZoneClientRecords;
@property (nonatomic, readonly) NSDictionary *allDefaultZoneClientRecordsByID;
@property (nonatomic, readonly) CKRecord *defaultZoneServerRecord;
@property (nonatomic, readonly) CKRecord *defaultZoneServerRecordSecure;

- (id)init;

@end
