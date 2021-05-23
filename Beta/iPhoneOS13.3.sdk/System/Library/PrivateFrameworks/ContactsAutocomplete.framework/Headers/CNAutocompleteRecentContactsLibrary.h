/*
 Image: /System/Library/PrivateFrameworks/ContactsAutocomplete.framework/ContactsAutocomplete
 */

#import <Foundation/NSObject.h>

@interface CNAutocompleteRecentContactsLibrary : NSObject

+ (id)queryForRequest:(id)arg1;
+ (void)addLoggingHandlersToFuture:(id)arg1;
+ (id)domainsForFetchRequest:(id)arg1;
+ (id)addressKindsForSearchType:(unsigned long long)arg1;
+ (unsigned long long)implicitGroupThresholdForSearchType:(unsigned long long)arg1;
+ (id)domainsForSearchType:(unsigned long long)arg1;
+ (id)library:(id)arg1 recentContactsWithRequest:(id)arg2;

@end
