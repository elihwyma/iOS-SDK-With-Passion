/*
 Image: /System/Library/PrivateFrameworks/Tips.framework/Tips
 */

#import <Tips/TPSDeliveryObject.h>

@class NSDate, NSMutableDictionary, NSMutableSet, NSString;

@interface TPSDeliveryEvent : TPSDeliveryObject

{
    unsigned int _minObservationCount;
    unsigned long long _status;
    long long _type;
    NSDate *_matchedDate;
    NSDate *_eventSinceDate;
    NSString *_key;
    NSString *_identifier;
    TPSDeliveryEvent *_state;
    NSMutableDictionary *_observationMap;
    NSMutableSet *_observerIdentifiers;
}

@property (nonatomic) unsigned long long status;
@property (nonatomic) long long type;
@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) TPSDeliveryEvent *state;
@property (retain, nonatomic) NSMutableDictionary *observationMap;
@property (retain, nonatomic) NSMutableSet *observerIdentifiers;
@property (nonatomic, readonly) unsigned int currentObservationCount;
@property (nonatomic) unsigned int minObservationCount;
@property (copy, nonatomic) NSDate *matchedDate;
@property (copy, nonatomic) NSDate *eventSinceDate;
@property (copy, nonatomic) NSString *key;

+ (_Bool)supportsSecureCoding;
+ (id)classSet;
+ (long long)typeFromEventDictionary:(id)arg1;
+ (id)identifierFromEventInfoDictionary:(id)arg1;

- (id)description;
- (id)debugDescription;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (void)removeObserverIdentifiers:(id)arg1;
- (void)removeAllObservations;
- (void)addObserverIdentifier:(id)arg1;
- (_Bool)observedWithResults:(id)arg1;
- (_Bool)canBeRemoved;
- (id)newStateFromStateDictionary:(id)arg1;
- (void)removeOutdatedObservationDates;

@end
