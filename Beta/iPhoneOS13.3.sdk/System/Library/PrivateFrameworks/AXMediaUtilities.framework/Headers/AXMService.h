/*
 Image: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities
 */

#import <Foundation/NSObject.h>

@class NSString, NSXPCConnection;

@protocol OS_dispatch_queue;

@interface AXMService : NSObject

{
    NSObject<OS_dispatch_queue> *_xpcConnectionQueue;
    NSXPCConnection *_xpcConnection;
}

@property (retain, nonatomic) NSXPCConnection *xpcConnection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (id)_serviceProxy;
- (void)_destroyXPCConnection;
- (void)prewarmVisionEngineService;
- (void)visionEngine:(id)arg1 evaluateSource:(id)arg2 context:(id)arg3 options:(long long)arg4 result:(CDUnknownBlockType)arg5;

@end
