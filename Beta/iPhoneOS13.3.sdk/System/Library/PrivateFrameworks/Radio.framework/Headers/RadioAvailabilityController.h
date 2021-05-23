/*
 Image: /System/Library/PrivateFrameworks/Radio.framework/Radio
 */

#import <Foundation/NSObject.h>

@class NSNumber, NSString;

@protocol OS_dispatch_queue;

@interface RadioAvailabilityController : NSObject

{
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSObject<OS_dispatch_queue> *_calloutSerialQueue;
    NSObject<OS_dispatch_queue> *_restrictionLoadQueue;
    _Bool _hasSuccessfullyLoadedURLBag;
    _Bool _isRadioAvailable;
    NSNumber *_isRadioAvailableFromBag;
    _Bool _isRadioRestricted;
    NSNumber *_lastActiveAccountUniqueIdentifier;
}

@property (nonatomic, readonly) _Bool hasLoadedRadioAvailability;
@property (nonatomic, readonly, getter=isRadioAvailable) _Bool radioAvailable;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)profileConnectionDidReceiveRestrictionChangedNotification:(id)arg1 userInfo:(id)arg2;
- (void)profileConnectionDidReceiveEffectiveSettingsChangedNotification:(id)arg1 userInfo:(id)arg2;
- (void)getRadioAvailabilityWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)environmentMonitorDidChangeNetworkReachability:(id)arg1;
- (id)_currentStoreFrontIdentifier;
- (id)_userDefaultsDomain;
- (_Bool)_calculateRadioRestricted;
- (void)_updateRadioAvailabilityAllowingNotifications:(_Bool)arg1;
- (void)_reloadRadioBagAvailabilityWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_reloadRadioRestriction;
- (void)_currentStoreFrontIdentifierWithCompletion:(CDUnknownBlockType)arg1;
- (void)_updateRadioAvailabilityWithStoreBagDictionary:(id)arg1 error:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;

@end
