/*
 Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
 */

#import <Foundation/NSObject.h>

@class NSHashTable, NSMutableArray;

@interface GKEventEmitter : NSObject

{
    NSHashTable *_listeners;
    NSMutableArray *_supportedProtocols;
    _Bool _shouldQueue;
    NSMutableArray *_queuedEvents;
}

@property (retain, nonatomic) NSHashTable *listeners;
@property (retain, nonatomic) NSMutableArray *supportedProtocols;
@property (nonatomic) _Bool shouldQueue;
@property (retain, nonatomic) NSMutableArray *queuedEvents;

+ (id)eventEmitterForProtocols:(id)arg1;
+ (id)eventEmitterForProtocols:(id)arg1 shouldQueue:(_Bool)arg2;

- (void)dealloc;
- (id)methodSignatureForSelector:(SEL)arg1;
- (void)forwardInvocation:(id)arg1;
- (void)registerListener:(id)arg1;
- (_Bool)listenerRegisteredForSelector:(SEL)arg1;
- (void)unregisterListener:(id)arg1;
- (id)methodSignatureForProtocol:(id)arg1 selector:(SEL)arg2;
- (void)unregisterAllListeners;
- (id)initWithSupportedProtocols:(id)arg1 shouldQueue:(_Bool)arg2;
- (void)dispatchQueuedEventsToListener:(id)arg1;
- (id)invocationForProtocol:(id)arg1 selector:(SEL)arg2;

@end
