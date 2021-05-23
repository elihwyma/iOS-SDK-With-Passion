/*
 Image: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
 */

#import <ContactsFoundation/Swift-Protocol.h>

@class NSDictionary;

@protocol CNFoundationUserDefaults <Swift>

@property _Bool preferNickname;
@property unsigned long long nameOrder;
@property unsigned long long shortNameFormat;
@property (nonatomic, getter=isShortNameFormatEnabled) _Bool shortNameFormatEnabled;
@property (nonatomic) NSDictionary *filteredAccountsAndContainers;

- (unsigned short)countryCode;
- (unsigned short)sortOrder;
- (unsigned short)newContactNameOrder;

@end
