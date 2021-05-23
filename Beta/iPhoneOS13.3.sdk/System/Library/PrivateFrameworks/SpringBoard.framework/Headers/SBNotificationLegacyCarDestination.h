/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

@class BSServiceConnectionEndpoint, DNDEventBehaviorResolutionService, NSMutableOrderedSet, NSString, SBStarkNotificationSceneComponentManager;

@protocol NCNotificationAlertDestinationDelegate, NCNotificationDestinationDelegate;

@interface SBNotificationLegacyCarDestination : NSObject

{
    NSMutableOrderedSet *_activeComponents;
    DNDEventBehaviorResolutionService *_dndEventBehaviorResolutionService;
    id <NCNotificationAlertDestinationDelegate> _delegate;
    SBStarkNotificationSceneComponentManager *_sceneComponentManager;
}

@property (retain, nonatomic) SBStarkNotificationSceneComponentManager *sceneComponentManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (weak, nonatomic) id <NCNotificationDestinationDelegate> delegate;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) BSServiceConnectionEndpoint *endpoint;

- (id)init;
- (void)postNotificationRequest:(id)arg1;
- (void)withdrawNotificationRequest:(id)arg1;
- (void)modifyNotificationRequest:(id)arg1;
- (_Bool)canReceiveNotificationRequest:(id)arg1;
- (void)agent:(id)arg1 executeAction:(id)arg2 forNotificationRequest:(id)arg3;
- (void)agent:(id)arg1 willPresentNotificationRequest:(id)arg2;
- (void)agent:(id)arg1 didDismissNotificationRequest:(id)arg2;

@end
