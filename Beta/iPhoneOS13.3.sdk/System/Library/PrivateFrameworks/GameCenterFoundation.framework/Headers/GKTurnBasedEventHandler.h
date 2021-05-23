/*
 Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
 */

#import <Foundation/NSObject.h>

@protocol GKTurnBasedEventHandlerDelegate, OS_dispatch_queue;

@interface GKTurnBasedEventHandler : NSObject

{
    _Bool _didBecomeActive;
    NSObject<GKTurnBasedEventHandlerDelegate> *_delegateWeak;
    NSObject<OS_dispatch_queue> *_lookForEventQueue;
}

@property (nonatomic) _Bool didBecomeActive;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *lookForEventQueue;
@property (nonatomic) NSObject<GKTurnBasedEventHandlerDelegate> *delegate;

+ (id)sharedTurnBasedEventHandler;

- (id)init;
- (void)dealloc;
- (void)lookForEvent;
- (void)callTurnEventForMatch:(id)arg1 userTapped:(_Bool)arg2;

@end
