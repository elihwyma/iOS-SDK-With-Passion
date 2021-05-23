/*
 Image: /System/Library/Frameworks/Network.framework/Network
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSData, NWPBAddressEndpoint, NWPBHostEndpoint, NWPBInterface, NWPBServiceEndpoint;

@interface NWPBEndpoint : PBCodable

{
    NWPBAddressEndpoint *_address;
    NWPBHostEndpoint *_host;
    NWPBInterface *_interface;
    NWPBServiceEndpoint *_service;
    NSData *_txtRecord;
}

@property (nonatomic, readonly) _Bool hasAddress;
@property (retain, nonatomic) NWPBAddressEndpoint *address;
@property (nonatomic, readonly) _Bool hasHost;
@property (retain, nonatomic) NWPBHostEndpoint *host;
@property (nonatomic, readonly) _Bool hasService;
@property (retain, nonatomic) NWPBServiceEndpoint *service;
@property (nonatomic, readonly) _Bool hasInterface;
@property (retain, nonatomic) NWPBInterface *interface;
@property (nonatomic, readonly) _Bool hasTxtRecord;
@property (retain, nonatomic) NSData *txtRecord;

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
