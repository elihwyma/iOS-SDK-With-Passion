/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXNavigationListItem.h>

@interface PXNavigationListGroupItem : PXNavigationListItem

{
    _Bool _group;
    _Bool _draggable;
    _Bool _expandable;
}

+ (id)titleForIdentifier:(id)arg1;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithIdentifier:(id)arg1;
- (_Bool)isGroup;
- (_Bool)isDraggable;
- (_Bool)isExpandable;

@end
