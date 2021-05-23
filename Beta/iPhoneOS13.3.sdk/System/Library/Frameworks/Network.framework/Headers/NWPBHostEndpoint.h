/*
 Image: /System/Library/Frameworks/Network.framework/Network
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSString;

@interface NWPBHostEndpoint : PBCodable

{
    NSString *_hostname;
    NSString *_port;
}

@property (nonatomic, readonly) _Bool hasHostname;
@property (retain, nonatomic) NSString *hostname;
@property (nonatomic, readonly) _Bool hasPort;
@property (retain, nonatomic) NSString *port;

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
