/*
 Image: /System/Library/Frameworks/AddressBook.framework/AddressBook
 */

#import <Contacts/CNContact.h>

@class NSString;

@interface CNContact (ABShimAdditions)

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSString *identifier;

@end
