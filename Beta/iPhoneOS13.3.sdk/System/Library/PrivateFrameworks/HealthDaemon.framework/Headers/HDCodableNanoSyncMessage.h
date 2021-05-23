/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <ProtocolBuffer/PBCodable.h>

#import <HealthDaemon/Swift-Protocol.h>

@class HDCodableNanoSyncActivationRestore, HDCodableNanoSyncChangeSet, HDCodableNanoSyncStatus, NSData, NSString;

@interface HDCodableNanoSyncMessage : PBCodable <Swift>

{
    HDCodableNanoSyncActivationRestore *_activationRestore;
    HDCodableNanoSyncChangeSet *_changeSet;
    NSData *_healthPairingUUID;
    NSData *_persistentPairingUUID;
    HDCodableNanoSyncStatus *_status;
    int _version;
    struct {
        unsigned int version:1;
    } _has;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic) _Bool hasVersion;
@property (nonatomic) int version;
@property (nonatomic, readonly) _Bool hasPersistentPairingUUID;
@property (retain, nonatomic) NSData *persistentPairingUUID;
@property (nonatomic, readonly) _Bool hasHealthPairingUUID;
@property (retain, nonatomic) NSData *healthPairingUUID;
@property (nonatomic, readonly) _Bool hasChangeSet;
@property (retain, nonatomic) HDCodableNanoSyncChangeSet *changeSet;
@property (nonatomic, readonly) _Bool hasStatus;
@property (retain, nonatomic) HDCodableNanoSyncStatus *status;
@property (nonatomic, readonly) _Bool hasActivationRestore;
@property (retain, nonatomic) HDCodableNanoSyncActivationRestore *activationRestore;

+ (id)messageWithSyncStore:(id)arg1;
+ (id)messageFromPersistentUserInfo:(id)arg1;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)nanoSyncDescription;
- (id)decodedPersistentPairingUUID;
- (id)decodedHealthPairingUUID;
- (id)copyPersistentUserInfo;

@end
