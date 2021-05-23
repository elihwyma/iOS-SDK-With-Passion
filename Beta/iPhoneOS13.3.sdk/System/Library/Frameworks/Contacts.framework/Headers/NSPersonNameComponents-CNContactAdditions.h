/*
 Image: /System/Library/Frameworks/Contacts.framework/Contacts
 */

#import <Foundation/NSPersonNameComponents.h>

@interface NSPersonNameComponents (CNContactAdditions)

+ (id)componentsForContact:(id)arg1;
+ (id)keyVectorForUsedKeys;
+ (id)descriptorForUsedKeys;
+ (id)keyPathMapping;

- (void)overrideComponentsInContact:(id)arg1;

@end
