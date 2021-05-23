/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <Foundation/NSObject.h>

@class PLLibraryServicesManager, PLPhotoLibrary;

@interface PLAbstractLibraryServicesManagerService : NSObject

{
    PLLibraryServicesManager *_libraryServicesManager;
}

@property (nonatomic, readonly) PLLibraryServicesManager *libraryServicesManager;
@property (nonatomic, readonly) PLPhotoLibrary *photoLibrary;

- (id)initWithLibraryServicesManager:(id)arg1;

@end
