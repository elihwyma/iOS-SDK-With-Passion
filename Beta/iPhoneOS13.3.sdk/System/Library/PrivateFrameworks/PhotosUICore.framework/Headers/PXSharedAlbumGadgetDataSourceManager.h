/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXGadgetDataSourceManager.h>

@class NSArray;

@interface PXSharedAlbumGadgetDataSourceManager : PXGadgetDataSourceManager

{
    NSArray *_gadgetProviders;
}

- (id)gadgetProviders;
- (id)initWithGadgetProviders:(id)arg1;
- (CDUnknownBlockType)gadgetSortComparator;

@end
