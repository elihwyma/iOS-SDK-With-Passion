/*
 Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <CoreData/NSSQLFetchRequestContext.h>

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface NSSQLObjectIDSetFetchRequestContext : NSSQLFetchRequestContext

{
    NSArray *_idSets;
    NSString *_columnName;
}

- (void)dealloc;
- (_Bool)executeRequestCore:(id *)arg1;
- (void)executeEpilogue;
- (id)initWithRequest:(id)arg1 context:(id)arg2 sqlCore:(id)arg3 idSets:(id)arg4 columnName:(id)arg5;

@end
