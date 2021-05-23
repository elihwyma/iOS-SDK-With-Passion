/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <Foundation/NSObject.h>

@class NSArray, NSDictionary, NSString;

@interface FCCKZoneSchema : NSObject

{
    NSDictionary *_recordSchemasByClientType;
    NSDictionary *_recordSchemasByServerType;
    NSDictionary *_staticServerRecordNamesByClientName;
    NSDictionary *_staticClientRecordNamesByServerName;
    _Bool _isDefaultZone;
    _Bool _supportsRecordNameEncryption;
    _Bool _supportsRecordFieldEncryption;
    _Bool _shouldUseZoneWidePCS;
    _Bool _shouldUseSecureContainer;
    NSString *_clientZoneName;
    NSString *_serverZoneName;
    NSArray *_staticRecordNamesEligibleForMigration;
}

@property (copy, nonatomic, readonly) NSString *clientZoneName;
@property (copy, nonatomic, readonly) NSString *serverZoneName;
@property (copy, nonatomic, readonly) NSArray *allClientRecordTypes;
@property (nonatomic, readonly) _Bool isDefaultZone;
@property (copy, nonatomic, readonly) NSArray *staticRecordNamesEligibleForMigration;
@property (nonatomic, readonly) _Bool supportsRecordNameEncryption;
@property (nonatomic, readonly) _Bool supportsRecordFieldEncryption;
@property (nonatomic, readonly) _Bool shouldUseZoneWidePCS;
@property (nonatomic, readonly) _Bool shouldUseSecureContainer;

+ (id)zoneWithClientName:(id)arg1 serverName:(id)arg2 records:(id)arg3 staticRecordNames:(id)arg4 shouldEncryptRecordNames:(_Bool)arg5 shouldUseZoneWidePCS:(_Bool)arg6 shouldUseSecureContainer:(_Bool)arg7;
+ (id)defaultZoneWithRecords:(id)arg1 staticRecordNames:(id)arg2 staticRecordNameMigrationBlacklist:(id)arg3 shouldUseSecureContainer:(_Bool)arg4;
+ (id)zoneWithClientName:(id)arg1 serverName:(id)arg2 records:(id)arg3;

- (id)init;
- (id)schemaForRecordWithClientType:(id)arg1;
- (id)schemaForRecordWithServerType:(id)arg1;
- (_Bool)shouldEncryptClientRecordName:(id)arg1;
- (id)serverRecordNameForClientRecordName:(id)arg1;
- (_Bool)shouldDecryptServerRecordName:(id)arg1;
- (id)clientRecordNameForServerRecordName:(id)arg1;
- (_Bool)isKnownClientRecordName:(id)arg1;
- (id)initWithClientZoneName:(id)arg1 serverZoneName:(id)arg2 recordSchemas:(id)arg3 staticRecordNames:(id)arg4 staticRecordNameMigrationBlacklist:(id)arg5 shouldEncryptRecordNames:(_Bool)arg6 shouldUseZoneWidePCS:(_Bool)arg7 shouldUseSecureContainer:(_Bool)arg8;
- (_Bool)isKnownServerRecordName:(id)arg1;
- (void)enumerateRecordSchemasWithBlock:(CDUnknownBlockType)arg1;

@end
