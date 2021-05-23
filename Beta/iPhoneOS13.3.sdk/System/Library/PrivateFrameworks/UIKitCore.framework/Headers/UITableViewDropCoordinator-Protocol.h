/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/Swift-Protocol.h>

@class NSArray, NSIndexPath, UITableViewDropProposal;

@protocol UIDropSession;

@protocol UITableViewDropCoordinator <Swift>

@property (nonatomic, readonly) NSArray *items;
@property (nonatomic, readonly) NSIndexPath *destinationIndexPath;
@property (nonatomic, readonly) UITableViewDropProposal *proposal;
@property (nonatomic, readonly) id <UIDropSession> session;

- (unsigned short)dropItem:toPlaceholder: /* Error: Ran out of types for this method. */;
- (unsigned short)dropItem:toTarget: /* Error: Ran out of types for this method. */;
- (unsigned short)dropItem:toRowAtIndexPath: /* Error: Ran out of types for this method. */;
- (unsigned short)dropItem:intoRowAtIndexPath:rect: /* Error: Ran out of types for this method. */;

@end
