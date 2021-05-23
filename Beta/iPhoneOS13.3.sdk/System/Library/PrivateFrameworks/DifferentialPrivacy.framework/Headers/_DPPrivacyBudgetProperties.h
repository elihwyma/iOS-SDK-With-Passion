/*
 Image: /System/Library/PrivateFrameworks/DifferentialPrivacy.framework/DifferentialPrivacy
 */

#import <NSObject.h>

@class NSNumber, NSString;

@interface _DPPrivacyBudgetProperties : NSObject

{
    NSString *_name;
    NSNumber *_interval;
    NSNumber *_intervalBudgetValue;
    NSNumber *_refillInterval;
    NSNumber *_refillAmount;
}

@property (copy, nonatomic, readonly) NSString *name;
@property (retain, nonatomic) NSNumber *interval;
@property (retain, nonatomic) NSNumber *intervalBudgetValue;
@property (retain, nonatomic) NSNumber *refillInterval;
@property (retain, nonatomic) NSNumber *refillAmount;

+ (id)allBudgetPropertiesKeys;
+ (id)budgetPropertiesForKey:(id)arg1;
+ (id)budgetMaintenanceSchedule;
+ (id)budgetPropertiesFromFile:(id)arg1;
+ (id)budgetPropertiesFromDictionary:(id)arg1;
+ (void)initializeAllBudgetProperties;

- (id)init;
- (id)description;
- (id)initWithDictionary:(id)arg1;

@end
