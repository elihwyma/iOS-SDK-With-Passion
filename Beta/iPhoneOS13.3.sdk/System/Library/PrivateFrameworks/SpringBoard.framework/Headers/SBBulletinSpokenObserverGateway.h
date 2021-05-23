/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

@class BBObserver, DNDEventBehaviorResolutionService, NSString;

@interface SBBulletinSpokenObserverGateway : NSObject

{
    BBObserver *_bbObserver;
    DNDEventBehaviorResolutionService *_dndEventBehaviorResolutionService;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sharedInstance;

- (id)init;
- (void)hasEligibleSetupChanged:(_Bool)arg1;
- (void)requestCanBeHandledChanged:(_Bool)arg1;
- (void)observer:(id)arg1 addBulletin:(id)arg2 forFeed:(unsigned long long)arg3 playLightsAndSirens:(_Bool)arg4 withReply:(CDUnknownBlockType)arg5;
- (id)_notificationFromBulletin:(id)arg1;

@end
