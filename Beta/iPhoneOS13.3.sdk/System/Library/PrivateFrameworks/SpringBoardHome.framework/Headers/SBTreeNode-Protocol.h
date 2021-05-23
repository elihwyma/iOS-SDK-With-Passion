/*
 Image: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
 */

#import <SpringBoardHome/Swift-Protocol.h>

@class NSArray, NSString;

@protocol SBTreeNode;

@protocol SBTreeNode <Swift>

@property (nonatomic, readonly) NSArray *children;
@property (weak, nonatomic) id <SBTreeNode> parent;
@property (copy, nonatomic, readonly) NSString *uniqueIdentifier;

- (unsigned short)removeChild: /* Error: Ran out of types for this method. */;
- (unsigned short)ancestryDidChange;

@end
