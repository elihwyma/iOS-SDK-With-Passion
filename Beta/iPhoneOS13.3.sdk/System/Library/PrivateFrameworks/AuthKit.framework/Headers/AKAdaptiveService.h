/*
 Image: /System/Library/PrivateFrameworks/AuthKit.framework/AuthKit
 */

#import <Foundation/NSObject.h>

@class NSString, NSXPCInterface, NSXPCListener;

@interface AKAdaptiveService : NSObject

{
    NSXPCInterface *_exportedInterface;
    id _exportedObject;
    NSXPCListener *_listener;
    CDUnknownBlockType _interruptionHandler;
    CDUnknownBlockType _invalidationHandler;
}

@property (copy) CDUnknownBlockType interruptionHandler;
@property (copy) CDUnknownBlockType invalidationHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)resume;
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (id)listenerEndpoint;
- (id)_initWithInterface:(id)arg1 object:(id)arg2;
- (id)initWithInterface:(id)arg1 strongObject:(id)arg2;
- (id)initWithInterface:(id)arg1 weakObject:(id)arg2;

@end
