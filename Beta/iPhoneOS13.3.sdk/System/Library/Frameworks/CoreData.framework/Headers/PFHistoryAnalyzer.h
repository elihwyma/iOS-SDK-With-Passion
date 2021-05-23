/*
 Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <Foundation/NSObject.h>

@class PFHistoryAnalyzerOptions;

__attribute__((visibility("hidden")))
@interface PFHistoryAnalyzer : NSObject

{
    PFHistoryAnalyzerOptions *_options;
}

@property (copy, nonatomic, readonly) PFHistoryAnalyzerOptions *options;

- (id)init;
- (void)dealloc;
- (id)initWithOptions:(id)arg1;
- (_Bool)processTransaction:(id)arg1 withContext:(id)arg2 error:(id *)arg3;
- (id)instantiateNewAnalyzerContext;
- (id)newAnalyzerContextForStore:(id)arg1 sinceLastHistoryToken:(id)arg2 inManagedObjectContext:(id)arg3 error:(id *)arg4;

@end
