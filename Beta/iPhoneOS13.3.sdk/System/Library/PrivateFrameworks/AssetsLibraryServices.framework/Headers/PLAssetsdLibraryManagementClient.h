/*
 Image: /System/Library/PrivateFrameworks/AssetsLibraryServices.framework/AssetsLibraryServices
 */

#import <AssetsLibraryServices/PLAssetsdBaseClient.h>

@interface PLAssetsdLibraryManagementClient : PLAssetsdBaseClient

- (void)getPhotoLibraryURLsWithReply:(CDUnknownBlockType)arg1;
- (_Bool)setSystemPhotoLibraryURL:(id)arg1 error:(id *)arg2;
- (_Bool)removePhotoLibraryURL:(id)arg1 error:(id *)arg2;
- (_Bool)overrideSystemPhotoLibraryURL:(id)arg1 error:(id *)arg2;
- (id)activePhotoLibraries:(id *)arg1;

@end
