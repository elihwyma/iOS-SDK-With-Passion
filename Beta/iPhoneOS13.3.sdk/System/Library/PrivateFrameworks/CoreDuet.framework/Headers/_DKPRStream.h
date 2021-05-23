/*
 Image: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSString, _DKPRValueType;

@interface _DKPRStream : PBCodable

{
    NSString *_name;
    _DKPRValueType *_type;
}

@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) _DKPRValueType *type;

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
