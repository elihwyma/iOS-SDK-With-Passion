/*
 Image: /System/Library/PrivateFrameworks/Accessibility.framework/Frameworks/AccessibilityUIUtilities.framework/AccessibilityUIUtilities
 */

#import <Foundation/NSObject.h>

@class NSMutableSet, NSString, NSXPCListener;

@protocol AXDragEndpointVendorDelegate;

@interface AXDragEndpointVendor : NSObject

{
    NSXPCListener *_listener;
    NSMutableSet *_activeConnections;
    id <AXDragEndpointVendorDelegate> _delegate;
}

@property (weak, nonatomic) id <AXDragEndpointVendorDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)resume;
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (id)initWithXPCListener:(id)arg1;
- (void)endpointRequestSatisfierDidDisconnect:(id)arg1;
- (id)endpointForConnection:(id)arg1 forEndpointRequestSatisfier:(id)arg2;

@end
