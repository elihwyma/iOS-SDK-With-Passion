/*
 Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
 */

#import <RelevanceEngine/RESingleton.h>

@class NSString, NSXPCListener;

@interface REPipedLocationListener : RESingleton

{
    NSXPCListener *_listener;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (id)_init;
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;

@end
