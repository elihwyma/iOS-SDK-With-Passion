/*
 Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface CKCDPCodeServiceRequestServiceClientConfig : PBCodable

{
    NSString *_host;
    unsigned int _port;
    _Bool _useTls;
    struct {
        unsigned int port:1;
        unsigned int useTls:1;
    } _has;
}

@property (nonatomic, readonly) _Bool hasHost;
@property (retain, nonatomic) NSString *host;
@property (nonatomic) _Bool hasPort;
@property (nonatomic) unsigned int port;
@property (nonatomic) _Bool hasUseTls;
@property (nonatomic) _Bool useTls;

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
