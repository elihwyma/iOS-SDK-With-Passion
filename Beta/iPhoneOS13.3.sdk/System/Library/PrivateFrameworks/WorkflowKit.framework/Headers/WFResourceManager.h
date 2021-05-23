/*
 Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
 */

#import <Foundation/NSObject.h>

@class NSArray, NSMapTable, NSMutableArray, NSMutableOrderedSet, NSOrderedSet, NSSet, NSString;

@protocol OS_dispatch_queue;

@interface WFResourceManager : NSObject

{
    NSMutableArray *_resourceNodes;
    _Bool _resourcesAvailable;
    _Bool _resourcesRequiredForDisplayAvailable;
    _Bool _didEvaluateAvailabilityOfNodes;
    NSMutableOrderedSet *_unavailableResources;
    NSOrderedSet *_unavailableResourceErrors;
    NSMapTable *_targetSelectorTable;
    NSObject<OS_dispatch_queue> *_stateAccessQueue;
}

@property (retain, nonatomic) NSArray *resourceNodes;
@property (nonatomic) _Bool resourcesAvailable;
@property (nonatomic) _Bool resourcesRequiredForDisplayAvailable;
@property (retain, nonatomic) NSMutableOrderedSet *unavailableResources;
@property (retain, nonatomic) NSOrderedSet *unavailableResourceErrors;
@property (retain, nonatomic) NSMapTable *targetSelectorTable;
@property (nonatomic, readonly) _Bool didEvaluateAvailabilityOfNodes;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *stateAccessQueue;
@property (nonatomic, readonly) NSSet *accessResources;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)addResource:(id)arg1;
- (void)addTarget:(id)arg1 selector:(SEL)arg2;
- (void)removeTarget:(id)arg1 selector:(SEL)arg2;
- (void)resourceNodeAvailabilityChanged:(id)arg1;
- (id)initWithDefinitions:(id)arg1;
- (_Bool)currentlyRequiresResourceOfClass:(Class)arg1;
- (id)currentlyRequiredResourcesOfClass:(Class)arg1;
- (void)makeAccessResourcesAvailableAtGlobalLevelWithUserInterface:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)makeAccessResourcesAvailableAtWorkflowLevelWithUserInterface:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)resourceObjectsOfClass:(Class)arg1;
- (id)resourceObjectsConformingToProtocol:(id)arg1;
- (id)resourceObjectsOfClasses:(id)arg1;
- (void)addResourceObjectsOfClassesOrProtocols:(id)arg1 withinNode:(id)arg2 toSet:(id)arg3;
- (id)relevantNodes;
- (_Bool)nodeIsRelevant:(id)arg1;
- (_Bool)nodeIsAvailable:(id)arg1 error:(id *)arg2;
- (void)evaluateAvailabilityOfNodesWithChangedNode:(id)arg1;
- (void)evaluateAvailabilityOfNodesIfNeeded;
- (void)notifyTargets;
- (id)selectorSetForTarget:(id)arg1;
- (void)addResource:(id)arg1 withRequiredResources:(id)arg2;

@end
