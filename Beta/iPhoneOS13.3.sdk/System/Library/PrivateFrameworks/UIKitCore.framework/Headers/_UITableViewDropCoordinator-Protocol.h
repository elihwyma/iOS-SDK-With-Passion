/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/Swift-Protocol.h>

@class NSArray, NSIndexPath, UITableViewDropProposal;

@protocol UIDropSession;

@protocol _UITableViewDropCoordinator <Swift>

@property (nonatomic, readonly) NSArray *_items;
@property (nonatomic, readonly) NSIndexPath *_destinationIndexPath;
@property (nonatomic, readonly) UITableViewDropProposal *_dropProposal;
@property (nonatomic, readonly) id <UIDropSession> _dropSession;

- (unsigned short)_dropItem:toRowAtIndexPath: /* Error: Ran out of types for this method. */;
- (unsigned short)_dropItem:toPlaceholderInsertedAtIndexPath:withReuseIdentifier:rowHeight:cellUpdateHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)_dropItem:toTarget: /* Error: Ran out of types for this method. */;

@end
