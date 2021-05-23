/*
 Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

#import <Foundation/NSObject.h>

@class AFNotifyObserver, AFSiriActivationConnection, NSMutableDictionary, NSString;

@protocol OS_dispatch_queue;

@interface AFSiriActivationHandlerFrontendProcess : NSObject

{
    NSObject<OS_dispatch_queue> *_queue;
    AFSiriActivationConnection *_connection;
    AFNotifyObserver *_clientStateObserver;
    NSMutableDictionary *_clientStateTransitionHandlersByTimestamp;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (id)initWithConnection:(id)arg1;
- (_Bool)handleContext:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)notifyObserver:(id)arg1 didChangeStateFrom:(unsigned long long)arg2 to:(unsigned long long)arg3;
- (void)_waitUntilListeningForContext:(id)arg1 timeoutInterval:(double)arg2 completion:(CDUnknownBlockType)arg3;

@end
