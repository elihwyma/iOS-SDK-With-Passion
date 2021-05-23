/*
 Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
 */

#import <Foundation/NSObject.h>

@class NSArray, NSMutableArray, NSMutableDictionary, NSMutableSet, NSString, REElementQueue, REMLElementComparator, _RESectionDescriptor;

@protocol RESectionDelegate;

@interface RESection : NSObject

{
    _RESectionDescriptor *_descriptor;
    REElementQueue *_queue;
    NSMutableSet *_hiddenElements;
    NSMutableDictionary *_elements;
    _Bool _allowsSubsections;
    NSMutableDictionary *_subsections;
    _Bool _performingBatch;
    NSMutableArray *_batchBlocks;
    REMLElementComparator *_comparator;
    id <RESectionDelegate> _delegate;
}

@property (copy, nonatomic) REMLElementComparator *comparator;
@property (nonatomic, readonly) NSString *name;
@property (weak, nonatomic) id <RESectionDelegate> delegate;
@property (nonatomic, readonly) long long count;
@property (nonatomic, readonly) long long visibleCount;
@property (nonatomic) long long maximumElements;
@property (nonatomic, readonly) NSArray *allElements;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSArray *elements;

- (void)performBatchUpdates:(CDUnknownBlockType)arg1;
- (void)_removeSection:(id)arg1;
- (long long)_compareElement:(id)arg1 toElement:(id)arg2 level:(unsigned long long)arg3;
- (void)removeElementWithId:(id)arg1;
- (void)addElement:(id)arg1 forceHidden:(_Bool)arg2;
- (id)elementIdAtIndex:(unsigned long long)arg1;
- (id)section:(id)arg1 groupForIdentifier:(id)arg2;
- (id)_groupForIdentifier:(id)arg1;
- (id)initWithSectionDescriptor:(id)arg1 comparator:(id)arg2;
- (void)_addElement:(id)arg1 forceHidden:(_Bool)arg2;
- (void)_performOrEnqueueBlock:(CDUnknownBlockType)arg1;
- (id)_groupIdentifierForElement:(id)arg1;
- (id)_createSectionForGroup:(id)arg1;
- (void)_removeElementWithId:(id)arg1;
- (void)_updateElementWithId:(id)arg1 withNewFeatureSet:(id)arg2 forceHidden:(_Bool)arg3;
- (void)updateElementWithId:(id)arg1 withNewFeatureSet:(id)arg2 forceHidden:(_Bool)arg3;
- (void)sectionDidUpdateContentOrder:(id)arg1;
- (long long)indexOfElementWithId:(id)arg1;
- (_Bool)containsElementWithId:(id)arg1;
- (long long)_mappedIndexFromIndex:(long long)arg1;

@end
