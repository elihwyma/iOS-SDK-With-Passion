/*
 Image: /System/Library/PrivateFrameworks/RemoteMediaServices.framework/RemoteMediaServices
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface RMSServiceMessage : PBCodable

{
    NSString *_displayName;
    NSString *_homeSharingGroupKey;
    NSString *_hostName;
    NSString *_networkName;
    int _port;
    int _serviceDiscoverySource;
    int _serviceFlags;
    int _serviceType;
    NSString *_uniqueIdentifier;
    struct {
        unsigned int port:1;
        unsigned int serviceDiscoverySource:1;
        unsigned int serviceFlags:1;
        unsigned int serviceType:1;
    } _has;
}

@property (nonatomic, readonly) _Bool hasDisplayName;
@property (retain, nonatomic) NSString *displayName;
@property (nonatomic, readonly) _Bool hasNetworkName;
@property (retain, nonatomic) NSString *networkName;
@property (nonatomic, readonly) _Bool hasHostName;
@property (retain, nonatomic) NSString *hostName;
@property (nonatomic) _Bool hasPort;
@property (nonatomic) int port;
@property (nonatomic) _Bool hasServiceType;
@property (nonatomic) int serviceType;
@property (nonatomic) _Bool hasServiceDiscoverySource;
@property (nonatomic) int serviceDiscoverySource;
@property (nonatomic) _Bool hasServiceFlags;
@property (nonatomic) int serviceFlags;
@property (nonatomic, readonly) _Bool hasHomeSharingGroupKey;
@property (retain, nonatomic) NSString *homeSharingGroupKey;
@property (nonatomic, readonly) _Bool hasUniqueIdentifier;
@property (retain, nonatomic) NSString *uniqueIdentifier;

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
