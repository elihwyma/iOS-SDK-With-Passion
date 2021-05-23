/*
 Image: /System/Library/PrivateFrameworks/TrustedPeers.framework/TrustedPeers
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSString;

@interface TPPBDictionaryMatchingRuleFieldExists : PBCodable

{
    NSString *_fieldName;
}

@property (nonatomic, readonly) _Bool hasFieldName;
@property (retain, nonatomic) NSString *fieldName;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (_Bool)matches:(id)arg1 error:(id *)arg2;

@end
