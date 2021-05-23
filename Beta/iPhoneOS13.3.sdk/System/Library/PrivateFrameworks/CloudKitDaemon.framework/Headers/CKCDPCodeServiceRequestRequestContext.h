/*
 Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

#import <ProtocolBuffer/PBCodable.h>

@class CKCDPCodeServiceRequestOperationGroup, NSString;

__attribute__((visibility("hidden")))
@interface CKCDPCodeServiceRequestRequestContext : PBCodable

{
    unsigned long long _dsid;
    NSString *_applicationBundleId;
    NSString *_clientInfo;
    NSString *_containerName;
    int _databaseEnvironment;
    int _databasePartition;
    int _databaseType;
    NSString *_deviceId;
    CKCDPCodeServiceRequestOperationGroup *_operationGroup;
    NSString *_userAgent;
    NSString *_userId;
    struct {
        unsigned int dsid:1;
        unsigned int databaseEnvironment:1;
        unsigned int databasePartition:1;
        unsigned int databaseType:1;
    } _has;
}

@property (nonatomic, readonly) _Bool hasUserId;
@property (retain, nonatomic) NSString *userId;
@property (nonatomic, readonly) _Bool hasContainerName;
@property (retain, nonatomic) NSString *containerName;
@property (nonatomic) _Bool hasDatabaseEnvironment;
@property (nonatomic) int databaseEnvironment;
@property (nonatomic) _Bool hasDatabaseType;
@property (nonatomic) int databaseType;
@property (nonatomic, readonly) _Bool hasDeviceId;
@property (retain, nonatomic) NSString *deviceId;
@property (nonatomic, readonly) _Bool hasApplicationBundleId;
@property (retain, nonatomic) NSString *applicationBundleId;
@property (nonatomic) _Bool hasDatabasePartition;
@property (nonatomic) int databasePartition;
@property (nonatomic, readonly) _Bool hasClientInfo;
@property (retain, nonatomic) NSString *clientInfo;
@property (nonatomic) _Bool hasDsid;
@property (nonatomic) unsigned long long dsid;
@property (nonatomic, readonly) _Bool hasUserAgent;
@property (retain, nonatomic) NSString *userAgent;
@property (nonatomic, readonly) _Bool hasOperationGroup;
@property (retain, nonatomic) CKCDPCodeServiceRequestOperationGroup *operationGroup;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)databaseEnvironmentAsString:(int)arg1;
- (int)StringAsDatabaseEnvironment:(id)arg1;
- (id)databaseTypeAsString:(int)arg1;
- (int)StringAsDatabaseType:(id)arg1;

@end
