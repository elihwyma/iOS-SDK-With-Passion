/*
 Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
 */

#import <Foundation/NSArray.h>

@interface NSArray (MTLManipulationAdditions)

@property (nonatomic, readonly) id mtl_firstObject;

- (id)mtl_arrayByRemovingObject:(id)arg1;
- (id)mtl_arrayByRemovingFirstObject;
- (id)mtl_arrayByRemovingLastObject;

@end
