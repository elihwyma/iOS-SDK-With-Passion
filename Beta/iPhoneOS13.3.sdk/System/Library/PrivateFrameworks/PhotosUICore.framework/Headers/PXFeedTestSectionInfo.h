/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXFeedSectionInfo.h>

@class PLPhotoLibrary;

@interface PXFeedTestSectionInfo : PXFeedSectionInfo

{
    PLPhotoLibrary *_photoLibrary;
    long long _countOfItems;
}

@property (nonatomic, readonly) long long countOfItems;

- (id)date;
- (_Bool)isLoaded;
- (long long)numberOfItems;
- (long long)sectionType;
- (id)photoLibrary;
- (id)initWithPhotoLibrary:(id)arg1;
- (id)albumTitle;
- (id)captionForItemAtIndex:(long long)arg1;

@end
