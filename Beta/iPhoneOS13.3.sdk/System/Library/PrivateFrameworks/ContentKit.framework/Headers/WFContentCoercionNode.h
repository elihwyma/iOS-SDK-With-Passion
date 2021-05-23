/*
 Image: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
 */

#import <Foundation/NSObject.h>

@class NSOrderedSet;

@interface WFContentCoercionNode : NSObject

{
    id _itemOrItemClass;
    WFContentCoercionNode *_parent;
}

@property (nonatomic, readonly) id itemOrItemClass;
@property (nonatomic, readonly) WFContentCoercionNode *parent;
@property (nonatomic, readonly) NSOrderedSet *itemOrItemClassPath;
@property (nonatomic, readonly) NSOrderedSet *coercionPath;

- (id)description;
- (id)initWithItemOrItemClass:(id)arg1 parent:(id)arg2;
- (id)successorsWithOptions:(id)arg1;
- (id)successorsWithOptions:(id)arg1 goalType:(id)arg2;
- (void)runCoercionWithOptions:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)continueCoercionUsingPathEnumerator:(id)arg1 contentItems:(id)arg2 options:(id)arg3 error:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (id)runCoercionSynchronouslyWithOptions:(id)arg1 error:(id *)arg2;
- (id)continueCoercionUsingPathEnumerator:(id)arg1 contentItems:(id)arg2 options:(id)arg3 error:(id *)arg4;

@end
