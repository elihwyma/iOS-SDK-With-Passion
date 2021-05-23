/*
 Image: /System/Library/PrivateFrameworks/RemoteMediaServices.framework/RemoteMediaServices
 */

#import <ProtocolBuffer/PBCodable.h>

@class RMSControlInterfaceMessage;

__attribute__((visibility("hidden")))
@interface RMSConnectToServiceResponseMessage : PBCodable

{
    RMSControlInterfaceMessage *_controlInterface;
    int _responseCode;
    int _responseData;
    int _sessionIdentifier;
    struct {
        unsigned int responseCode:1;
        unsigned int responseData:1;
        unsigned int sessionIdentifier:1;
    } _has;
}

@property (nonatomic) _Bool hasResponseCode;
@property (nonatomic) int responseCode;
@property (nonatomic) _Bool hasSessionIdentifier;
@property (nonatomic) int sessionIdentifier;
@property (nonatomic, readonly) _Bool hasControlInterface;
@property (retain, nonatomic) RMSControlInterfaceMessage *controlInterface;
@property (nonatomic) _Bool hasResponseData;
@property (nonatomic) int responseData;

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
