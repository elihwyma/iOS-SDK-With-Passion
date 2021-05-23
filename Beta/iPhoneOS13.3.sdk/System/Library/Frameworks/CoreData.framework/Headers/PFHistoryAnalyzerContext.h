/*
 Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <Foundation/NSObject.h>

@class NSArray, NSMutableDictionary, NSMutableSet, NSPersistentHistoryToken, NSSet, PFHistoryAnalyzerOptions;

__attribute__((visibility("hidden")))
@interface PFHistoryAnalyzerContext : NSObject

{
    NSMutableDictionary *_objectIDToState;
    NSMutableSet *_processedTransactionIDs;
    NSArray *_sortedStates;
    _Bool _isFinished;
    NSPersistentHistoryToken *_finalHistoryToken;
    PFHistoryAnalyzerOptions *_options;
}

@property (nonatomic, readonly) PFHistoryAnalyzerOptions *options;
@property (nonatomic, readonly) NSSet *processedTransactionIDs;
@property (nonatomic, readonly) NSPersistentHistoryToken *finalHistoryToken;
@property (nonatomic, readonly) _Bool isFinished;

- (void)dealloc;
- (id)initWithOptions:(id)arg1;
- (_Bool)reset:(id *)arg1;
- (_Bool)resetStateForObjectID:(id)arg1 error:(id *)arg2;
- (_Bool)processChange:(id)arg1 error:(id *)arg2;
- (id)analyzerStateForChangedObjectID:(id)arg1 error:(id *)arg2;
- (_Bool)finishProcessing:(id *)arg1;
- (id)fetchSortedStates:(id *)arg1;
- (id)newAnalyzerStateForChange:(id)arg1 error:(id *)arg2;
- (_Bool)processTransaction:(id)arg1 error:(id *)arg2;
- (_Bool)shouldPruneAnalyzerState:(id)arg1;
- (void)processFinalState:(id)arg1;

@end
