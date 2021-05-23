/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/Swift-Protocol.h>

@class UICollectionViewDropProposal;

@protocol UIDropSession;

@protocol _UICollectionViewDropCoordinator <Swift>

@property (nonatomic, readonly) UICollectionViewDropProposal *dropProposal;
@property (nonatomic, readonly) id <UIDropSession> dropSession;

- (unsigned short)dropToItemAtIndexPath:forDragItem: /* Error: Ran out of types for this method. */;
- (unsigned short)dropToPlaceholderInsertedAtIndexPath:reuseIdentifier:forDragItem:cellUpdateHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)dropToTarget:forDragItem: /* Error: Ran out of types for this method. */;

@end
