/*
 Image: /System/Library/PrivateFrameworks/RemoteMediaServices.framework/RemoteMediaServices
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface RMSService : NSObject

{
    int _port;
    NSString *_displayName;
    NSString *_networkName;
    NSString *_hostName;
    long long _serviceType;
    long long _serviceDiscoverySource;
    long long _serviceFlags;
    NSString *_homeSharingGroupKey;
    NSString *_uniqueIdentifier;
}

@property (retain, nonatomic) NSString *displayName;
@property (retain, nonatomic) NSString *networkName;
@property (retain, nonatomic) NSString *hostName;
@property (nonatomic) int port;
@property (nonatomic) long long serviceType;
@property (nonatomic) long long serviceDiscoverySource;
@property (nonatomic) long long serviceFlags;
@property (retain, nonatomic) NSString *homeSharingGroupKey;
@property (retain, nonatomic) NSString *uniqueIdentifier;

+ (id)servicesFromProtobufs:(id)arg1;
+ (id)protobufsFromServices:(id)arg1;

- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)initWithData:(id)arg1;
- (id)data;
- (id)protobuf;
- (_Bool)isEqualToService:(id)arg1;
- (id)initWithProtobuf:(id)arg1;
- (_Bool)isLegacyAppleTV;
- (_Bool)isMediaRemoteSupported;

@end
