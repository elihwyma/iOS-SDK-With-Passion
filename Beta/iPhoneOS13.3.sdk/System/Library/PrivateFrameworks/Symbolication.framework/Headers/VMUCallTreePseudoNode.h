/*
 Image: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
 */

#import <Symbolication/VMUCallTreeNode.h>

__attribute__((visibility("hidden")))
@interface VMUCallTreePseudoNode : VMUCallTreeNode

- (_Bool)isPseudo;
- (id)pseudoNodeTopOfStackChild;
- (id)sortedChildrenWithPseudoNode;
- (id)largestTopOfStackPath;
- (void)addChildCountsIntoNode;

@end
