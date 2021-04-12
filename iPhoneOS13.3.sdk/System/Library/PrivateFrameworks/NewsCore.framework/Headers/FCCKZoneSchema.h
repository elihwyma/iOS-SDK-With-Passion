//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSString;

@interface FCCKZoneSchema : NSObject
{
    NSDictionary *_recordSchemasByClientType;
    NSDictionary *_recordSchemasByServerType;
    NSDictionary *_staticServerRecordNamesByClientName;
    NSDictionary *_staticClientRecordNamesByServerName;
    BOOL _isDefaultZone;
    BOOL _supportsRecordNameEncryption;
    BOOL _supportsRecordFieldEncryption;
    BOOL _shouldUseZoneWidePCS;
    BOOL _shouldUseSecureContainer;
    NSString *_clientZoneName;
    NSString *_serverZoneName;
    NSArray *_staticRecordNamesEligibleForMigration;
}

+ (id)defaultZoneWithRecords:(id)arg1 staticRecordNames:(id)arg2 staticRecordNameMigrationBlacklist:(id)arg3 shouldUseSecureContainer:(BOOL)arg4;
+ (id)zoneWithClientName:(id)arg1 serverName:(id)arg2 records:(id)arg3 staticRecordNames:(id)arg4 shouldEncryptRecordNames:(BOOL)arg5 shouldUseZoneWidePCS:(BOOL)arg6 shouldUseSecureContainer:(BOOL)arg7;
+ (id)zoneWithClientName:(id)arg1 serverName:(id)arg2 records:(id)arg3;
@property(readonly, nonatomic) BOOL shouldUseSecureContainer; // @synthesize shouldUseSecureContainer=_shouldUseSecureContainer;
@property(readonly, nonatomic) BOOL shouldUseZoneWidePCS; // @synthesize shouldUseZoneWidePCS=_shouldUseZoneWidePCS;
@property(readonly, nonatomic) BOOL supportsRecordFieldEncryption; // @synthesize supportsRecordFieldEncryption=_supportsRecordFieldEncryption;
@property(readonly, nonatomic) BOOL supportsRecordNameEncryption; // @synthesize supportsRecordNameEncryption=_supportsRecordNameEncryption;
@property(readonly, copy, nonatomic) NSArray *staticRecordNamesEligibleForMigration; // @synthesize staticRecordNamesEligibleForMigration=_staticRecordNamesEligibleForMigration;
@property(readonly, nonatomic) BOOL isDefaultZone; // @synthesize isDefaultZone=_isDefaultZone;
@property(readonly, copy, nonatomic) NSString *serverZoneName; // @synthesize serverZoneName=_serverZoneName;
@property(readonly, copy, nonatomic) NSString *clientZoneName; // @synthesize clientZoneName=_clientZoneName;
// - (void).cxx_destruct;
- (void)enumerateRecordSchemasWithBlock:(id /* CDUnknownBlockType */)arg1;
- (BOOL)shouldDecryptServerRecordName:(id)arg1;
- (BOOL)shouldEncryptClientRecordName:(id)arg1;
- (BOOL)isKnownServerRecordName:(id)arg1;
- (BOOL)isKnownClientRecordName:(id)arg1;
- (id)clientRecordNameForServerRecordName:(id)arg1;
- (id)serverRecordNameForClientRecordName:(id)arg1;
- (id)schemaForRecordWithServerType:(id)arg1;
- (id)schemaForRecordWithClientType:(id)arg1;
@property(readonly, copy, nonatomic) NSArray *allClientRecordTypes;
- (id)initWithClientZoneName:(id)arg1 serverZoneName:(id)arg2 recordSchemas:(id)arg3 staticRecordNames:(id)arg4 staticRecordNameMigrationBlacklist:(id)arg5 shouldEncryptRecordNames:(BOOL)arg6 shouldUseZoneWidePCS:(BOOL)arg7 shouldUseSecureContainer:(BOOL)arg8;
- (id)init;

@end

