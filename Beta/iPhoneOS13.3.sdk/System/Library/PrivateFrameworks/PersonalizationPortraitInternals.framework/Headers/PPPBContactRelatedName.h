/*
 Image: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSString;

@interface PPPBContactRelatedName : PBCodable

{
    NSString *_key;
    NSString *_value;
}

@property (nonatomic, readonly) _Bool hasKey;
@property (retain, nonatomic) NSString *key;
@property (nonatomic, readonly) _Bool hasValue;
@property (retain, nonatomic) NSString *value;

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
