/*
 Image: /System/Library/PrivateFrameworks/RemoteMediaServices.framework/RemoteMediaServices
 */

#import <RemoteMediaServices/Swift-Protocol.h>

@class NSArray;

@protocol RMSDiscoverySessionDelegate;

@protocol RMSDiscoverySession <Swift>

@property (weak, nonatomic) id <RMSDiscoverySessionDelegate> delegate;
@property (nonatomic) long long discoveryTypes;
@property (nonatomic, readonly) NSArray *availableServices;
@property (nonatomic, readonly, getter=isNetworkAvailable) _Bool networkAvailable;
@property (retain, nonatomic) NSArray *pairedNetworkNames;

- (unsigned short)endDiscovery;
- (unsigned short)beginDiscovery;

@end
