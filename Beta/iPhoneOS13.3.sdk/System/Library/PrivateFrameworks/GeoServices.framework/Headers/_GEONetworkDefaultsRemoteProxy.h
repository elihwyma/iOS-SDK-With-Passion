/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h>

@class NSMutableArray, NSString, geo_isolater;

@protocol _GEONetworkDefaultsServerProxyDelegate;

__attribute__((visibility("hidden")))
@interface _GEONetworkDefaultsRemoteProxy : NSObject

{
    id <_GEONetworkDefaultsServerProxyDelegate> _delegate;
    geo_isolater *_isolation;
    NSMutableArray *_updateCompletionHandlers;
    int _configChangedToken;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (weak, nonatomic) id <_GEONetworkDefaultsServerProxyDelegate> delegate;

- (id)init;
- (void)dealloc;
- (void)updateNetworkDefaults:(CDUnknownBlockType)arg1;
- (void)_networkDefaultsDidChange;

@end
