/*
 Image: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray, NSString;

@interface NTPBTrendingConfig : PBCodable

{
    NSString *_fallbackLanguageTag;
    NSMutableArray *_languageConfigs;
}

@property (nonatomic, readonly) _Bool hasFallbackLanguageTag;
@property (retain, nonatomic) NSString *fallbackLanguageTag;
@property (retain, nonatomic) NSMutableArray *languageConfigs;

+ (Class)languageConfigsType;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)addLanguageConfigs:(id)arg1;
- (void)clearLanguageConfigs;
- (unsigned long long)languageConfigsCount;
- (id)languageConfigsAtIndex:(unsigned long long)arg1;

@end
