/*
 Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

#import <ProtocolBuffer/PBCodable.h>

@class CKDPRecordFieldIdentifier, NSMutableArray;

__attribute__((visibility("hidden")))
@interface CKDPRequestedListField : PBCodable

{
    CKDPRecordFieldIdentifier *_fieldId;
    NSMutableArray *_ranges;
}

@property (nonatomic, readonly) _Bool hasFieldId;
@property (retain, nonatomic) CKDPRecordFieldIdentifier *fieldId;
@property (retain, nonatomic) NSMutableArray *ranges;

+ (Class)rangeType;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)rangeAtIndex:(unsigned long long)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (void)addRange:(id)arg1;
- (unsigned long long)rangesCount;
- (void)clearRanges;

@end
