/*
 Image: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
 */

@protocol CTXPCServiceAppDataUsageInterface

- (unsigned short)dataUsageForLastPeriods:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)billingCycleEndDatesForLastPeriods:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)userEnteredMonthlyBudget:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)setUserEntered:monthlyBudget:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)clearUserEnteredMonthlyBudget:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)userEnteredMonthlyRoamingBudget:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)setUserEntered:monthlyRoamingBudget:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)clearUserEnteredMonthlyRoamingBudget:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)userEnteredBillingEndDayOfMont:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)setUserEnteredBillingEnd:dayOfMonth:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)clearUserEnteredBillingEndDayOfMonth:completion: /* Error: Ran out of types for this method. */;

@end
