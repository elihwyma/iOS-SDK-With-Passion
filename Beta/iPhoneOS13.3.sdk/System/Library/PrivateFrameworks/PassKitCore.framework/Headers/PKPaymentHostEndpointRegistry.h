/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <NSObject.h>

@class NSMutableDictionary;

@protocol OS_dispatch_queue;

@interface PKPaymentHostEndpointRegistry : NSObject

{
    NSObject<OS_dispatch_queue> *_registrySerialQueue;
    NSMutableDictionary *_hostIdentifierToEndpointMap;
    NSMutableDictionary *_processIdentifierToHostIdentifiersMap;
}

- (id)init;
- (id)debugDescription;
- (void)addListenerEndpoint:(id)arg1 forHostIdentifier:(id)arg2 processIdentifier:(int)arg3;
- (id)takeListenerEndpointForHostIdentifier:(id)arg1;
- (void)removeListenerEndpointsForProcessIdentifier:(int)arg1;

@end
