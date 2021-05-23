/*
 Image: /System/Library/PrivateFrameworks/RemoteMediaServices.framework/RemoteMediaServices
 */

#import <ProtocolBuffer/PBCodable.h>

__attribute__((visibility("hidden")))
@interface RMSPickAudioRouteMessage : PBCodable

{
    long long _macAddress;
    int _sessionIdentifier;
    struct {
        unsigned int macAddress:1;
        unsigned int sessionIdentifier:1;
    } _has;
}

@property (nonatomic) _Bool hasMacAddress;
@property (nonatomic) long long macAddress;
@property (nonatomic) _Bool hasSessionIdentifier;
@property (nonatomic) int sessionIdentifier;

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
