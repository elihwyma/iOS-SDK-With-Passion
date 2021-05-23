/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/Swift-Protocol.h>

@class NSString, PHCollection;

@protocol PXNavigationListItem <Swift>

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

@end
