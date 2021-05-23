/*
 Image: /System/Library/Frameworks/Contacts.framework/Contacts
 */

#import <Foundation/NSObject.h>

@class CNContactImage, NSArray, NSPersistentStoreRequest, NSString;

@interface CNContactImageSaveRequest : NSObject

{
    NSArray *_contactIdentifiers;
    CNContactImage *_image;
    long long _operationType;
    NSString *_attributeName;
}

@property (nonatomic, readonly) CNContactImage *image;
@property (nonatomic, readonly) long long operationType;
@property (nonatomic, readonly) NSString *attributeName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSPersistentStoreRequest *persistentStoreRequest;
@property (retain, nonatomic) NSArray *contactIdentifiers;

+ (id)saveRequestToCreateImage:(id)arg1 forContactIdentifier:(id)arg2;
+ (id)saveRequestToDeleteImagesForContactIdentifiers:(id)arg1;
+ (id)saveRequestToDeleteImageForIdentifier:(id)arg1;

- (id)initWithContactImage:(id)arg1 contactIdentifiers:(id)arg2 attributeName:(id)arg3 operationType:(long long)arg4;
- (id)deleteStoreRequest;
- (id)createStoreRequest;

@end
