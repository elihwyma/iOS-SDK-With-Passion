/*
 Image: /System/Library/PrivateFrameworks/RemoteMediaServices.framework/RemoteMediaServices
 */

#import <Foundation/NSObject.h>

@class NSMapTable, NSString;

@protocol RMSServiceProviderDelegate;

__attribute__((visibility("hidden")))
@interface RMSMediaRemoteServiceProvider : NSObject

{
    void *_televisionController;
    NSMapTable *_services;
    id <RMSServiceProviderDelegate> _delegate;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (weak, nonatomic) id <RMSServiceProviderDelegate> delegate;

- (id)init;
- (void)dealloc;
- (void)endDiscovery;
- (void)beginDiscovery;
- (void)_didDiscoverTelevision:(void *)arg1;
- (void)_didRemoveTelevision:(void *)arg1;
- (id)_serviceWithTelevision:(void *)arg1;

@end
