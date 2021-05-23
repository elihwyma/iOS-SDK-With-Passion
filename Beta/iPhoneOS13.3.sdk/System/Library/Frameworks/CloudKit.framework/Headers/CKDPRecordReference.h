/*
 Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

#import <PBCodable.h>

@class CKDPRecordIdentifier;

@interface CKDPRecordReference : PBCodable

{
    CKDPRecordIdentifier *_recordIdentifier;
    int _type;
    CDStruct_f953fb60 _has;
}

@property (nonatomic) _Bool hasType;
@property (nonatomic) int type;
@property (nonatomic, readonly) _Bool hasRecordIdentifier;
@property (retain, nonatomic) CKDPRecordIdentifier *recordIdentifier;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)typeAsString:(int)arg1;
- (int)StringAsType:(id)arg1;

@end
