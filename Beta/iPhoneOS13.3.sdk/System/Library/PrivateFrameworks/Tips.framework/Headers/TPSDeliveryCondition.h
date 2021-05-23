/*
 Image: /System/Library/PrivateFrameworks/Tips.framework/Tips
 */

#import <Tips/TPSDeliveryObject.h>

@class NSArray, NSDate;

@interface TPSDeliveryCondition : TPSDeliveryObject

{
    unsigned long long _type;
    unsigned long long _joinType;
    NSDate *_matchedDate;
    NSArray *_rules;
}

@property (nonatomic) unsigned long long joinType;
@property (copy, nonatomic) NSArray *rules;
@property (nonatomic) unsigned long long type;
@property (copy, nonatomic) NSDate *matchedDate;

+ (_Bool)supportsSecureCoding;
+ (id)classSet;
+ (id)eventsForConditionDictionary:(id)arg1;

- (id)debugDescription;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)eventIdentifiers;
- (void)restartTracking;
- (id)initWithDictionary:(id)arg1 type:(unsigned long long)arg2;

@end
