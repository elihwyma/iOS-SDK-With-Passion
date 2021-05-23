/*
 Image: /System/Library/PrivateFrameworks/ActivitySharing.framework/ActivitySharing
 */

#import <ProtocolBuffer/PBCodable.h>

@class ASCodableCloudKitCompetition, NSData;

@interface ASCodableDatabaseCompetition : PBCodable

{
    long long _type;
    ASCodableCloudKitCompetition *_competition;
    NSData *_friendUUID;
    CDStruct_f953fb60 _has;
}

@property (nonatomic, readonly) _Bool hasFriendUUID;
@property (retain, nonatomic) NSData *friendUUID;
@property (nonatomic) _Bool hasType;
@property (nonatomic) long long type;
@property (nonatomic, readonly) _Bool hasCompetition;
@property (retain, nonatomic) ASCodableCloudKitCompetition *competition;

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
