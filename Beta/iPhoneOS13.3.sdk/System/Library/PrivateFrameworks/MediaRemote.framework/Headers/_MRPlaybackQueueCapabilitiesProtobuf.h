/*
 Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

#import <ProtocolBuffer/PBCodable.h>

@interface _MRPlaybackQueueCapabilitiesProtobuf : PBCodable

{
    _Bool _requestByIdentifiers;
    _Bool _requestByRange;
    _Bool _requestByRequest;
    struct {
        unsigned int requestByIdentifiers:1;
        unsigned int requestByRange:1;
        unsigned int requestByRequest:1;
    } _has;
}

@property (nonatomic) _Bool hasRequestByRange;
@property (nonatomic) _Bool requestByRange;
@property (nonatomic) _Bool hasRequestByIdentifiers;
@property (nonatomic) _Bool requestByIdentifiers;
@property (nonatomic) _Bool hasRequestByRequest;
@property (nonatomic) _Bool requestByRequest;

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
