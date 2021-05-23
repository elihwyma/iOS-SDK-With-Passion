/*
 Image: /System/Library/PrivateFrameworks/ContactsAutocomplete.framework/ContactsAutocomplete
 */

#import <ContactsAutocomplete/CNAutocompleteResult.h>

@class NSDate;

@interface CNAutocompleteRecentResult : CNAutocompleteResult

{
    NSDate *_date;
    _Bool _matchesSendingAddress;
    _Bool _completesChosenGroup;
}

@property (readonly) NSDate *date;
@property _Bool matchesSendingAddress;
@property _Bool completesChosenGroup;

+ (id)comparators;
+ (id)contactResultWithDisplayName:(id)arg1 value:(id)arg2 lastSendingAddress:(id)arg3 date:(id)arg4;
+ (id)groupResultWithDisplayName:(id)arg1 date:(id)arg2;

@end
