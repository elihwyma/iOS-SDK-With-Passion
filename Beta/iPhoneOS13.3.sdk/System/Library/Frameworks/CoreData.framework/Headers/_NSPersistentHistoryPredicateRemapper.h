/*
 Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <Foundation/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _NSPersistentHistoryPredicateRemapper : NSObject

{
    NSString *_storeID;
}

+ (id)defaultInstance;

- (void)dealloc;
- (void)visitPredicate:(id)arg1;
- (void)visitPredicateExpression:(id)arg1;
- (id)createPredicateForFetchFromPredicate:(id)arg1;
- (id)initWithStoreIdentifier:(id)arg1;
- (id)createPredicateForFetchFromPredicate:(id)arg1 withContext:(id)arg2;
- (id)replacementValueForValue:(id)arg1;
- (id)replacementValueForKeyPath:(id)arg1;

@end
