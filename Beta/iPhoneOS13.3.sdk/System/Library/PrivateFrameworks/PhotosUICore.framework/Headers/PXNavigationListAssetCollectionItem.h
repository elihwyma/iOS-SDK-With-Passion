/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXNavigationListItem.h>

@class PHAssetCollection;

@interface PXNavigationListAssetCollectionItem : PXNavigationListItem

{
    _Bool _draggable;
    _Bool _renamable;
    PHAssetCollection *_collection;
    long long _indentationLevel;
}

@property (nonatomic, readonly) PHAssetCollection *collection;
@property (nonatomic) long long indentationLevel;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)representedObject;
- (_Bool)isDraggable;
- (id)viewControllerForCollectionWithGridPresentation:(id)arg1;
- (const struct __CFString *)aggregateDictionaryKey;
- (id)glyphImageName;
- (_Bool)isRenamable;
- (id)initWithAssetCollection:(id)arg1 itemCount:(long long)arg2;
- (id)imageNameForIdentifier;

@end
