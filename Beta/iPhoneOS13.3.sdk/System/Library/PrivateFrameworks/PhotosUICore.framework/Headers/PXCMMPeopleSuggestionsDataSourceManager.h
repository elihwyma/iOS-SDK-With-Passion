/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXSectionedDataSourceManager.h>

@class PXCMMPeopleSuggestionsDataSource;

@interface PXCMMPeopleSuggestionsDataSourceManager : PXSectionedDataSourceManager

@property (nonatomic, readonly) PXCMMPeopleSuggestionsDataSource *dataSource;

- (void)startLoading;
- (_Bool)isLoading;
- (void)cancelLoading;
- (void)boostLoading;

@end
