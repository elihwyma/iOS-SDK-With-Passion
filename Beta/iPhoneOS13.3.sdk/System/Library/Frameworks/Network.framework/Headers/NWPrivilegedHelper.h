/*
 Image: /System/Library/Frameworks/Network.framework/Network
 */

#import <Foundation/NSObject.h>

@class NSMutableArray, NSMutableDictionary, NSMutableSet;

@protocol OS_dispatch_queue, OS_xpc_object;

__attribute__((visibility("hidden")))
@interface NWPrivilegedHelper : NSObject

{
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_xpc_object> *_listener;
    NSMutableDictionary *_handlers;
    NSMutableSet *_allKnownEntitlementSet;
    NSMutableArray *_allKnownEntitlementGroup;
}

@property (retain) NSObject<OS_dispatch_queue> *queue;
@property (retain) NSObject<OS_xpc_object> *listener;
@property (retain) NSMutableDictionary *handlers;
@property (retain) NSMutableSet *allKnownEntitlementSet;
@property (retain) NSMutableArray *allKnownEntitlementGroup;

- (id)initWithQueue:(id)arg1;
- (void)registerHandlerFunction:(CDUnknownFunctionPointerType)arg1 type:(int)arg2 allowedEntitlementGroup:(id)arg3;
- (void)registerHelperFunctions;
- (_Bool)startXPCListener;
- (void)startThrottlePolicyEventListener;
- (void)handleRequest:(id)arg1 onConnection:(id)arg2;

@end
