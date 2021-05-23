/*
 Image: /System/Library/PrivateFrameworks/EmailAddressing.framework/EmailAddressing
 */

#import <Foundation/NSString.h>

@interface NSString (EmailAddressingAdditions)

+ (void)__ea_extractFirstName:(id *)arg1 middleName:(id *)arg2 lastName:(id *)arg3 extension:(id *)arg4 fromString:(id)arg5;
+ (id)ea_nameExtensions;
+ (id)ea_partialSurnames;

- (_Bool)ea_isLegalEmailAddress;
- (id)ea_uncommentedAddress;
- (id)ea_addressComment;
- (id)ea_personNameComponents;
- (_Bool)ea_isEqualToEmailAddress:(id)arg1;
- (_Bool)ea_isLegalCommentedEmailAddress;
- (id)ea_uncommentedAddressRespectingGroups;
- (id)ea_addressCommentPersonNameComponents;
- (id)ea_trimCommasSpacesQuotes;
- (_Bool)ea_appearsToBeAnInitial;

@end
