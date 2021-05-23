/*
 Image: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSString, _DKPRValue;

@interface _DKPRMetadataEntry : PBCodable

{
    NSString *_key;
    _DKPRValue *_value;
}

@property (retain, nonatomic) NSString *key;
@property (retain, nonatomic) _DKPRValue *value;

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
