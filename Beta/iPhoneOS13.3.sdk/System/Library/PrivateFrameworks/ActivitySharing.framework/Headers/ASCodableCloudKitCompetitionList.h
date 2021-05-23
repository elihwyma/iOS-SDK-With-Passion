/*
 Image: /System/Library/PrivateFrameworks/ActivitySharing.framework/ActivitySharing
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSData, NSMutableArray;

@interface ASCodableCloudKitCompetitionList : PBCodable

{
    long long _type;
    NSMutableArray *_competitions;
    NSData *_friendUUID;
    CDStruct_f953fb60 _has;
}

@property (retain, nonatomic) NSMutableArray *competitions;
@property (nonatomic, readonly) _Bool hasFriendUUID;
@property (retain, nonatomic) NSData *friendUUID;
@property (nonatomic) _Bool hasType;
@property (nonatomic) long long type;

+ (Class)competitionsType;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (void)addCompetitions:(id)arg1;
- (unsigned long long)competitionsCount;
- (void)clearCompetitions;
- (id)competitionsAtIndex:(unsigned long long)arg1;

@end
