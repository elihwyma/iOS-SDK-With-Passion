/*
 Image: /System/Library/PrivateFrameworks/ActivitySharing.framework/ActivitySharing
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSData;

@interface ASCodableDatabaseCompetitionListEntry : PBCodable

{
    long long _owner;
    long long _type;
    NSData *_friendUUID;
    NSData *_systemFieldsOnlyRecord;
    struct {
        unsigned int owner:1;
        unsigned int type:1;
    } _has;
}

@property (nonatomic, readonly) _Bool hasFriendUUID;
@property (retain, nonatomic) NSData *friendUUID;
@property (nonatomic) _Bool hasType;
@property (nonatomic) long long type;
@property (nonatomic, readonly) _Bool hasSystemFieldsOnlyRecord;
@property (retain, nonatomic) NSData *systemFieldsOnlyRecord;
@property (nonatomic) _Bool hasOwner;
@property (nonatomic) long long owner;

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
