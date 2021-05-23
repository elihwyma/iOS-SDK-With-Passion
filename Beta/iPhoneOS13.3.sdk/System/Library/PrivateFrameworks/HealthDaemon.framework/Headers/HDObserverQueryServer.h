/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <HealthDaemon/HDQueryServer.h>

@class NSNumber, NSString;

@interface HDObserverQueryServer : HDQueryServer

{
    _Bool _deliverOnUnlock;
    _Bool _observeUnfrozenSeries;
    NSNumber *_anchor;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)requiredEntitlements;
+ (Class)queryClass;
+ (_Bool)supportsAnchorBasedAuthorization;

- (void)samplesAdded:(id)arg1 anchor:(id)arg2;
- (void)samplesOfTypesWereRemoved:(id)arg1 anchor:(id)arg2;
- (void)database:(id)arg1 protectedDataDidBecomeAvailable:(_Bool)arg2;
- (id)initWithUUID:(id)arg1 configuration:(id)arg2 client:(id)arg3 delegate:(id)arg4;
- (void)_queue_start;
- (void)_queue_stop;
- (_Bool)_shouldListenForUpdates;
- (_Bool)_shouldExecuteWhenProtectedDataIsUnavailable;
- (CDUnknownBlockType)transactionalQuantityInsertHandlerForProfile:(id)arg1 journaled:(_Bool)arg2 count:(long long)arg3;
- (void)profile:(id)arg1 didDiscardSeriesOfType:(id)arg2;
- (void)_deliverDataWasUpdatedWithAnchor:(id)arg1;
- (void)profile:(id)arg1 didInsertQuantity:(id)arg2 type:(id)arg3 dateInterval:(id)arg4 series:(id)arg5 anchor:(id)arg6;

@end
