/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXAssetsDataSourceManager.h>

@class NSDictionary, NSMutableDictionary;

@interface PXFileBackedAssetsDataSourceManager : PXAssetsDataSourceManager

{
    NSMutableDictionary *_fileURLsBySection;
}

@property (nonatomic, readonly) NSDictionary *fileURLsBySection;

- (void)_createDataSource;
- (id)initWithFileURLsBySection:(id)arg1;
- (void)removeFileURLsAtIndexes:(id)arg1 inSection:(long long)arg2;
- (void)insertFileURL:(id)arg1 atIndex:(long long)arg2 inSection:(long long)arg3;

@end
