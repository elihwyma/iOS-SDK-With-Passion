/*
 Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface VKPShieldIndexTextEntry : PBCodable

{
    NSString *_artworkIdentifier;
    NSMutableArray *_shieldTexts;
    int _shieldType;
    struct {
        unsigned int shieldType:1;
    } _has;
}

@property (nonatomic, readonly) _Bool hasArtworkIdentifier;
@property (retain, nonatomic) NSString *artworkIdentifier;
@property (nonatomic) _Bool hasShieldType;
@property (nonatomic) int shieldType;
@property (retain, nonatomic) NSMutableArray *shieldTexts;

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
- (void)addShieldText:(id)arg1;
- (unsigned long long)shieldTextsCount;
- (void)clearShieldTexts;
- (id)shieldTextAtIndex:(unsigned long long)arg1;

@end
