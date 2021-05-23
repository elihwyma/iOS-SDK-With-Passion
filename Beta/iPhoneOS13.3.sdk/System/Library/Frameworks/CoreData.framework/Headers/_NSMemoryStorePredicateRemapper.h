/*
 Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <Foundation/NSObject.h>

@class NSManagedObjectContext;

__attribute__((visibility("hidden")))
@interface _NSMemoryStorePredicateRemapper : NSObject

{
    NSManagedObjectContext *_context;
}

+ (id)defaultInstance;

- (id)init;
- (void)dealloc;
- (void)visitPredicate:(id)arg1;
- (void)visitPredicateExpression:(id)arg1;
- (id)initWithContext:(id)arg1;
- (id)createPredicateForFetchFromPredicate:(id)arg1;
- (id)createPredicateForFetchFromPredicate:(id)arg1 withContext:(id)arg2;

@end
