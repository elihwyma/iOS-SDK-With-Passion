/*
 Image: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSString;

@interface PPM2SourceAlgPair : PBCodable

{
    NSString *_algorithm;
    NSString *_source;
}

@property (nonatomic, readonly) _Bool hasSource;
@property (retain, nonatomic) NSString *source;
@property (nonatomic, readonly) _Bool hasAlgorithm;
@property (retain, nonatomic) NSString *algorithm;

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
