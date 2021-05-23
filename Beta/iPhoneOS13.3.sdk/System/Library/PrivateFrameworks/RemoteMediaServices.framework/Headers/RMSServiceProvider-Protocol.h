/*
 Image: /System/Library/PrivateFrameworks/RemoteMediaServices.framework/RemoteMediaServices
 */

#import <RemoteMediaServices/Swift-Protocol.h>

@protocol RMSServiceProviderDelegate;

@protocol RMSServiceProvider <Swift>

@property (weak, nonatomic) id <RMSServiceProviderDelegate> delegate;

- (unsigned short)endDiscovery;
- (unsigned short)beginDiscovery;

@end
