/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/Swift-Protocol.h>

@class NSArray, NSIndexPath, UICollectionViewDropProposal;

@protocol UIDropSession;

@protocol UICollectionViewDropCoordinator <Swift>

@property (nonatomic, readonly) NSArray *items;
@property (nonatomic, readonly) NSIndexPath *destinationIndexPath;
@property (nonatomic, readonly) UICollectionViewDropProposal *proposal;
@property (nonatomic, readonly) id <UIDropSession> session;

- (unsigned short)dropItem:toPlaceholder: /* Error: Ran out of types for this method. */;
- (unsigned short)dropItem:toItemAtIndexPath: /* Error: Ran out of types for this method. */;
- (unsigned short)dropItem:toTarget: /* Error: Ran out of types for this method. */;
- (unsigned short)dropItem:intoItemAtIndexPath:rect: /* Error: Ran out of types for this method. */;

@end
