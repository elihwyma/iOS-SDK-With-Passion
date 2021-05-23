/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <Foundation/NSObject.h>

@class NSString, PLLibraryServicesManager;

@interface PLAssetsdXPCUserInfo : NSObject

{
    PLLibraryServicesManager *_libraryServicesManager;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)persistentStoreCoordinator;
- (id)libraryServicesManager;
- (id)initWithLibraryServicesManager:(id)arg1;

@end
