/*
 Image: /System/Library/Frameworks/Contacts.framework/Contacts
 */

#import <Foundation/NSFormatter.h>

__attribute__((visibility("hidden")))
@interface CNContactSearchIndexFormatter : NSFormatter

- (id)stringForObjectValue:(id)arg1;
- (_Bool)getObjectValue:(out id *)arg1 forString:(id)arg2 errorDescription:(out id *)arg3;
- (id)stringFromContact:(id)arg1;
- (id)auxiliaryIndexStringForContact:(id)arg1;
- (id)nameExpansionsForContact:(id)arg1;

@end
