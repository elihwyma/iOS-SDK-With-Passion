/*
 Image: /System/Library/PrivateFrameworks/Tips.framework/Tips
 */

#import <Tips/TPSDeliveryObject.h>

@class NSArray, NSString, TPSDeliveryCondition;

@interface TPSDeliveryInfo : TPSDeliveryObject

{
    int _priority;
    long long _customizationID;
    long long _displayMaxCount;
    NSString *_identifier;
    NSString *_displayBundleID;
    NSString *_lastModifiedDate;
    NSArray *_eligibleContext;
    NSArray *_usageEvents;
    TPSDeliveryCondition *_triggerCondition;
    TPSDeliveryCondition *_desiredOutcomeCondition;
}

@property (nonatomic) long long customizationID;
@property (nonatomic) long long displayMaxCount;
@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSString *displayBundleID;
@property (copy, nonatomic) NSArray *eligibleContext;
@property (copy, nonatomic) NSArray *usageEvents;
@property (copy, nonatomic) NSString *lastModifiedDate;
@property (copy, nonatomic) TPSDeliveryCondition *triggerCondition;
@property (copy, nonatomic) TPSDeliveryCondition *desiredOutcomeCondition;
@property (nonatomic, readonly) int priority;

+ (_Bool)supportsSecureCoding;
+ (id)classSet;
+ (id)identifierFromDictionary:(id)arg1;
+ (void)eventsInfoArrayForDeliveryInfoDictionary:(id)arg1 triggerEvents:(id *)arg2 desiredOutcomeEvents:(id *)arg3;

- (id)debugDescription;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)triggerEventIdentifiers;
- (id)desiredOutcomeEventIdentifiers;
- (void)restartTriggerTracking;
- (_Bool)hasChangesFromDictionary:(id)arg1;
- (void)restartDesiredOutcomeTracking;
- (id)conditionForType:(unsigned long long)arg1;
- (id)dismissalEventIdentifiers;
- (id)_lastModifiedDateFromDictionary:(id)arg1;

@end
