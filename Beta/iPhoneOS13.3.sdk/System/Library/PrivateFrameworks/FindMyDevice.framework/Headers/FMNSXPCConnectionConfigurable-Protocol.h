/*
 Image: /System/Library/PrivateFrameworks/FindMyDevice.framework/FindMyDevice
 */

#import <FindMyDevice/Swift-Protocol.h>

@class NSString, NSXPCInterface;

@protocol FMNSXPCConnectionConfigurable <Swift>

@property (nonatomic, readonly) NSString *serviceName;
@property (nonatomic, readonly) unsigned long long options;
@property (nonatomic, readonly) NSXPCInterface *remoteInterface;
@property (nonatomic, readonly) NSXPCInterface *exportedInterface;
@property (nonatomic, readonly) _Bool machService;

@end
