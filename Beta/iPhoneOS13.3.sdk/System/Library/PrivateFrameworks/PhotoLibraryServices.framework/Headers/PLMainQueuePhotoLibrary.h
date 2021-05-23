/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <PhotoLibraryServices/PLPhotoLibrary.h>

@interface PLMainQueuePhotoLibrary : PLPhotoLibrary

{
    int _splChangedToken;
}

+ (id)systemMainQueuePhotoLibrary;
+ (void)_resetSharedInstance;

- (void)dealloc;
- (id)initWithName:(const char *)arg1 libraryBundle:(id)arg2 options:(id)arg3;

@end
