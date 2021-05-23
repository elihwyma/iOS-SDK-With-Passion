/*
 Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
 */

#import <Foundation/NSObject.h>

@class NSArray, NSIndexSet, WFDatabase;

@interface WFDatabaseSectionedResultsController : NSObject

{
    WFDatabase *_database;
    NSArray *_resultsControllers;
    NSIndexSet *_sections;
}

@property (nonatomic, readonly) WFDatabase *database;
@property (copy, nonatomic, readonly) NSArray *resultsControllers;
@property (copy, nonatomic, readonly) NSIndexSet *sections;

- (void)removeObserver:(id)arg1;
- (void)update;
- (void)addUpdateObserver:(id)arg1 selector:(SEL)arg2;
- (id)initWithCollections:(id)arg1 forSections:(id)arg2 database:(id)arg3 block:(CDUnknownBlockType)arg4;
- (id)resultsControllerForSection:(long long)arg1;
- (id)descriptorAtIndexPath:(id)arg1;
- (id)indexPathForDescriptor:(id)arg1;
- (void)addUpdateObserver:(id)arg1 selector:(SEL)arg2 forSection:(unsigned long long)arg3;
- (void)removeObserver:(id)arg1 forSection:(unsigned long long)arg2;

@end
