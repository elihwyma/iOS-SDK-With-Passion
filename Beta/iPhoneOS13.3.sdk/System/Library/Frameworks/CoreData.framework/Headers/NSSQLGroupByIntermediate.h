/*
 Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <CoreData/NSSQLIntermediate.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface NSSQLGroupByIntermediate : NSSQLIntermediate

{
    NSArray *_properties;
}

- (void)dealloc;
- (id)generateSQLStringInContext:(id)arg1;
- (id)initWithProperties:(id)arg1 inScope:(id)arg2;

@end
