/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

@class NSMutableOrderedSet, NSString, SBStarkNotificationSceneComponent;

@protocol SBStarkNotificationsAgentDelegate, SBStarkNotificationsConfiguring;

@interface SBStarkNotificationSceneComponentManager : NSObject

{
    NSMutableOrderedSet *_activeComponents;
    id <SBStarkNotificationsAgentDelegate> _delegate;
}

@property (nonatomic, readonly, getter=isActive) _Bool active;
@property (nonatomic, readonly) SBStarkNotificationSceneComponent *activeComponent;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (weak, nonatomic) id <SBStarkNotificationsAgentDelegate> delegate;
@property (nonatomic, readonly) id <SBStarkNotificationsConfiguring> activeConfiguration;

- (id)init;
- (id)activeConfigurationForScreen:(id)arg1;
- (void)executeAction:(id)arg1 forNotificationRequest:(id)arg2;
- (void)willPresentNotificationRequest:(id)arg1;
- (void)didDismissNotificationRequest:(id)arg1;
- (void)noteComponentDidActivate:(id)arg1;
- (void)noteComponentDidDeactivate:(id)arg1;

@end
