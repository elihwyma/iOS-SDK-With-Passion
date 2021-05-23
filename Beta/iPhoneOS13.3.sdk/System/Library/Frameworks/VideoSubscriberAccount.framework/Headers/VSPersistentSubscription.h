/*
 Image: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
 */

#import <CoreData/NSManagedObject.h>

@class NSArray, NSDate, NSNumber, NSString;

__attribute__((visibility("hidden")))
@interface VSPersistentSubscription : NSManagedObject

@property (copy, nonatomic) NSString *derivedSubscriptionInfo;
@property (copy, nonatomic) NSDate *creationDate;
@property (copy, nonatomic) NSDate *mostRecentSaveDate;
@property (copy, nonatomic) NSNumber *sourceKind;
@property (copy, nonatomic) NSString *sourceIdentifier;
@property (copy, nonatomic) NSDate *expirationDate;
@property (copy, nonatomic) NSNumber *accessLevel;
@property (copy, nonatomic) NSArray *tierIdentifiers;
@property (copy, nonatomic) NSString *subscriberIdentifierHash;
@property (copy, nonatomic) NSString *billingIdentifier;
@property (copy, nonatomic) NSString *providedSubscriptionInfo;

+ (id)keyPathsForValuesAffectingDerivedSubscriptionInfo;

- (void)didChangeValueForKey:(id)arg1;
- (void)awakeFromFetch;
- (void)awakeFromInsert;
- (void)_setNullResettableValue:(id)arg1 forKey:(id)arg2;
- (void)_deriveValuesFromProvidedInfo:(id)arg1;
- (void)_updateDerivedSubscriptionInfo;
- (_Bool)_validateNullableValue:(id *)arg1 forKey:(id)arg2 error:(id *)arg3;
- (_Bool)validateAccessLevel:(id *)arg1 error:(id *)arg2;
- (_Bool)validateCreationDate:(id *)arg1 error:(id *)arg2;
- (_Bool)validateModificationDate:(id *)arg1 error:(id *)arg2;
- (_Bool)validateExpirationDate:(id *)arg1 error:(id *)arg2;
- (_Bool)validateSubscriberIdentifierHash:(id *)arg1 error:(id *)arg2;
- (_Bool)validateTierIdentifiers:(id *)arg1 error:(id *)arg2;
- (_Bool)validateBillingIdentifier:(id *)arg1 error:(id *)arg2;

@end
