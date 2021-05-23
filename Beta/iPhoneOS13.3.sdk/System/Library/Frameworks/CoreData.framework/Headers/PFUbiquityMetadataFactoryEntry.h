/*
 Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <Foundation/NSObject.h>

@class NSPersistentStore, NSPersistentStoreCoordinator, PFUbiquityLocation, PFUbiquityMetadataFactoryFilePresenter;

__attribute__((visibility("hidden")))
@interface PFUbiquityMetadataFactoryEntry : NSObject

{
    PFUbiquityLocation *_metadataStoreFileLocation;
    NSPersistentStoreCoordinator *_psc;
    NSPersistentStore *_store;
    PFUbiquityMetadataFactoryFilePresenter *_filePresenter;
}

@property (nonatomic, readonly) PFUbiquityLocation *metadataStoreFileLocation;
@property (nonatomic, readonly) PFUbiquityMetadataFactoryFilePresenter *filePresenter;
@property (nonatomic, readonly) NSPersistentStoreCoordinator *psc;
@property (nonatomic, readonly) NSPersistentStore *store;

- (id)init;
- (void)dealloc;
- (id)description;
- (id)initWithMetadataStoreFileLocation:(id)arg1;
- (_Bool)initializePersistentStoreCoordinator:(id *)arg1;

@end
