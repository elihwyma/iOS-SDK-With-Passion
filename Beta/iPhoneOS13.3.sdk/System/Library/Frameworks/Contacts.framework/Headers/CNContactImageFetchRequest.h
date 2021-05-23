/*
 Image: /System/Library/Frameworks/Contacts.framework/Contacts
 */

#import <Foundation/NSObject.h>

@class NSArray, NSPersistentStoreRequest, NSString;

@interface CNContactImageFetchRequest : NSObject

{
    NSArray *_contactIdentifiers;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSPersistentStoreRequest *persistentStoreRequest;
@property (retain, nonatomic) NSArray *contactIdentifiers;

+ (id)recentImagesRequestForContactIdenfitiers:(id)arg1;
+ (id)predicateForImagesMatchingContactIdentifiers:(id)arg1;

- (id)initWithContactIdentifiers:(id)arg1;

@end
