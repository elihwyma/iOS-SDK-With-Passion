/*
 Image: /System/Library/PrivateFrameworks/AudioToolboxCore.framework/AudioToolboxCore
 */

#import <Foundation/NSObject.h>

@class NSXPCConnection;

@protocol AUPBServing;

__attribute__((visibility("hidden")))
@interface RemoteAUPBServer : NSObject

{
    NSXPCConnection *xpcConnection;
    id <AUPBServing> proxyInterface;
    struct OpaqueAUPBServer *ref;
    struct vector<NSObject<OS_dispatch_semaphore>*, std::__1::allocator<NSObject<OS_dispatch_semaphore>*>> replySemas;
}

@property (retain, nonatomic) NSXPCConnection *xpcConnection;
@property (retain, nonatomic) id <AUPBServing> proxyInterface;
@property (nonatomic) struct OpaqueAUPBServer *ref;

- (void)dealloc;
- (id)description;
- (id).cxx_construct;
- (void)addSema:(id)arg1;
- (void)removeSema:(id)arg1;
- (void)signalAllSemaphores;

@end
