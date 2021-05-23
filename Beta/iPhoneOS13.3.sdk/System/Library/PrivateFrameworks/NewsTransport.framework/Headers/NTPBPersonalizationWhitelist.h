/*
 Image: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray;

@interface NTPBPersonalizationWhitelist : PBCodable

{
    NSMutableArray *_defaultTags;
    NSMutableArray *_disabledPortraitTags;
    NSMutableArray *_optionalTags;
}

@property (retain, nonatomic) NSMutableArray *defaultTags;
@property (retain, nonatomic) NSMutableArray *optionalTags;
@property (retain, nonatomic) NSMutableArray *disabledPortraitTags;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)addDefaultTags:(id)arg1;
- (void)addOptionalTags:(id)arg1;
- (void)addDisabledPortraitTags:(id)arg1;
- (void)clearDefaultTags;
- (unsigned long long)defaultTagsCount;
- (id)defaultTagsAtIndex:(unsigned long long)arg1;
- (void)clearOptionalTags;
- (unsigned long long)optionalTagsCount;
- (id)optionalTagsAtIndex:(unsigned long long)arg1;
- (void)clearDisabledPortraitTags;
- (unsigned long long)disabledPortraitTagsCount;
- (id)disabledPortraitTagsAtIndex:(unsigned long long)arg1;

@end
