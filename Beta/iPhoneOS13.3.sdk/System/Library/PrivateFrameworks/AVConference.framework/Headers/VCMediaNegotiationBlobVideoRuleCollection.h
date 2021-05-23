/*
 Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

#import <ProtocolBuffer/PBCodable.h>

__attribute__((visibility("hidden")))
@interface VCMediaNegotiationBlobVideoRuleCollection : PBCodable

{
    unsigned int _formats;
    int _operation;
    unsigned int _preferredFormat;
    int _transport;
    struct {
        unsigned int preferredFormat:1;
    } _has;
}

@property (nonatomic) int transport;
@property (nonatomic) int operation;
@property (nonatomic) unsigned int formats;
@property (nonatomic) _Bool hasPreferredFormat;
@property (nonatomic) unsigned int preferredFormat;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)transportAsString:(int)arg1;
- (int)StringAsTransport:(id)arg1;
- (id)operationAsString:(int)arg1;
- (int)StringAsOperation:(id)arg1;

@end
