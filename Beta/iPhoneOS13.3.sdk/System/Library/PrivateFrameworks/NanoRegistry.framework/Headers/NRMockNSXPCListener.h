/*
 Image: /System/Library/PrivateFrameworks/NanoRegistry.framework/NanoRegistry
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol NRNSXPCListenerDelegate, OS_dispatch_queue;

@interface NRMockNSXPCListener : NSObject

{
    _Bool _suspended;
    _Bool _invalidated;
    id <NRNSXPCListenerDelegate> _delegate;
    NSString *_name;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (retain, nonatomic) id <NRNSXPCListenerDelegate> delegate;

- (void)dealloc;
- (void)invalidate;
- (void)resume;
- (id)initWithMachServiceName:(id)arg1;
- (void)suspend;
- (id)serverConnectionWithClientConnection:(id)arg1;

@end
