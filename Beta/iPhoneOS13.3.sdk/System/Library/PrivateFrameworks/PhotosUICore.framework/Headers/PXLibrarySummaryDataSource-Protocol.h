/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/Swift-Protocol.h>

@protocol PXBrowserVisibleContentSnapshot, PXDisplayAssetCollection;

@protocol PXLibrarySummaryDataSource <Swift>

@property (nonatomic, readonly) id <PXBrowserVisibleContentSnapshot> visibleContentSnapshot;
@property (nonatomic, readonly) id <PXDisplayAssetCollection> topmostAssetCollection;

@end
