/*
 Image: /System/Library/PrivateFrameworks/CoreSuggestions.framework/CoreSuggestions
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSString;

@interface SGM2MaybeInformationShown : PBCodable

{
    int _extracted;
    NSString *_key;
    struct {
        unsigned int extracted:1;
    } _has;
}

@property (nonatomic, readonly) _Bool hasKey;
@property (retain, nonatomic) NSString *key;
@property (nonatomic) _Bool hasExtracted;
@property (nonatomic) int extracted;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)extractedAsString:(int)arg1;
- (int)StringAsExtracted:(id)arg1;

@end
