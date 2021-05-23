/*
 Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <Foundation/_NSLayoutRuleNode.h>

@class NSArray, NSMutableArray, NSString;

@interface _NSCompositeLayoutRuleNode : _NSLayoutRuleNode

{
    NSMutableArray *_childNodes;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, readonly) NSArray *_childRuleNodes;

- (void)dealloc;
- (id)childNodesCreatingIfNecessary;
- (void)_addChildRuleNode:(id)arg1;
- (void)_removeChildRuleNode:(id)arg1;

@end
