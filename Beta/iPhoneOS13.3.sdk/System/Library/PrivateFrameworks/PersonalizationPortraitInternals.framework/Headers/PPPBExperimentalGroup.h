/*
 Image: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSString;

@interface PPPBExperimentalGroup : PBCodable

{
    NSString *_abGroupIdentifier;
    NSString *_experimentId;
}

@property (nonatomic, readonly) _Bool hasExperimentId;
@property (retain, nonatomic) NSString *experimentId;
@property (nonatomic, readonly) _Bool hasAbGroupIdentifier;
@property (retain, nonatomic) NSString *abGroupIdentifier;

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
