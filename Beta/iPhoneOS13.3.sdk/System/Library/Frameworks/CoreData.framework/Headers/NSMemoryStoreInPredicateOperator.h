/*
 Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <Foundation/NSInPredicateOperator.h>

@class NSManagedObjectContext;

__attribute__((visibility("hidden")))
@interface NSMemoryStoreInPredicateOperator : NSInPredicateOperator

{
    NSManagedObjectContext *_context;
}

- (void)dealloc;
- (_Bool)performPrimitiveOperationUsingObject:(id)arg1 andObject:(id)arg2;
- (void)setContext:(id)arg1;

@end
