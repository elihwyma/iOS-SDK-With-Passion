/*
 Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <Foundation/NSObject.h>

@class NSString, NSXPCListenerEndpoint;

@protocol NSXPCListenerDelegate, OS_dispatch_queue;

@interface NSXPCListener : NSObject

{
    void *_xconnection;
    NSObject<OS_dispatch_queue> *_userQueue;
    void *reserved0;
    id _delegate;
    NSString *_serviceName;
    unsigned long long _state;
    id _reserved1;
    id _reserved2;
}

@property (weak) id <NSXPCListenerDelegate> delegate;
@property (retain, readonly) NSXPCListenerEndpoint *endpoint;

+ (id)anonymousListener;
+ (id)_UUID;
+ (id)serviceListener;
+ (void)enableTransactions;

- (void)dealloc;
- (id)description;
- (void)invalidate;
- (id)_queue;
- (void)resume;
- (void)_setQueue:(id)arg1;
- (void)stop;
- (id)initWithMachServiceName:(id)arg1;
- (id)initWithServiceName:(id)arg1;
- (id)_xpcConnection;
- (void)suspend;
- (void)setOptions:(unsigned long long)arg1;
- (id)serviceName;
- (id)_initShared;

@end
