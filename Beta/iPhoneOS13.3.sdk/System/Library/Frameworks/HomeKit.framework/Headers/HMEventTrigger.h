/*
 Image: /System/Library/Frameworks/HomeKit.framework/HomeKit
 */

#import <HomeKit/HMTrigger.h>

#import <HomeKit/Swift-Protocol.h>

@class HMMutableArray, NSArray, NSPredicate;

@interface HMEventTrigger : HMTrigger <Swift>

{
    NSArray *_recurrences;
    _Bool _executeOnce;
    NSPredicate *_internalPredicate;
    unsigned long long _activationState;
    HMMutableArray *_currentEvents;
}

@property (copy, nonatomic) NSPredicate *internalPredicate;
@property (retain, nonatomic) HMMutableArray *currentEvents;
@property (copy, nonatomic, readonly) NSArray *allEvents;
@property (nonatomic) unsigned long long activationState;
@property (copy, nonatomic, readonly) NSArray *events;
@property (copy, nonatomic, readonly) NSArray *endEvents;
@property (copy, nonatomic, readonly) NSPredicate *predicate;
@property (copy, nonatomic, readonly) NSArray *recurrences;
@property (nonatomic, readonly) _Bool executeOnce;
@property (nonatomic, readonly) unsigned long long triggerActivationState;

+ (_Bool)supportsSecureCoding;
+ (id)createWithDictionary:(id)arg1 home:(id)arg2;
+ (_Bool)__validateRecurrences:(id)arg1;
+ (id)_predicateForEvaluatingTriggerOccurringBeforeSignificantEvent:(id)arg1 applyingOffset:(id)arg2;
+ (id)negateOffset:(id)arg1;
+ (id)_predicateForEvaluatingTriggerOccurringAfterSignificantEvent:(id)arg1 applyingOffset:(id)arg2;
+ (id)predicateForEvaluatingTriggerOccurringAfterSignificantEvent:(id)arg1;
+ (id)predicateForEvaluatingTriggerOccurringBeforeSignificantEvent:(id)arg1;
+ (id)predicateForEvaluatingTriggerOccurringAfterDateWithComponents:(id)arg1;
+ (id)predicateForEvaluatingTriggerOccurringBeforeDateWithComponents:(id)arg1;
+ (id)predicateForEvaluatingTriggerOccurringOnDateWithComponents:(id)arg1;
+ (id)predicateForEvaluatingTriggerWithCharacteristic:(id)arg1 relatedBy:(unsigned long long)arg2 toValue:(id)arg3;
+ (id)_predicateForEvaluatingTriggerWithCharacteristic:(id)arg1 value:(id)arg2 valueFormatString:(id)arg3;
+ (id)predicateForEvaluatingTriggerOccurringBeforeSignificantEvent:(id)arg1 applyingOffset:(id)arg2;
+ (id)predicateForEvaluatingTriggerOccurringAfterSignificantEvent:(id)arg1 applyingOffset:(id)arg2;
+ (id)predicateForEvaluatingTriggerOccurringBetweenSignificantEvent:(id)arg1 secondSignificantEvent:(id)arg2;
+ (id)predicateForEvaluatingTriggerWithPresence:(id)arg1;
+ (id)predicateForEvaluatingTriggerOccurringBetweenDateWithComponents:(id)arg1 secondDateWithComponents:(id)arg2;
+ (id)predicateForEvaluatingTriggerWithCharacteristic:(id)arg1 matchingValue:(id)arg2;
+ (_Bool)isActionAffectedByEndEvents:(id)arg1;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setRecurrences:(id)arg1;
- (id)_serializeForAdd;
- (_Bool)_mergeWithNewObject:(id)arg1 operations:(id)arg2;
- (void)_registerNotificationHandlers;
- (void)__configureWithContext:(id)arg1 home:(id)arg2;
- (_Bool)compatibleWithApp;
- (id)initInternalWithName:(id)arg1 events:(id)arg2 endEvents:(id)arg3 recurrences:(id)arg4 predicate:(id)arg5;
- (id)initWithName:(id)arg1 events:(id)arg2 endEvents:(id)arg3 recurrences:(id)arg4 predicate:(id)arg5;
- (void)_addEvent:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_removeEvent:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_updateEvents:(id)arg1 endEvent:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (_Bool)_updateCharacterisiticReferenceInNewEvent:(id)arg1;
- (void)_updatePredicate:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_updateRecurrences:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_updateExecuteOnce:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_handleEventTriggerConditionNotification:(id)arg1;
- (void)_handleEventTriggerRecurrencesNotification:(id)arg1;
- (void)_handleEventTriggerExecuteOnceNotification:(id)arg1;
- (void)handleEventAddedNotification:(id)arg1;
- (void)handleEventsRemovedNotification:(id)arg1;
- (void)handleActivationStateNotification:(id)arg1;
- (void)handleEventsUpdatedNotification:(id)arg1;
- (void)setExecuteOnce:(_Bool)arg1;
- (id)addedEvent:(id)arg1;
- (_Bool)containsSharedTriggerActivationBits;
- (id)initWithName:(id)arg1 events:(id)arg2 predicate:(id)arg3;
- (void)addEvent:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)removeEvent:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)updateEvents:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)updateEndEvents:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_updateCharacteristicReference;
- (void)updatePredicate:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)updateRecurrences:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)updateExecuteOnce:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;

@end
