/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/Swift-Protocol.h>

@protocol PXInboxModelDetailViewControllerProvider, PXInboxModelMediaProvider, PXInboxModelTitleProvider;

@protocol PXInboxProviderSource <Swift>

@property (nonatomic, readonly) id <PXInboxModelDetailViewControllerProvider> detailViewControllerProvider;
@property (nonatomic, readonly) id <PXInboxModelMediaProvider> mediaProvider;
@property (nonatomic, readonly) id <PXInboxModelTitleProvider> titleProvider;

@end
