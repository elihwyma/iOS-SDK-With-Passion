/*
 Image: /System/Library/PrivateFrameworks/CalendarFoundation.framework/CalendarFoundation
 */

#import <Contacts/CNContact.h>

@interface CNContact (CalExtensions)

+ (id)CalKeys;
+ (id)CalDefaultBirthdayString;

- (id)CalDisplayName;
- (id)CalEmailAddresses;
- (id)CalBirthdayStringForDate:(id)arg1;
- (id)CalFirstValueForKey:(id)arg1;
- (id)CalValueForKey:(id)arg1 withLabel:(id)arg2;

@end
