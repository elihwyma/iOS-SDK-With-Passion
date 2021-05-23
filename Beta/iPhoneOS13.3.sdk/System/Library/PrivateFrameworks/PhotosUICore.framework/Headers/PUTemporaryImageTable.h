/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotoLibraryServices/PLTemporaryImageTable.h>

@interface PUTemporaryImageTable : PLTemporaryImageTable

{
    _Atomic int _indexCounter;
}

- (int)nextCacheIndex;

@end
