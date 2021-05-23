/*
 Image: /System/Library/PrivateFrameworks/C2.framework/C2
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface C2MPInternalTestConfig : PBCodable

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
