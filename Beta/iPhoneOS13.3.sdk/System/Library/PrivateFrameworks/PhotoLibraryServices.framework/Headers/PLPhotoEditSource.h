/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <PhotoLibraryServices/PLEditSource.h>

@interface PLPhotoEditSource : PLEditSource

{
    _Bool _isRAWSource;
}

- (_Bool)isRAWSource;
- (id)initWithURL:(id)arg1 type:(id)arg2 image:(struct NSObject *)arg3 useEmbeddedPreview:(_Bool)arg4;
- (id)newSourceWithURL:(id)arg1 type:(id)arg2 useEmbeddedPreview:(_Bool)arg3;

@end
