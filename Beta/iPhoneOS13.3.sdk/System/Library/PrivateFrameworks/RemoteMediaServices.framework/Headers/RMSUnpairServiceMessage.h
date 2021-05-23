/*
 Image: /System/Library/PrivateFrameworks/RemoteMediaServices.framework/RemoteMediaServices
 */

#import <ProtocolBuffer/PBCodable.h>

@class RMSServiceMessage;

__attribute__((visibility("hidden")))
@interface RMSUnpairServiceMessage : PBCodable

{
    RMSServiceMessage *_service;
}

@property (nonatomic, readonly) _Bool hasService;
@property (retain, nonatomic) RMSServiceMessage *service;

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
