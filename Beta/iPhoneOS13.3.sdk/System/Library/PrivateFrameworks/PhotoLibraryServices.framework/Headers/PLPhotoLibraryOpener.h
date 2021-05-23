/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <Foundation/NSObject.h>

@class PLLibraryServicesManager;

@interface PLPhotoLibraryOpener : NSObject

{
    _Bool _reportInProgressUpgrades;
    PLLibraryServicesManager *_libraryServicesManager;
}

@property (readonly) PLLibraryServicesManager *libraryServicesManager;

+ (_Bool)canAutomaticallyCreateLibrary;

- (id)initWithLibraryServicesManager:(id)arg1 reportInProgressUpgrades:(_Bool)arg2;
- (_Bool)createPhotoLibraryDatabase:(id *)arg1;
- (_Bool)openPhotoLibraryDatabase:(id *)arg1;
- (_Bool)lightweightPermissionCheckWithError:(id *)arg1;
- (_Bool)lightweightPermissionCheckWithPath:(id)arg1 isDir:(_Bool)arg2 error:(id *)arg3;

@end
