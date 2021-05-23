/*
 Image: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
 */

#import <Foundation/NSObject.h>

@class BKSHIDEventDeferringEnvironment, BKSHIDEventDeferringToken, BKSHIDEventDisplay, BKSHIDEventObserver, NSHashTable, NSSet, NSString;

@protocol BSInvalidatable;

@interface BKSHIDEventDeliveryPolicyObserver : NSObject

{
    BKSHIDEventObserver *_observer;
    id <BSInvalidatable> _observingAssertion;
    struct os_unfair_lock_s _lock;
    BKSHIDEventDisplay *_lock_display;
    BKSHIDEventDeferringEnvironment *_lock_environment;
    BKSHIDEventDeferringToken *_lock_token;
    NSSet *_lock_resolutions;
    _Bool _lock_canReceiveEvents;
    NSHashTable *_lock_observers;
}

@property (copy, nonatomic) BKSHIDEventDisplay *display;
@property (copy, nonatomic) BKSHIDEventDeferringEnvironment *deferringEnvironment;
@property (copy, nonatomic) BKSHIDEventDeferringToken *deferringToken;
@property (nonatomic, readonly) _Bool canReceiveEvents;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)addObserver:(id)arg1;
- (void)removeObserver:(id)arg1;
- (_Bool)_lock_canReceiveEvents;
- (void)deferringResolutionsChanged;
- (id)_initWithObserver:(id)arg1;
- (id)_lock_updateStateWithBlock:(CDUnknownBlockType)arg1;

@end
