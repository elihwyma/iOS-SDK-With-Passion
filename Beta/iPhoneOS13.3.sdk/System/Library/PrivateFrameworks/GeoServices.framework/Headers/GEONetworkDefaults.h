/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h>

@class NSDictionary, NSMutableArray, NSString, geo_isolater;

@protocol _GEONetworkDefaultsServerProxy;

@interface GEONetworkDefaults : NSObject

{
    id <_GEONetworkDefaultsServerProxy> _serverProxy;
    NSMutableArray *_completionHandlers;
    NSDictionary *_networkDefaults;
    geo_isolater *_networkDefaultsIsolation;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sharedNetworkDefaults;
+ (_Bool)useLocalProxy;
+ (void)setUseLocalProxy:(_Bool)arg1;
+ (void)_ib_disableServerConnection;

- (id)init;
- (id)allKeys;
- (id)valueForKey:(id)arg1;
- (_Bool)_needsUpdate;
- (void)allKeysAndValues:(CDUnknownBlockType)arg1;
- (void)updateIfNecessary:(CDUnknownBlockType)arg1;
- (void)updateNetworkDefaults:(CDUnknownBlockType)arg1;
- (void)serverProxy:(id)arg1 networkDefaultsDidChange:(id)arg2;

@end
