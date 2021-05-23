/*
 Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface VKPShieldIndexEntry : PBCodable

{
    CDStruct_95bda58d _defaultForFeatureTypes;
    CDStruct_95bda58d _shieldTypes;
    NSString *_artworkIdentifier;
}

@property (nonatomic, readonly) _Bool hasArtworkIdentifier;
@property (retain, nonatomic) NSString *artworkIdentifier;
@property (nonatomic, readonly) unsigned long long shieldTypesCount;
@property (nonatomic, readonly) int *shieldTypes;
@property (nonatomic, readonly) unsigned long long defaultForFeatureTypesCount;
@property (nonatomic, readonly) int *defaultForFeatureTypes;

- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (void)clearShieldTypes;
- (int)shieldTypesAtIndex:(unsigned long long)arg1;
- (void)addShieldTypes:(int)arg1;
- (void)clearDefaultForFeatureTypes;
- (int)defaultForFeatureTypeAtIndex:(unsigned long long)arg1;
- (void)addDefaultForFeatureType:(int)arg1;
- (void)setShieldTypes:(int *)arg1 count:(unsigned long long)arg2;
- (void)setDefaultForFeatureTypes:(int *)arg1 count:(unsigned long long)arg2;

@end
