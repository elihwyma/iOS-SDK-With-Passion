/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXNavigationListItem.h>

@class NSString, PHCollectionList;

@interface PXNavigationListCollectionListItem : PXNavigationListItem

{
    _Bool _draggable;
    _Bool _renamable;
    _Bool _expandable;
    _Bool _expanded;
    NSString *_glyphImageName;
    PHCollectionList *_collection;
    long long _indentationLevel;
}

@property (nonatomic, readonly) PHCollectionList *collection;
@property (nonatomic) long long indentationLevel;
@property (nonatomic, getter=isExpanded) _Bool expanded;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)representedObject;
- (_Bool)isDraggable;
- (_Bool)isExpandable;
- (id)viewControllerForCollectionWithGridPresentation:(id)arg1;
- (const struct __CFString *)aggregateDictionaryKey;
- (id)glyphImageName;
- (_Bool)isRenamable;
- (id)initWithCollectionList:(id)arg1 itemCount:(long long)arg2;

@end
