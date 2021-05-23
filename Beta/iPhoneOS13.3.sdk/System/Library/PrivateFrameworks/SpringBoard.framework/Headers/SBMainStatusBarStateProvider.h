/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <SpringBoard/SBStatusBarStateProvider.h>

@class NSCountedSet, NSHashTable, NSString;

@interface SBMainStatusBarStateProvider : SBStatusBarStateProvider

{
    _Bool _overridePercent;
    _Bool _killActivity;
    _Bool _itemIsDisabled[42];
    _Bool _itemWasDisabled[42];
    NSCountedSet *_itemDisabledRequests[42];
    NSCountedSet *_dataUpdateAnimationsDisabledRequests;
    _Bool _timeEnabled;
    _Bool _statusBarTimeRequiresUpdate;
    _Bool _timeCloaked;
    _Bool _allButBatteryCloaked;
    _Bool _telephonyAndBluetoothCloaked;
    NSHashTable *_contentAssertions;
}

@property (retain, nonatomic) NSHashTable *contentAssertions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sharedInstance;

- (id)init;
- (void)dealloc;
- (void)statusBarStateProvider:(id)arg1 didPostStatusBarData:(const CDStruct_0942cde0 *)arg2 withActions:(int)arg3;
- (void)disableStatusBarItem:(int)arg1 requestor:(id)arg2;
- (void)setTimeCloaked:(_Bool)arg1;
- (void)forceUpdateLocalStatusBarData;
- (void)updateTimeEnabledImmediately:(_Bool)arg1;
- (void)updateTimeEnabled;
- (void)setTelephonyAndBluetoothItemsCloaked:(_Bool)arg1;
- (void)enableStatusBarItem:(int)arg1 requestor:(id)arg2;
- (void)statusBarStateAggregatorDidRequestImmediateUpdates:(id)arg1;
- (void)statusBarStateAggregatorDidStopRequestingImmediateUpdates:(id)arg1;
- (void)_updateDisabledItems;
- (_Bool)contentAssertionsWantTimeEnabledAnimated:(inout _Bool *)arg1 duration:(inout double *)arg2;
- (void)_enableTime:(_Bool)arg1 crossfade:(_Bool)arg2 crossfadeDuration:(double)arg3 immediately:(_Bool)arg4;
- (void)enableTime:(_Bool)arg1 crossfade:(_Bool)arg2 crossfadeDuration:(double)arg3;
- (id)_identifierForStateAggregator:(id)arg1;
- (void)disableDataUpdateAnimationsForRequestor:(id)arg1;
- (void)stopDisablingDataUpdateAnimationsForRequestor:(id)arg1;
- (void)acquireContentAssertion:(id)arg1;
- (void)relinquishContentAssertion:(id)arg1;
- (void)didUpdateContentAssertion:(id)arg1;
- (_Bool)isTimeEnabled;
- (void)enableTime:(_Bool)arg1;
- (void)setAllItemsExceptBatteryCloaked:(_Bool)arg1;
- (_Bool)_shouldPostForVisitedItem:(int)arg1 withUpdates:(_Bool)arg2 toAggregatorData:(const CDStruct_0942cde0 *)arg3 lastPost:(const CDStruct_0942cde0 *)arg4;
- (void)_composePostDataFromAggregatorData:(CDStruct_0942cde0 *)arg1;

@end
