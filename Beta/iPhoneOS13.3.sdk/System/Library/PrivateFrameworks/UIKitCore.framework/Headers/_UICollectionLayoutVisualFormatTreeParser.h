/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSArray, _UICollectionLayoutVisualTreeNode;

__attribute__((visibility("hidden")))
@interface _UICollectionLayoutVisualFormatTreeParser : NSObject

{
    _UICollectionLayoutVisualTreeNode *_root;
    NSArray *_visualFormats;
}

@property (copy, nonatomic) NSArray *visualFormats;
@property (retain, nonatomic) _UICollectionLayoutVisualTreeNode *root;

+ (id)treeParserWithVisualFormats:(id)arg1;

- (id)description;
- (id)_parse;
- (id)initWithVisualFormats:(id)arg1;
- (void)_visitChildrenOfNodeDepthFirst:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (id)_nodeForParser:(id)arg1 withParserDict:(id)arg2 size:(id)arg3;
- (id)_normalizeFractionsOfLayoutVFLItemsForItems:(id)arg1;
- (void)enumerateTreeNodesDepthFirstUsingBlock:(CDUnknownBlockType)arg1;

@end
