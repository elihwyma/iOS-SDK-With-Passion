/*
 Image: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
 */

#import <ProtocolBuffer/PBCodable.h>

@class NTPBAbsolutePersonalizedSectionPresenceConfig, NTPBRelativePersonalizedSectionPresenceConfig;

@interface NTPBPersonalizedSectionPresenceConfig : PBCodable

{
    NTPBAbsolutePersonalizedSectionPresenceConfig *_absoluteConfig;
    int _personalizationMethod;
    NTPBRelativePersonalizedSectionPresenceConfig *_relativeConfig;
    struct {
        unsigned int personalizationMethod:1;
    } _has;
}

@property (nonatomic) _Bool hasPersonalizationMethod;
@property (nonatomic) int personalizationMethod;
@property (nonatomic, readonly) _Bool hasRelativeConfig;
@property (retain, nonatomic) NTPBRelativePersonalizedSectionPresenceConfig *relativeConfig;
@property (nonatomic, readonly) _Bool hasAbsoluteConfig;
@property (retain, nonatomic) NTPBAbsolutePersonalizedSectionPresenceConfig *absoluteConfig;

- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;

@end
