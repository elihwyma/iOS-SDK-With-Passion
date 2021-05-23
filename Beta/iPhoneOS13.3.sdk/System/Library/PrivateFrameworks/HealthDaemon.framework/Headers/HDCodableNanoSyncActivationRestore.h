/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <ProtocolBuffer/PBCodable.h>

#import <HealthDaemon/Swift-Protocol.h>

@class NSData, NSMutableArray, NSString;

@interface HDCodableNanoSyncActivationRestore : PBCodable <Swift>

{
    long long _sequenceNumber;
    NSString *_defaultSourceBundleIdentifier;
    NSMutableArray *_obliteratedHealthPairingUUIDs;
    NSData *_restoreIdentifier;
    int _statusCode;
    struct {
        unsigned int sequenceNumber:1;
        unsigned int statusCode:1;
    } _has;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) _Bool hasRestoreIdentifier;
@property (retain, nonatomic) NSData *restoreIdentifier;
@property (nonatomic) _Bool hasSequenceNumber;
@property (nonatomic) long long sequenceNumber;
@property (nonatomic) _Bool hasStatusCode;
@property (nonatomic) int statusCode;
@property (nonatomic, readonly) _Bool hasDefaultSourceBundleIdentifier;
@property (retain, nonatomic) NSString *defaultSourceBundleIdentifier;
@property (retain, nonatomic) NSMutableArray *obliteratedHealthPairingUUIDs;

+ (Class)obliteratedHealthPairingUUIDsType;
+ (id)activationRestoreWithRestoreUUID:(id)arg1 sequenceNumber:(long long)arg2 statusCode:(int)arg3;
+ (id)retreiveFromPersistentUserInfo:(id)arg1;
+ (id)persistentUserInfoKey;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)statusCodeAsString:(int)arg1;
- (int)StringAsStatusCode:(id)arg1;
- (_Bool)hasRequiredFields;
- (void)addObliteratedHealthPairingUUIDs:(id)arg1;
- (unsigned long long)obliteratedHealthPairingUUIDsCount;
- (void)clearObliteratedHealthPairingUUIDs;
- (id)obliteratedHealthPairingUUIDsAtIndex:(unsigned long long)arg1;
- (id)nanoSyncDescription;
- (void)encodeObliteratedHealthPairingUUIDs:(id)arg1;
- (id)decodedObliteratedHealthPairingUUIDs;
- (id)decodedRestoreUUID;
- (void)addToPersistentUserInfo:(id)arg1;
- (id)copyForPersistentUserInfo;

@end
