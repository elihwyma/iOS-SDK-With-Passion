/*
 Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <CoreData/PFHistoryAnalyzerContext.h>

@class NSManagedObjectContext, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface PFCloudKitHistoryAnalyzerContext : PFHistoryAnalyzerContext

{
    NSMutableDictionary *_objectIDToAnalyzerStateCache;
    NSManagedObjectContext *_managedObjectContext;
}

@property (nonatomic, readonly) NSManagedObjectContext *managedObjectContext;

- (void)dealloc;
- (_Bool)reset:(id *)arg1;
- (id)initWithOptions:(id)arg1 managedObjectContext:(id)arg2;
- (id)cloudKitAnalyzerOptions;
- (_Bool)resetStateForObjectID:(id)arg1 error:(id *)arg2;
- (_Bool)processChange:(id)arg1 error:(id *)arg2;
- (id)analyzerStateForChangedObjectID:(id)arg1 error:(id *)arg2;
- (_Bool)finishProcessing:(id *)arg1;
- (id)fetchSortedStates:(id *)arg1;
- (id)newAnalyzerStateForChange:(id)arg1 error:(id *)arg2;

@end
