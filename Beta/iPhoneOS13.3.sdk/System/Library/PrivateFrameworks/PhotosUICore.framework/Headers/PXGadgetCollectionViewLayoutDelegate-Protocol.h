/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/Swift-Protocol.h>

@class PXGadgetDataSource;

@protocol PXGadgetCollectionViewLayoutDelegate <Swift>

@property (nonatomic, readonly) PXGadgetDataSource *dataSource;
@property (nonatomic, readonly) struct UIEdgeInsets insetsForSectionHeaders;

@end
