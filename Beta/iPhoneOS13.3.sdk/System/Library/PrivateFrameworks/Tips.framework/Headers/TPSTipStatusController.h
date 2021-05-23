/*
 Image: /System/Library/PrivateFrameworks/Tips.framework/Tips
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSMutableDictionary, NSUserDefaults;

@interface TPSTipStatusController : NSObject

{
    _Bool _isDirty;
    NSUserDefaults *_appGroupDefaults;
    NSMutableDictionary *_identifierToTipStatusMap;
}

@property (retain, nonatomic) NSMutableDictionary *identifierToTipStatusMap;
@property (retain, nonatomic) NSUserDefaults *appGroupDefaults;
@property (nonatomic, readonly) NSDictionary *tipStatusMap;

- (id)init;
- (id)debugDescription;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)displayTypeForIdentifier:(id)arg1;
- (_Bool)isPreconditionMatchedForIdentifier:(id)arg1;
- (_Bool)isDeliveryInfoLifetimeExpiredForIdentifier:(id)arg1;
- (_Bool)isHintMaxDurationExcceededForIdentifier:(id)arg1;
- (_Bool)isEligibilityTrackingNeedsRestartForIdentifier:(id)arg1;
- (id)lastDisplayContextForIdentifier:(id)arg1;
- (_Bool)isHintDisplayedForIdentifier:(id)arg1;
- (id)hintWouldHaveBeenDisplayedDateForIdentifier:(id)arg1;
- (id)dateForTriggerRestartTrackingForIdentifier:(id)arg1;
- (void)updateHintEligibleDateForIdentifier:(id)arg1 value:(_Bool)arg2;
- (void)updateDateForTriggerRestartTrackingForIdentifier:(id)arg1 date:(id)arg2;
- (id)reenrollHoldoutContent;
- (id)reenrollPreconditionChangeContent;
- (_Bool)isTriggerTrackingEligibleForIdentifier:(id)arg1;
- (_Bool)isDesiredOutcomeTrackingEligibleForIdentifier:(id)arg1;
- (id)hintEligibleDateForIdentifier:(id)arg1;
- (void)updateHintInelgibileForIdentifier:(id)arg1 value:(long long)arg2;
- (void)updateCacheData;
- (int)hintDisplayedCountForIdentifier:(id)arg1;
- (void)addDesiredOutcomePerformedDateForIdentifier:(id)arg1 date:(id)arg2;
- (id)contentViewedDateForIdentifier:(id)arg1;
- (_Bool)isHintInelgibileForIdentifier:(id)arg1;
- (void)updateContentViewedForIdentifier:(id)arg1 value:(_Bool)arg2;
- (void)addHintDisplayedForIdentifier:(id)arg1 context:(id)arg2;
- (void)updateHintWouldHaveBeenDisplayedDateForIdentifier:(id)arg1 value:(_Bool)arg2;
- (void)updateHintDismissedForIdentifier:(id)arg1 value:(_Bool)arg2;
- (id)firstHintDisplayDateForIdentifier:(id)arg1;
- (id)initWithAppGroupDefaults:(id)arg1;
- (void)removeCacheData;
- (id)statusForIdentifier:(id)arg1;
- (_Bool)isDesiredOutcomePerformedForIdentifier:(id)arg1;
- (_Bool)isHintDismissedForIdentifier:(id)arg1;
- (_Bool)isContentViewedForIdentifier:(id)arg1;
- (void)_reloadCacheData;
- (void)updatePreconditionMatchedForIdentifiers:(id)arg1 value:(_Bool)arg2;
- (id)_tipStatusForIdentifier:(id)arg1 addIfMissing:(_Bool)arg2;
- (_Bool)isPreconditionCheckEligibleForIdentifier:(id)arg1;
- (_Bool)isTriggerTrackingEligibleForIdentifier:(id)arg1 checkForPrecondition:(_Bool)arg2 checkForEligibleDate:(_Bool)arg3;
- (long long)hintInelgibileReasonForIdentifier:(id)arg1;
- (void)updatePreconditionMatchedForIdentifier:(id)arg1 value:(_Bool)arg2;
- (void)syncWithIdentifiers:(id)arg1;
- (void)removeAllTipStatus;
- (_Bool)isLockScreenHintDisplayEligibleForIdentifier:(id)arg1;
- (_Bool)isTipAppDisplayEligibleForIdentifier:(id)arg1;
- (_Bool)isHintInelgibileForReason:(long long)arg1 identifier:(id)arg2;
- (void)updateDisplayTypeForIdentifier:(id)arg1 value:(unsigned long long)arg2;
- (void)addHintNotDisplayedDueToFrequencyControlDateForIdentifier:(id)arg1;
- (id)hintNotDisplayedDueToFrequencyControlDatesForIdentifier:(id)arg1;
- (_Bool)isExpiredForIdentifier:(id)arg1;
- (void)updateExpiredForIdentifier:(id)arg1 value:(_Bool)arg2;

@end
