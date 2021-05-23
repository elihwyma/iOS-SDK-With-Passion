/*
 Image: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
 */

#import <NSObject.h>

@class NSMutableArray, NSMutableDictionary, NSNumber, NSURLSessionTaskDependencyDescription;

@interface __NSCFURLSessionTaskDependencyTreeNode : NSObject

{
    NSURLSessionTaskDependencyDescription *dependencyDescription;
    NSMutableArray *children;
    NSMutableArray *childrenResourceIdentifiers;
    NSNumber *rootParentStreamID;
    NSMutableDictionary *_dependentToParentStreamIDs;
    NSMutableDictionary *_parentToParentStreamIDs;
}

@property (retain, nonatomic) NSURLSessionTaskDependencyDescription *dependencyDescription;
@property (retain, nonatomic) NSMutableArray *children;
@property (retain, nonatomic) NSMutableArray *childrenResourceIdentifiers;
@property (retain, nonatomic) NSNumber *rootParentStreamID;
@property (retain, nonatomic) NSMutableDictionary *_dependentToParentStreamIDs;
@property (retain, nonatomic) NSMutableDictionary *_parentToParentStreamIDs;

- (id)init;
- (void)dealloc;
- (void)buildTree:(id)arg1 parentsToDependencies:(id)arg2 parentsToChildren:(id)arg3;
- (void)makePriorityInfoStartingFromStreamID:(int *)arg1 parentStream:(int)arg2 priorityInfo:(id)arg3 dependentToParentStreamIDs:(id)arg4 parentToParentStreamIDs:(id)arg5;
- (id)makePriorityInfoStartingFromStreamID:(int *)arg1;

@end
