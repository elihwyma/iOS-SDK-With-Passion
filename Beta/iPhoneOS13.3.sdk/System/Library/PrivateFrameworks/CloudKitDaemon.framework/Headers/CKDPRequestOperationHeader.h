/*
 Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

#import <ProtocolBuffer/PBCodable.h>

@class CKDPIdentifier, CKDPLocale, CKDPRequestOperationHeaderAssetAuthorizeGetRequestOptions, NSData, NSMutableArray, NSString;

@interface CKDPRequestOperationHeader : PBCodable

{
    unsigned long long _applicationConfigVersion;
    unsigned long long _deviceFlowControlBudget;
    unsigned long long _deviceFlowControlBudgetCap;
    unsigned long long _deviceProtocolVersion;
    unsigned long long _globalConfigVersion;
    unsigned long long _operationGroupQuantity;
    NSString *_applicationBundle;
    NSString *_applicationContainer;
    int _applicationContainerEnvironment;
    NSString *_applicationVersion;
    CKDPRequestOperationHeaderAssetAuthorizeGetRequestOptions *_assetAuthorizeGetRequestOptions;
    NSData *_clientChangeToken;
    NSString *_deviceAssignedName;
    NSString *_deviceFlowControlKey;
    float _deviceFlowControlRegeneration;
    NSString *_deviceHardwareID;
    NSString *_deviceHardwareVersion;
    CKDPIdentifier *_deviceIdentifier;
    NSString *_deviceLibraryName;
    NSString *_deviceLibraryVersion;
    NSString *_deviceSoftwareVersion;
    int _isolationLevel;
    CKDPLocale *_locale;
    NSString *_mmcsProtocolVersion;
    NSString *_operationGroupName;
    NSMutableArray *_serviceIdentityKeyIDs;
    int _targetDatabase;
    NSString *_userIDContainerID;
    NSString *_userToken;
    _Bool _deviceSoftwareIsAppleInternal;
    struct {
        unsigned int applicationConfigVersion:1;
        unsigned int deviceFlowControlBudget:1;
        unsigned int deviceFlowControlBudgetCap:1;
        unsigned int deviceProtocolVersion:1;
        unsigned int globalConfigVersion:1;
        unsigned int operationGroupQuantity:1;
        unsigned int applicationContainerEnvironment:1;
        unsigned int deviceFlowControlRegeneration:1;
        unsigned int isolationLevel:1;
        unsigned int targetDatabase:1;
        unsigned int deviceSoftwareIsAppleInternal:1;
    } _has;
}

@property (nonatomic, readonly) _Bool hasUserToken;
@property (retain, nonatomic) NSString *userToken;
@property (nonatomic, readonly) _Bool hasApplicationContainer;
@property (retain, nonatomic) NSString *applicationContainer;
@property (nonatomic, readonly) _Bool hasApplicationBundle;
@property (retain, nonatomic) NSString *applicationBundle;
@property (nonatomic, readonly) _Bool hasApplicationVersion;
@property (retain, nonatomic) NSString *applicationVersion;
@property (nonatomic) _Bool hasApplicationConfigVersion;
@property (nonatomic) unsigned long long applicationConfigVersion;
@property (nonatomic) _Bool hasGlobalConfigVersion;
@property (nonatomic) unsigned long long globalConfigVersion;
@property (nonatomic, readonly) _Bool hasDeviceIdentifier;
@property (retain, nonatomic) CKDPIdentifier *deviceIdentifier;
@property (nonatomic, readonly) _Bool hasDeviceSoftwareVersion;
@property (retain, nonatomic) NSString *deviceSoftwareVersion;
@property (nonatomic, readonly) _Bool hasDeviceHardwareVersion;
@property (retain, nonatomic) NSString *deviceHardwareVersion;
@property (nonatomic, readonly) _Bool hasDeviceLibraryName;
@property (retain, nonatomic) NSString *deviceLibraryName;
@property (nonatomic, readonly) _Bool hasDeviceLibraryVersion;
@property (retain, nonatomic) NSString *deviceLibraryVersion;
@property (nonatomic, readonly) _Bool hasDeviceFlowControlKey;
@property (retain, nonatomic) NSString *deviceFlowControlKey;
@property (nonatomic) _Bool hasDeviceFlowControlBudget;
@property (nonatomic) unsigned long long deviceFlowControlBudget;
@property (nonatomic) _Bool hasDeviceFlowControlBudgetCap;
@property (nonatomic) unsigned long long deviceFlowControlBudgetCap;
@property (nonatomic) _Bool hasDeviceFlowControlRegeneration;
@property (nonatomic) float deviceFlowControlRegeneration;
@property (nonatomic) _Bool hasDeviceProtocolVersion;
@property (nonatomic) unsigned long long deviceProtocolVersion;
@property (nonatomic, readonly) _Bool hasLocale;
@property (retain, nonatomic) CKDPLocale *locale;
@property (nonatomic, readonly) _Bool hasMmcsProtocolVersion;
@property (retain, nonatomic) NSString *mmcsProtocolVersion;
@property (nonatomic) _Bool hasApplicationContainerEnvironment;
@property (nonatomic) int applicationContainerEnvironment;
@property (nonatomic, readonly) _Bool hasClientChangeToken;
@property (retain, nonatomic) NSData *clientChangeToken;
@property (nonatomic, readonly) _Bool hasDeviceAssignedName;
@property (retain, nonatomic) NSString *deviceAssignedName;
@property (nonatomic, readonly) _Bool hasDeviceHardwareID;
@property (retain, nonatomic) NSString *deviceHardwareID;
@property (nonatomic) _Bool hasTargetDatabase;
@property (nonatomic) int targetDatabase;
@property (nonatomic, readonly) _Bool hasUserIDContainerID;
@property (retain, nonatomic) NSString *userIDContainerID;
@property (nonatomic) _Bool hasIsolationLevel;
@property (nonatomic) int isolationLevel;
@property (nonatomic, readonly) _Bool hasOperationGroupName;
@property (retain, nonatomic) NSString *operationGroupName;
@property (nonatomic) _Bool hasOperationGroupQuantity;
@property (nonatomic) unsigned long long operationGroupQuantity;
@property (retain, nonatomic) NSMutableArray *serviceIdentityKeyIDs;
@property (nonatomic) _Bool hasDeviceSoftwareIsAppleInternal;
@property (nonatomic) _Bool deviceSoftwareIsAppleInternal;
@property (nonatomic, readonly) _Bool hasAssetAuthorizeGetRequestOptions;
@property (retain, nonatomic) CKDPRequestOperationHeaderAssetAuthorizeGetRequestOptions *assetAuthorizeGetRequestOptions;

+ (Class)serviceIdentityKeyIDsType;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)applicationContainerEnvironmentAsString:(int)arg1;
- (int)StringAsApplicationContainerEnvironment:(id)arg1;
- (void)addServiceIdentityKeyIDs:(id)arg1;
- (unsigned long long)serviceIdentityKeyIDsCount;
- (void)clearServiceIdentityKeyIDs;
- (id)serviceIdentityKeyIDsAtIndex:(unsigned long long)arg1;
- (id)targetDatabaseAsString:(int)arg1;
- (int)StringAsTargetDatabase:(id)arg1;
- (id)isolationLevelAsString:(int)arg1;
- (int)StringAsIsolationLevel:(id)arg1;
- (id)_applicationContainerEnvironmentCKLogValue;
- (id)_isolationLevelCKLogValue;
- (id)_targetDatabaseCKLogValue;

@end
