/*
 Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <CoreData/NSSQLIntermediate.h>

__attribute__((visibility("hidden")))
@interface NSSQLOffsetIntermediate : NSSQLIntermediate

{
    unsigned long long _offset;
}

- (id)generateSQLStringInContext:(id)arg1;
- (id)initWithOffset:(unsigned long long)arg1 inScope:(id)arg2;

@end
