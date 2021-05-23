/*
 Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

#import <ProtocolBuffer/PBCodable.h>

@class CKDPParticipant, CKDPRecordType, NSData, NSString;

@interface CKDPShareMetadata : PBCodable

{
    CKDPParticipant *_callerParticipant;
    CKDPParticipant *_ownerParticipant;
    int _participantPermission;
    int _participantState;
    int _participantType;
    NSData *_protectedFullToken;
    CKDPRecordType *_rootRecordType;
    NSString *_routingKey;
    struct {
        unsigned int participantPermission:1;
        unsigned int participantState:1;
        unsigned int participantType:1;
    } _has;
}

@property (nonatomic, readonly) _Bool hasRoutingKey;
@property (retain, nonatomic) NSString *routingKey;
@property (nonatomic, readonly) _Bool hasProtectedFullToken;
@property (retain, nonatomic) NSData *protectedFullToken;
@property (nonatomic, readonly) _Bool hasOwnerParticipant;
@property (retain, nonatomic) CKDPParticipant *ownerParticipant;
@property (nonatomic, readonly) _Bool hasCallerParticipant;
@property (retain, nonatomic) CKDPParticipant *callerParticipant;
@property (nonatomic) _Bool hasParticipantPermission;
@property (nonatomic) int participantPermission;
@property (nonatomic) _Bool hasParticipantState;
@property (nonatomic) int participantState;
@property (nonatomic) _Bool hasParticipantType;
@property (nonatomic) int participantType;
@property (nonatomic, readonly) _Bool hasRootRecordType;
@property (retain, nonatomic) CKDPRecordType *rootRecordType;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)_participantPermissionCKLogValue;
- (id)_participantStateCKLogValue;
- (id)_participantTypeCKLogValue;
- (id)participantPermissionAsString:(int)arg1;
- (int)StringAsParticipantPermission:(id)arg1;
- (id)participantStateAsString:(int)arg1;
- (int)StringAsParticipantState:(id)arg1;
- (id)participantTypeAsString:(int)arg1;
- (int)StringAsParticipantType:(id)arg1;

@end
