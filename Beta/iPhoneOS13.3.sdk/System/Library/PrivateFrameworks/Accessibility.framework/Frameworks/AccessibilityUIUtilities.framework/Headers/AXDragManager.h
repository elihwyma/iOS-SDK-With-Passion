/*
 Image: /System/Library/PrivateFrameworks/Accessibility.framework/Frameworks/AccessibilityUIUtilities.framework/AccessibilityUIUtilities
 */

#import <Foundation/NSObject.h>

@class AXDispatchTimer, AXDragEndpointVendor, AXDragSession, NSMutableArray, NSString, NSXPCListener;

@protocol AXDragManagerDelegate, OS_dispatch_queue;

@interface AXDragManager : NSObject

{
    AXDragEndpointVendor *_vendor;
    NSXPCListener *_endpointListener;
    NSMutableArray *_activeSessions;
    NSObject<OS_dispatch_queue> *_dragStateQueue;
    int _pidForDrag;
    id <AXDragManagerDelegate> _delegate;
    NSString *_machServiceName;
    CDUnknownBlockType _dragStartCompletionHandler;
    AXDispatchTimer *_dragStartTimer;
    AXDragSession *_dragSession;
}

@property (nonatomic) int pidForDrag;
@property (copy, nonatomic) CDUnknownBlockType dragStartCompletionHandler;
@property (retain, nonatomic) AXDispatchTimer *dragStartTimer;
@property (retain, nonatomic) AXDragSession *dragSession;
@property (weak, nonatomic) id <AXDragManagerDelegate> delegate;
@property (nonatomic, readonly) _Bool isDragActive;
@property (nonatomic, readonly) NSString *machServiceName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (id)initWithMachServiceName:(id)arg1;
- (void)moveToPoint:(struct CGPoint)arg1;
- (void)cancelDrag;
- (_Bool)_shouldAllowEndpointVendForRequestingConnection:(id)arg1;
- (void)drop;
- (id)endpointForRequestingConnection:(id)arg1 fromEndpointVendor:(id)arg2;
- (void)sessionWasTerminated:(id)arg1;
- (void)dragSessionEnded:(id)arg1 withOperation:(unsigned long long)arg2;
- (void)dragSessionChanged:(id)arg1 toStatus:(id)arg2;
- (void)dragSessionWasTerminated:(id)arg1;
- (void)dragSession:(id)arg1 movedToPoint:(struct CGPoint)arg2 byRequestor:(id)arg3;
- (void)waitForDragStartFromPid:(int)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)moveToAndDropAtPoint:(struct CGPoint)arg1;

@end
