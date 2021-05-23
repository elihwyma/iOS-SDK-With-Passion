/*
 Image: /System/Library/PrivateFrameworks/ContactsAutocomplete.framework/ContactsAutocomplete
 */

#import <Foundation/NSObject.h>

@interface CNAutocompleteEntitlementVerifier : NSObject

+ (_Bool)currentProcessHasBooleanEntitlement:(id)arg1;
+ (_Bool)currentProcessHasSuggestionsEntitlement;
+ (_Bool)currentProcessHasRecentsEntitlement;
+ (_Bool)currentProcessHasDuetEntitlement;
+ (_Bool)currentProcessHasContactsEntitlement;
+ (_Bool)currentProcessHasCalendarEntitlement;
+ (_Bool)currentProcessHasNetworkClientEntitlement;

@end
