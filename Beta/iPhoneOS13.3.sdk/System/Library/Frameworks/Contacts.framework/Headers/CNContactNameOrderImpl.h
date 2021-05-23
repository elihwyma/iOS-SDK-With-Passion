/*
 Image: /System/Library/Frameworks/Contacts.framework/Contacts
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface CNContactNameOrderImpl : NSObject

+ (id)orderForSortOrder:(long long)arg1;
+ (id)familyNameFirstOrder;
+ (id)givenNameFirstOrder;
+ (id)defaultSortOrder;
+ (id)defaultOrder;
+ (id)defaultNewContactOrder;

- (long long)nameOrder;
- (id)phoneticNameProperties;
- (id)nameProperties;
- (id)sortingNameProperties;

@end
