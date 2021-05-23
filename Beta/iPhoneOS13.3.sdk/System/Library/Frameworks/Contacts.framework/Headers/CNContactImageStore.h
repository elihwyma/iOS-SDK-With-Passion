/*
 Image: /System/Library/Frameworks/Contacts.framework/Contacts
 */

#import <Foundation/NSObject.h>

@class CNContactMetadataPersistentStoreManager;

@interface CNContactImageStore : NSObject

{
    CNContactMetadataPersistentStoreManager *_storeManager;
}

@property (retain, nonatomic) CNContactMetadataPersistentStoreManager *storeManager;

+ (long long)maximumContactImagesPerContact;

- (id)init;
- (id)initWithContactMetadataStoreManager:(id)arg1;
- (id)managedObjectsToContactImages:(id)arg1;
- (_Bool)updateExistingImagesIfNeededWithNewContactImage:(id)arg1 forContactIdentifier:(id)arg2 inContext:(id)arg3 error:(id *)arg4;
- (void)insertContactImage:(id)arg1 withContactIdentifier:(id)arg2 inContext:(id)arg3;
- (void)ensureImageQuotasForImages:(id)arg1 inContext:(id)arg2;
- (id)performFetchRequest:(id)arg1 error:(id *)arg2;
- (_Bool)performSaveRequest:(id)arg1 error:(id *)arg2;

@end
