/*
 Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

#import <ProtocolBuffer/PBCodable.h>

__attribute__((visibility("hidden")))
@interface VCMediaNegotiationBlobCaptionsSettings : PBCodable

{
    unsigned int _senderLanguages;
    _Bool _canDisplayCaptions;
    struct {
        unsigned int senderLanguages:1;
        unsigned int canDisplayCaptions:1;
    } _has;
}

@property (nonatomic) _Bool hasCanDisplayCaptions;
@property (nonatomic) _Bool canDisplayCaptions;
@property (nonatomic) _Bool hasSenderLanguages;
@property (nonatomic) unsigned int senderLanguages;

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
