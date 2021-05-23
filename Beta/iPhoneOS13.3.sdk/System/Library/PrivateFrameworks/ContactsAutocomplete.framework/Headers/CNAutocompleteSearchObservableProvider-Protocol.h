/*
 Image: /System/Library/PrivateFrameworks/ContactsAutocomplete.framework/ContactsAutocomplete
 */

#import <ContactsAutocomplete/Swift-Protocol.h>

@protocol CNAutocompleteSearchObservableProvider <Swift>

- (unsigned short)localSearchObservable;
- (unsigned short)recentsSearchObservable;
- (unsigned short)suggestionsSearchObservable;
- (unsigned short)predictionsSearchObservableWithUnfilteredResultPromise: /* Error: Ran out of types for this method. */;
- (unsigned short)localExtensionSearchObservables;
- (unsigned short)directoryServersSearchObservable;
- (unsigned short)calendarServersSearchObservable;

@end
