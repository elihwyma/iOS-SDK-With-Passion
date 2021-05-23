/*
 Image: /System/Library/Frameworks/Contacts.framework/Contacts
 */

#import <Contacts/Swift-Protocol.h>

@class NSArray, NSPersistentStoreRequest;

@protocol CNContactImageRequest <Swift>

@property (nonatomic, readonly) NSPersistentStoreRequest *persistentStoreRequest;
@property (retain, nonatomic) NSArray *contactIdentifiers;

@end
