/*
 Image: /System/Library/Frameworks/AVKit.framework/AVKit
 */

#import <NSObject.h>

@class NSMutableDictionary;

@interface AVObservationController : NSObject

{
    struct os_unfair_lock_s _unfairLock;
    NSMutableDictionary *_proxyObserversByTokens;
    NSMutableDictionary *_notificationObservers;
    NSMutableDictionary *_notificationCenters;
    id _owner;
}

- (void)dealloc;
- (id)initWithOwner:(id)arg1;
- (void)stopObserving:(id)arg1;
- (id)startObserving:(id)arg1 keyPaths:(id)arg2 includeInitialValue:(_Bool)arg3 includeChanges:(_Bool)arg4 observationHandler:(CDUnknownBlockType)arg5;
- (id)startObserving:(id)arg1 keyPath:(id)arg2 includeInitialValue:(_Bool)arg3 observationHandler:(CDUnknownBlockType)arg4;
- (id)startObserving:(id)arg1 keyPaths:(id)arg2 observationHandler:(CDUnknownBlockType)arg3;
- (id)startObserving:(id)arg1 keyPath:(id)arg2 observationHandler:(CDUnknownBlockType)arg3;
- (id)startObserving:(id)arg1 keyPaths:(id)arg2 includeInitialValue:(_Bool)arg3 observationHandler:(CDUnknownBlockType)arg4;
- (void)startObservingNotificationForName:(id)arg1 object:(id)arg2 notificationCenter:(id)arg3 observationHandler:(CDUnknownBlockType)arg4;
- (void)stopAllObservation;
- (void)_stopAllObservation;

@end
