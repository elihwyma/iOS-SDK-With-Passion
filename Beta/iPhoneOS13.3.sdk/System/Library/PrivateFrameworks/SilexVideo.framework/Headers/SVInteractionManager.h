/*
 Image: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
 */

#import <Foundation/NSObject.h>

@class NSMapTable, NSMutableSet, NSString;

@interface SVInteractionManager : NSObject

{
    NSMutableSet *_interactions;
    NSMapTable *_registeredHandlers;
    NSMapTable *_registeredObservers;
    NSMapTable *_interactionHandlers;
    NSMapTable *_interactionHandlerFactories;
    NSMapTable *_interactionObservers;
    NSMapTable *_interactionObserverFactories;
}

@property (nonatomic, readonly) NSMutableSet *interactions;
@property (nonatomic, readonly) NSMapTable *registeredHandlers;
@property (nonatomic, readonly) NSMapTable *registeredObservers;
@property (nonatomic, readonly) NSMapTable *interactionHandlers;
@property (nonatomic, readonly) NSMapTable *interactionHandlerFactories;
@property (nonatomic, readonly) NSMapTable *interactionObservers;
@property (nonatomic, readonly) NSMapTable *interactionObserverFactories;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)willTransitionToVideo:(id)arg1 withTransitionCoordinator:(id)arg2;
- (void)configureInteractionManagementForVideo:(id)arg1;
- (id)interactionHandlerForInteraction:(id)arg1 withVideo:(id)arg2;
- (id)interactionObserverForInteraction:(id)arg1 withVideo:(id)arg2;
- (void)configureInteraction:(id)arg1 withHandler:(id)arg2 observer:(id)arg3;
- (void)registerInteraction:(id)arg1 withInteractionHandler:(id)arg2;
- (void)registerInteraction:(id)arg1 withInteractionObserver:(id)arg2;
- (void)registerInteraction:(id)arg1 withInteractionHandlerFactory:(id)arg2;
- (void)registerInteraction:(id)arg1 withInteractionObserverFactory:(id)arg2;

@end
