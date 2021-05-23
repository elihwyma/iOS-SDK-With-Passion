/*
 Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

#import <Foundation/NSString.h>

@interface NSString (NameDecomposition)

+ (id)_attendeeNameExtensions;
+ (id)_attendeePartialSurnames;

- (void)attendeeFirstName:(id *)arg1 middleName:(id *)arg2 lastName:(id *)arg3 extension:(id *)arg4;
- (id)_attendeeTrimCommasSpacesQuotes;
- (_Bool)_attendeeAppearsToBeAnInitial;

@end
