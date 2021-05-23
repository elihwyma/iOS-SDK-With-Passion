/*
 Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <CoreData/PFHistoryAnalyzer.h>

@class NSManagedObjectContext;

__attribute__((visibility("hidden")))
@interface PFCloudKitHistoryAnalyzer : PFHistoryAnalyzer

{
    NSManagedObjectContext *_managedObjectContext;
}

@property (nonatomic, readonly) NSManagedObjectContext *managedObjectContext;

+ (_Bool)isPrivateTransaction:(id)arg1;
+ (_Bool)isPrivateTransactionAuthor:(id)arg1;
+ (_Bool)isPrivateContextName:(id)arg1;

- (void)dealloc;
- (id)initWithOptions:(id)arg1 managedObjectContext:(id)arg2;
- (_Bool)processTransaction:(id)arg1 withContext:(id)arg2 error:(id *)arg3;
- (id)cloudKitAnalyzerOptions;
- (id)instantiateNewAnalyzerContext;

@end
