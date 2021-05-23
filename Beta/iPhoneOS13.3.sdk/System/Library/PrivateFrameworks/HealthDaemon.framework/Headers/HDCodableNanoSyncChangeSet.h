/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <ProtocolBuffer/PBCodable.h>

#import <HealthDaemon/Swift-Protocol.h>

@class HDCodableError, NSData, NSMutableArray, NSString;

@interface HDCodableNanoSyncChangeSet : PBCodable <Swift>

{
    double _sessionStartDate;
    NSMutableArray *_changes;
    HDCodableError *_sessionError;
    NSData *_sessionUUID;
    int _statusCode;
    struct {
        unsigned int sessionStartDate:1;
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
@property (retain, nonatomic) NSMutableArray *changes;
@property (nonatomic, readonly) _Bool hasSessionUUID;
@property (retain, nonatomic) NSData *sessionUUID;
@property (nonatomic) _Bool hasSessionStartDate;
@property (nonatomic) double sessionStartDate;
@property (nonatomic, readonly) _Bool hasSessionError;
@property (retain, nonatomic) HDCodableError *sessionError;
@property (nonatomic) _Bool hasStatusCode;
@property (nonatomic) int statusCode;

+ (Class)changesType;
+ (id)changeSetWithChanges:(id)arg1 sessionUUID:(id)arg2 startDate:(id)arg3 sessionError:(id)arg4 statusCode:(int)arg5;
+ (id)retreiveFromPersistentUserInfo:(id)arg1;
+ (id)persistentUserInfoKey;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)addChanges:(id)arg1;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)statusCodeAsString:(int)arg1;
- (int)StringAsStatusCode:(id)arg1;
- (unsigned long long)changesCount;
- (void)clearChanges;
- (id)changesAtIndex:(unsigned long long)arg1;
- (id)nanoSyncDescription;
- (void)_addChanges:(id)arg1;
- (id)decodedSessionUUID;
- (id)decodedSessionStartDate;
- (id)decodedSessionError;
- (void)addToPersistentUserInfo:(id)arg1;
- (id)copyForPersistentUserInfo;

@end
