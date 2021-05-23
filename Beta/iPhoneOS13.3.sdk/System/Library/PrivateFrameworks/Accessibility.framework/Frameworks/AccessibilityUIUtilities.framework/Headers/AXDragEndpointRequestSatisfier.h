/*
 Image: /System/Library/PrivateFrameworks/Accessibility.framework/Frameworks/AccessibilityUIUtilities.framework/AccessibilityUIUtilities
 */

#import <Foundation/NSObject.h>

@class NSString, NSXPCConnection;

@protocol AXDragEndpointRequestSatisfierDelegate;

@interface AXDragEndpointRequestSatisfier : NSObject

{
    NSXPCConnection *_connection;
    id <AXDragEndpointRequestSatisfierDelegate> _delegate;
}

@property (weak, nonatomic) id <AXDragEndpointRequestSatisfierDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)initWithConnection:(id)arg1;
- (void)requestDragEndpoint:(CDUnknownBlockType)arg1;

@end
