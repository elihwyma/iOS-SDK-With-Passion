/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <Foundation/NSObject.h>

@class FCCKPrivateDatabaseSchema, NSString;

@protocol FCCKRecordNameCipher;

@interface FCCKDatabaseEncryptionMiddleware : NSObject

{
    FCCKPrivateDatabaseSchema *_encryptionSchema;
    id <FCCKRecordNameCipher> _recordNameCipher;
}

@property (retain, nonatomic) FCCKPrivateDatabaseSchema *encryptionSchema;
@property (retain, nonatomic) id <FCCKRecordNameCipher> recordNameCipher;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)clientToServerRecordID:(id)arg1 inDatabase:(id)arg2 error:(id *)arg3;
- (id)serverToClientRecordID:(id)arg1 inDatabase:(id)arg2 error:(id *)arg3;
- (id)clientToServerRecordZoneID:(id)arg1 inDatabase:(id)arg2 error:(id *)arg3;
- (id)serverToClientRecordZoneID:(id)arg1 inDatabase:(id)arg2 error:(id *)arg3;
- (id)clientToServerRecord:(id)arg1 inDatabase:(id)arg2 error:(id *)arg3;
- (id)serverToClientRecord:(id)arg1 inDatabase:(id)arg2 error:(id *)arg3;
- (id)clientToServerRecordZone:(id)arg1 inDatabase:(id)arg2 error:(id *)arg3;
- (id)serverToClientRecordZone:(id)arg1 inDatabase:(id)arg2 error:(id *)arg3;
- (id)clientToServerRecordType:(id)arg1 withRecordID:(id)arg2 inDatabase:(id)arg3 error:(id *)arg4;
- (id)serverToClientRecordType:(id)arg1 withRecordID:(id)arg2 inDatabase:(id)arg3 error:(id *)arg4;
- (id)initWithEncryptionSchema:(id)arg1 recordNameCipher:(id)arg2;
- (_Bool)_isEnabledForDatabase:(id)arg1;
- (id)_serverZoneIDFromClientZoneID:(id)arg1 error:(id *)arg2;
- (id)_clientZoneIDFromServerZoneID:(id)arg1 error:(id *)arg2;
- (id)_encryptionKeyForClientRecordID:(id)arg1 inDatabase:(id)arg2;
- (_Bool)_encryptRecordID:(id)arg1 withEncryptionKey:(id)arg2 error:(id *)arg3;
- (id)_encryptionKeyForServerRecordID:(id)arg1 inDatabase:(id)arg2;
- (_Bool)_decryptRecordID:(id)arg1 withEncryptionKey:(id)arg2 error:(id *)arg3;
- (_Bool)_encryptRecord:(id)arg1 withEncryptionKey:(id)arg2 schema:(id)arg3 error:(id *)arg4;
- (_Bool)_decryptRecord:(id)arg1 withEncryptionKey:(id)arg2 schema:(id)arg3 error:(id *)arg4;
- (_Bool)_encryptField:(id)arg1 inRecord:(id)arg2 error:(id *)arg3;
- (_Bool)_decryptField:(id)arg1 inRecord:(id)arg2 error:(id *)arg3;
- (id)initWithEncryptionSchema:(id)arg1;

@end
