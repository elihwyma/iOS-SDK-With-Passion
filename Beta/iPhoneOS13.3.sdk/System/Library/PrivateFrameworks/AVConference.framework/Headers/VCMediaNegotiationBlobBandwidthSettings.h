/*
 Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

#import <ProtocolBuffer/PBCodable.h>

__attribute__((visibility("hidden")))
@interface VCMediaNegotiationBlobBandwidthSettings : PBCodable

{
    int _configuration;
    int _configurationExtension;
    unsigned int _maxBandwidth;
    struct {
        unsigned int configurationExtension:1;
    } _has;
}

@property (nonatomic) int configuration;
@property (nonatomic) unsigned int maxBandwidth;
@property (nonatomic) _Bool hasConfigurationExtension;
@property (nonatomic) int configurationExtension;

+ (int)bandwidthConfigurationWithOperatingMode:(int)arg1 connectionType:(int)arg2;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)configurationAsString:(int)arg1;
- (int)StringAsConfiguration:(id)arg1;
- (id)configurationExtensionAsString:(int)arg1;
- (int)StringAsConfigurationExtension:(id)arg1;
- (id)newBandwidthConfigurations;

@end
