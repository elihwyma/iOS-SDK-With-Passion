/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <CloudPhotoLibrary/CPLResource.h>

@interface CPLResource (PL)

+ (id)videoDerivativeTypes;
+ (id)imageDerivativeTypes;

- (void)setDeleteAfterUpload:(_Bool)arg1;
- (_Bool)deleteAfterUpload;

@end
