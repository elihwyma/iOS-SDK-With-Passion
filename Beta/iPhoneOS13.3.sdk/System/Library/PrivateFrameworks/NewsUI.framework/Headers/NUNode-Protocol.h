/*
 Image: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
 */

#import <NewsUI/Swift-Protocol.h>

@class NSArray;

@protocol NUNode;

@protocol NUNode <Swift>

@property (nonatomic) struct CGRect frame;
@property (nonatomic) struct CGRect bounds;
@property (weak, nonatomic, readonly) id <NUNode> supernode;
@property (nonatomic, readonly) NSArray *subnodes;

- (unsigned short)addSubnode: /* Error: Ran out of types for this method. */;
- (unsigned short)removeFromSupernode;
- (unsigned short)resolveViewsInView: /* Error: Ran out of types for this method. */;

@end
