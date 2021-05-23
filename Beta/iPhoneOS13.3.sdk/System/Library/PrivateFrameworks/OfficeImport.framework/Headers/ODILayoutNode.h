/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

@class NSMutableArray, ODDAlgorithm, ODDPoint, ODDShape;

__attribute__((visibility("hidden")))
@interface ODILayoutNode : NSObject

{
    ODDPoint *mPoint;
    ODDAlgorithm *mAlgorithm;
    ODDShape *mShape;
    NSMutableArray *mChildren;
}

- (id)initWithLayoutNode:(id)arg1 state:(struct ODILayoutNodeState *)arg2;
- (id)initWithLayoutNode:(id)arg1 point:(id)arg2;
- (void)processLayoutObjects:(id)arg1 state:(struct ODILayoutNodeState *)arg2;
- (void)processLayoutNode:(id)arg1 state:(struct ODILayoutNodeState *)arg2;
- (void)processChoose:(id)arg1 state:(struct ODILayoutNodeState *)arg2;
- (void)processForEach:(id)arg1 state:(struct ODILayoutNodeState *)arg2;
- (void)processAlgorithm:(id)arg1 state:(struct ODILayoutNodeState *)arg2;
- (void)processShape:(id)arg1 state:(struct ODILayoutNodeState *)arg2;

@end
