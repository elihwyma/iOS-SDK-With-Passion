/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXSectionedDataSourceManager.h>

@class PXCMMInvitationsDataSource;

@interface PXCMMInvitationsDataSourceManager : PXSectionedDataSourceManager

@property (nonatomic, readonly) PXCMMInvitationsDataSource *dataSource;

+ (id)emptyDataSourceManager;
+ (id)currentDataSourceManager;
+ (id)keyPathsAffectingCurrentDataSourceManager;

@end
