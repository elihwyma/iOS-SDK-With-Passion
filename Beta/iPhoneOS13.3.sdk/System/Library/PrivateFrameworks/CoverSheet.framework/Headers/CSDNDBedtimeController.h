/*
 Image: /System/Library/PrivateFrameworks/CoverSheet.framework/CoverSheet
 */

#import <Foundation/NSObject.h>

@class BSTimer, DNDStateService, NSHashTable, NSString;

@interface CSDNDBedtimeController : NSObject

{
    DNDStateService *_stateService;
    NSHashTable *_observers;
    BSTimer *_greetingGracePeriodTimer;
    _Bool _deactivated;
    _Bool _active;
    _Bool _shouldShowGreeting;
}

@property (nonatomic, getter=isActive) _Bool active;
@property (nonatomic) _Bool shouldShowGreeting;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)addObserver:(id)arg1;
- (void)removeObserver:(id)arg1;
- (void)stateService:(id)arg1 didReceiveDoNotDisturbStateUpdate:(id)arg2;
- (id)initWithStateService:(id)arg1;
- (void)_cleanUpGreetingGracePeriodTimer;

@end
