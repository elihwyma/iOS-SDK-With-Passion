/*
 Image: /System/Library/PrivateFrameworks/SetupAssistant.framework/SetupAssistant
 */

#import <PBCodable.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface BFFSetupAssistantDeviceToDeviceMigrationFailure : PBCodable

{
    long long _errorCode;
    unsigned long long _timestamp;
    long long _underlyingErrorCode;
    int _connectionType;
    NSString *_errorDomain;
    NSString *_sourceDeviceModel;
    NSString *_sourceDeviceProductVersion;
    NSString *_targetDeviceModel;
    NSString *_targetDeviceProductVersion;
    NSString *_underlyingErrorDomain;
    _Bool _inAppleStore;
    struct {
        unsigned int errorCode:1;
        unsigned int timestamp:1;
        unsigned int underlyingErrorCode:1;
        unsigned int connectionType:1;
        unsigned int inAppleStore:1;
    } _has;
}

@property (nonatomic) _Bool hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic, readonly) _Bool hasErrorDomain;
@property (retain, nonatomic) NSString *errorDomain;
@property (nonatomic) _Bool hasErrorCode;
@property (nonatomic) long long errorCode;
@property (nonatomic, readonly) _Bool hasUnderlyingErrorDomain;
@property (retain, nonatomic) NSString *underlyingErrorDomain;
@property (nonatomic) _Bool hasUnderlyingErrorCode;
@property (nonatomic) long long underlyingErrorCode;
@property (nonatomic, readonly) _Bool hasSourceDeviceModel;
@property (retain, nonatomic) NSString *sourceDeviceModel;
@property (nonatomic, readonly) _Bool hasSourceDeviceProductVersion;
@property (retain, nonatomic) NSString *sourceDeviceProductVersion;
@property (nonatomic, readonly) _Bool hasTargetDeviceModel;
@property (retain, nonatomic) NSString *targetDeviceModel;
@property (nonatomic, readonly) _Bool hasTargetDeviceProductVersion;
@property (retain, nonatomic) NSString *targetDeviceProductVersion;
@property (nonatomic) _Bool hasConnectionType;
@property (nonatomic) int connectionType;
@property (nonatomic) _Bool hasInAppleStore;
@property (nonatomic) _Bool inAppleStore;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;

@end
