/*
 Image: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
 */

#import <Foundation/NSObject.h>

@class NSArray, NSMutableArray, NSMutableOrderedSet, WFCoercionOptions, WFContentCoercionNode, WFType;

@interface WFContentCoercionSearch : NSObject

{
    WFCoercionOptions *_options;
    WFContentCoercionNode *_startNode;
    NSArray *_goalItemClasses;
    WFType *_goalType;
    NSMutableOrderedSet *_visitedStates;
    NSMutableArray *_agenda;
}

@property (nonatomic, readonly) NSMutableOrderedSet *visitedStates;
@property (nonatomic, readonly) NSMutableArray *agenda;
@property (nonatomic, readonly) WFCoercionOptions *options;
@property (nonatomic, readonly) WFContentCoercionNode *startNode;
@property (nonatomic, readonly) NSArray *goalItemClasses;
@property (nonatomic, readonly) WFType *goalType;

+ (id)searchForCoercingItem:(id)arg1 toItemClass:(Class)arg2 options:(id)arg3;
+ (id)searchForCoercingItem:(id)arg1 toItemClasses:(id)arg2 options:(id)arg3;
+ (id)searchForCoercingItem:(id)arg1 toType:(id)arg2 options:(id)arg3;

- (id)initWithStartNode:(id)arg1 goalItemClasses:(id)arg2 goalType:(id)arg3 options:(id)arg4;
- (_Bool)isCoercionPathAllowedForNode:(id)arg1;
- (_Bool)goalTest:(id)arg1;
- (id)nextPathNode;
- (id)badCoercionError;
- (void)runCoercion:(CDUnknownBlockType)arg1;
- (void)continueCoercionWithContentItems:(id)arg1 error:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (id)runCoercionSynchronouslyWithError:(id *)arg1;
- (id)continueCoercionWithContentItems:(id)arg1 error:(id *)arg2;

@end
