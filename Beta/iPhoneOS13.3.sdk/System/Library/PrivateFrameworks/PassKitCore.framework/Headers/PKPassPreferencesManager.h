/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <NSObject.h>

@interface PKPassPreferencesManager : NSObject

+ (id)sharedInstance;

- (void)_synchronize;
- (void)_removeValueForKey:(id)arg1 passUniqueID:(id)arg2;
- (struct __CFString *)_cfPreferencesKeyForConstant:(id)arg1 passUniqueID:(id)arg2;
- (void)removeAllPreferencesForPassWithUniqueID:(id)arg1;
- (void)removeAllPreferences;
- (void)setHasDoneExpressUpgrade:(_Bool)arg1;
- (_Bool)hasDoneExpressUpgrade;
- (void)_setDouble:(double)arg1 forKey:(id)arg2 passUniqueID:(id)arg3;
- (double)_doubleForKey:(id)arg1 passUniqueID:(id)arg2;
- (void)_setDecimalNumber:(id)arg1 forKey:(id)arg2 passUniqueID:(id)arg3;
- (id)_decimalNumberForKey:(id)arg1 passUniqueID:(id)arg2;
- (void)_setString:(id)arg1 forKey:(id)arg2 passUniqueID:(id)arg3;
- (id)_stringForKey:(id)arg1 passUniqueID:(id)arg2;
- (void)setLowBalanceReminderAmount:(id)arg1 currency:(id)arg2 forPassWithUniqueID:(id)arg3;
- (id)lowBalanceReminderAmountForPassWithUniqueID:(id)arg1;
- (id)lowBalanceReminderCurrencyForPassWithUniqueID:(id)arg1;
- (void)setCommutePlanRenewalReminderTimeInterval:(double)arg1 forPassWithUniqueID:(id)arg2;
- (double)commutePlanRenewalReminderTimeIntervalForPassWithUniqueID:(id)arg1;

@end
