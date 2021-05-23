/*
 Image: /System/Library/PrivateFrameworks/Tips.framework/Tips
 */

#import <Tips/TPSDeliveryObject.h>

@class NSArray, NSDate, NSString;

@interface TPSDeliveryRule : TPSDeliveryObject

{
    NSDate *_matchedDate;
    NSString *_identifier;
    NSArray *_eventIdentifiers;
}

@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSArray *eventIdentifiers;
@property (copy, nonatomic) NSDate *matchedDate;

+ (_Bool)supportsSecureCoding;
+ (id)classSet;
+ (id)eventsForRuleDictionary:(id)arg1;

- (id)debugDescription;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (void)restartTracking;

@end
