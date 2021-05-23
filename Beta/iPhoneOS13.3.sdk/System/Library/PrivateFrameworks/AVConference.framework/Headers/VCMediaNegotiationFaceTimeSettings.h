/*
 Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

#import <ProtocolBuffer/PBCodable.h>

__attribute__((visibility("hidden")))
@interface VCMediaNegotiationFaceTimeSettings : PBCodable

{
    unsigned int _capabilities;
    unsigned int _switches;
    struct {
        unsigned int capabilities:1;
        unsigned int switches:1;
    } _has;
}

@property (nonatomic) _Bool hasCapabilities;
@property (nonatomic) unsigned int capabilities;
@property (nonatomic) _Bool hasSwitches;
@property (nonatomic) unsigned int switches;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (_Bool)SIPDisabled;
- (_Bool)secureMessagingRequired;

@end
