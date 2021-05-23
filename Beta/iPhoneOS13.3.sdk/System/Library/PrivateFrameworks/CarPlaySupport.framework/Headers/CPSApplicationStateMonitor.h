/*
 Image: /System/Library/PrivateFrameworks/CarPlaySupport.framework/CarPlaySupport
 */

#import <Foundation/NSObject.h>

@class CARObserverHashTable, NSString, UIWindowScene;

@protocol OS_dispatch_queue;

@interface CPSApplicationStateMonitor : NSObject

{
    NSObject<OS_dispatch_queue> *_stateObserverQueue;
    NSString *_bundleIdentifier;
    CARObserverHashTable *_stateObservers;
    UIWindowScene *_windowScene;
}

@property (retain, nonatomic) CARObserverHashTable *stateObservers;
@property (weak, nonatomic) UIWindowScene *windowScene;
@property (copy, nonatomic, readonly) NSString *bundleIdentifier;
@property (nonatomic, readonly, getter=isApplicationActive) _Bool applicationActive;

- (void)dealloc;
- (id)initWithWindowScene:(id)arg1;
- (void)_sceneWillEnterForeground:(id)arg1;
- (void)_sceneDidEnterBackground:(id)arg1;
- (void)addApplicationStateObserver:(id)arg1;
- (void)removeApplicationStateObserver:(id)arg1;
- (void)_notifyObserversForeground:(_Bool)arg1;

@end
