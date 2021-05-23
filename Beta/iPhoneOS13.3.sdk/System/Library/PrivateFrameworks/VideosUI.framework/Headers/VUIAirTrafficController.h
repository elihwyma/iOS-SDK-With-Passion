/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <Foundation/NSObject.h>

@class ATConnection, NSMutableSet, NSString;

@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface VUIAirTrafficController : NSObject

{
    ATConnection *_connection;
    NSObject<OS_dispatch_queue> *_connectionQueue;
    NSMutableSet *_observers;
}

@property (retain, nonatomic) ATConnection *connection;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *connectionQueue;
@property (retain, nonatomic) NSMutableSet *observers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)defaultController;

- (id)init;
- (void)addObserver:(id)arg1;
- (void)removeObserver:(id)arg1;
- (void)removeAllObservers;
- (void)connection:(id)arg1 updatedProgress:(id)arg2;
- (void)_onConnectionQueue_startObservingIfIdle;
- (void)_onConnectionQueue_stopObservingIfIdle;

@end
