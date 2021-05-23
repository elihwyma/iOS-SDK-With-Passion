/*
 Image: /System/Library/PrivateFrameworks/NetAppsUtilities.framework/NetAppsUtilities
 */

#import <NetAppsUtilities/NATreeNode.h>

@class NSSet;

@interface NAMutableTreeNode : NATreeNode

@property (retain, nonatomic) id representedObject;
@property (copy, nonatomic) NSSet *childNodes;

- (void)addChild:(id)arg1;
- (void)removeChild:(id)arg1;
- (void)addChildren:(id)arg1;
- (void)removeChildrenPassingTest:(CDUnknownBlockType)arg1;

@end
