/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSMapTable, NSSet, NSString, NSXPCListener;

@protocol OS_dispatch_queue, UIDraggingSystemMonitorDelegate;

@interface UIDraggingSystemMonitor : NSObject

{
    NSXPCListener *_systemListener;
    NSObject<OS_dispatch_queue> *_xpcQueue;
    NSMapTable *_sessionsBySessionInfo;
    id <UIDraggingSystemMonitorDelegate> _delegate;
}

@property (nonatomic, readonly) NSSet *sessions;
@property (weak, nonatomic) id <UIDraggingSystemMonitorDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)new;
+ (id)sharedInstance;

- (id)init;
- (id)_init;
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (oneway void)dragDidBeginWithSystemSession:(id)arg1 info:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (oneway void)dragDidEndWithSystemSession:(id)arg1;
- (_Bool)xpcQueue_shouldAcceptNewConnection:(id)arg1;
- (void)xpcQueue_acceptNewConnection:(id)arg1;
- (id)sessionForDropSession:(id)arg1;

@end
