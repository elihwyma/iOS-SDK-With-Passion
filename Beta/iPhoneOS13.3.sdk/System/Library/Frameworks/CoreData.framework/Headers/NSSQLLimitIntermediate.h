/*
 Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <CoreData/NSSQLIntermediate.h>

__attribute__((visibility("hidden")))
@interface NSSQLLimitIntermediate : NSSQLIntermediate

{
    unsigned long long _limit;
}

- (id)generateSQLStringInContext:(id)arg1;
- (id)initWithLimit:(unsigned long long)arg1 inScope:(id)arg2;

@end
