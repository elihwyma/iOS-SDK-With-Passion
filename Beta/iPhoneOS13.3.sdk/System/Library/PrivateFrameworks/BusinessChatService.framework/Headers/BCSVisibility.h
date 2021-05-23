/*
 Image: /System/Library/PrivateFrameworks/BusinessChatService.framework/BusinessChatService
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface BCSVisibility : PBCodable

{
    double _ratio;
    NSString *_country;
    NSString *_language;
    struct {
        unsigned int ratio:1;
    } _has;
}

@property (nonatomic, readonly) _Bool hasLanguage;
@property (retain, nonatomic) NSString *language;
@property (nonatomic, readonly) _Bool hasCountry;
@property (retain, nonatomic) NSString *country;
@property (nonatomic) _Bool hasRatio;
@property (nonatomic) double ratio;

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
