/*
 Image: /System/Library/Frameworks/Photos.framework/Photos
 */

#import <Photos/PHValidator.h>

@class PLPhotoLibrary;

@interface _PHPhotoLibraryValidator : PHValidator

{
    PLPhotoLibrary *_photoLibrary;
}

@property (weak, nonatomic, readonly) PLPhotoLibrary *photoLibrary;

- (id)initWithPhotoLibrary:(id)arg1;
- (_Bool)isValidImagePathExtension:(id)arg1;
- (_Bool)isValidVideoPathExtension:(id)arg1;

@end
