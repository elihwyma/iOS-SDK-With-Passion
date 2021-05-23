/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

@class NSString, PHCollection;

@interface PXNavigationListItem : NSObject

{
    NSString *_identifier;
    NSString *_title;
    NSString *_accessoryTitle;
    long long _itemCount;
}

@property (nonatomic, readonly) long long itemCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) NSString *title;
@property (nonatomic, readonly) NSString *accessoryTitle;
@property (nonatomic, readonly) NSString *glyphImageName;
@property (nonatomic, readonly, getter=isDraggable) _Bool draggable;
@property (nonatomic, readonly, getter=isRemovable) _Bool removable;
@property (nonatomic, readonly, getter=isRenamable) _Bool renamable;
@property (nonatomic, readonly, getter=isExpandable) _Bool expandable;
@property (nonatomic, readonly, getter=isGroup) _Bool group;
@property (nonatomic, readonly, getter=isExpanded) _Bool expanded;
@property (nonatomic, readonly) long long indentationLevel;
@property (nonatomic, readonly) PHCollection *collection;
@property (nonatomic, readonly) id representedObject;
@property (nonatomic, readonly) NSString *visualDescription;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithIdentifier:(id)arg1 title:(id)arg2;
- (id)initWithIdentifier:(id)arg1 title:(id)arg2 itemCount:(long long)arg3;
- (_Bool)isEqualToNavigationListItem:(id)arg1;

@end
