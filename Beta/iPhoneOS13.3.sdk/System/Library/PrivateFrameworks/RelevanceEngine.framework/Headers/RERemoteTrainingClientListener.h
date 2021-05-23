/*
 Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
 */

#import <Foundation/NSObject.h>

@class NSMutableSet, NSString, NSXPCListener;

@protocol OS_dispatch_queue, RERemoteTrainingClientListenerDelegate;

@interface RERemoteTrainingClientListener : NSObject

{
    NSMutableSet *_clients;
    NSXPCListener *_listener;
    NSObject<OS_dispatch_queue> *_queue;
    id <RERemoteTrainingClientListenerDelegate> _delegate;
}

@property (weak, nonatomic) id <RERemoteTrainingClientListenerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;

@end
