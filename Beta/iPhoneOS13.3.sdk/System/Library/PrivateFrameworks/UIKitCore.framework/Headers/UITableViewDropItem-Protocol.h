/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/Swift-Protocol.h>

@class NSIndexPath, UIDragItem;

@protocol UITableViewDropItem <Swift>

@property (nonatomic, readonly) UIDragItem *dragItem;
@property (nonatomic, readonly) NSIndexPath *sourceIndexPath;
@property (nonatomic, readonly) struct CGSize previewSize;

@end
