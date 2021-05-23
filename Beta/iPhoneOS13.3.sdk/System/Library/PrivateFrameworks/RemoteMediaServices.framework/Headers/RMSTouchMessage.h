/*
 Image: /System/Library/PrivateFrameworks/RemoteMediaServices.framework/RemoteMediaServices
 */

#import <ProtocolBuffer/PBCodable.h>

__attribute__((visibility("hidden")))
@interface RMSTouchMessage : PBCodable

{
    int _direction;
    unsigned int _repeatCount;
    int _sessionIdentifier;
    struct {
        unsigned int direction:1;
        unsigned int repeatCount:1;
        unsigned int sessionIdentifier:1;
    } _has;
}

@property (nonatomic) _Bool hasDirection;
@property (nonatomic) int direction;
@property (nonatomic) _Bool hasRepeatCount;
@property (nonatomic) unsigned int repeatCount;
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
