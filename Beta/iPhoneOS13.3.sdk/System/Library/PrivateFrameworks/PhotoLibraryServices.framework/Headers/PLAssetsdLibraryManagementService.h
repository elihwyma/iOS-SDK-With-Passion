/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <Foundation/NSObject.h>

@class NSString, PLAssetsdConnectionAuthorization, PLPhotoLibraryBundleController;

@interface PLAssetsdLibraryManagementService : NSObject

{
    PLAssetsdConnectionAuthorization *_connectionAuthorization;
    PLPhotoLibraryBundleController *_bundleController;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)setSystemPhotoLibraryURL:(id)arg1 bookmark:(id)arg2 options:(unsigned short)arg3 reply:(CDUnknownBlockType)arg4;
- (void)getActivePhotoLibrariesWithReply:(CDUnknownBlockType)arg1;
- (void)getPhotoLibraryURLsWithReply:(CDUnknownBlockType)arg1;
- (id)initWithConnectionAuthorization:(id)arg1 bundleController:(id)arg2;
- (void)_disableCloudServicesInPhotoLibraryBundle:(id)arg1 withReason:(id)arg2;

@end
