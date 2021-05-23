/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotoLibraryServices/PLCloudSharedAlbum.h>

@interface TestPLCloudSharedAlbum : PLCloudSharedAlbum

- (id)localizedTitle;
- (id)cloudGUID;
- (id)cloudOwnerDisplayNameIncludingEmail:(_Bool)arg1 allowsEmail:(_Bool)arg2;
- (id)cloudOwnerFirstName;
- (id)cloudOwnerLastName;
- (id)cloudOwnerEmail;
- (_Bool)cloudOwnerIsWhitelisted;

@end
