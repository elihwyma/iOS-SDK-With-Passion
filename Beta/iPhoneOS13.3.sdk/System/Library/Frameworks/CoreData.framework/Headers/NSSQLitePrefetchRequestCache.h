/*
 Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <Foundation/NSObject.h>

@class NSSQLCore;

__attribute__((visibility("hidden")))
@interface NSSQLitePrefetchRequestCache : NSObject

{
    NSSQLCore *_sqlCore;
    unsigned long long _length;
    id *_prefetchRequestsByEntity;
}

- (void)dealloc;
- (id)inverseIsToOnePrefetchRequestForRelationshipNamed:(id)arg1 onEntity:(id)arg2;
- (id)manyToOnePrefetchRequestForRelationshipNamed:(id)arg1 onEntity:(id)arg2;
- (id)manyToManyPrefetchRequestsForRelationshipNamed:(id)arg1 onEntity:(id)arg2;
- (id)initWithSQLCore:(id)arg1;

@end
