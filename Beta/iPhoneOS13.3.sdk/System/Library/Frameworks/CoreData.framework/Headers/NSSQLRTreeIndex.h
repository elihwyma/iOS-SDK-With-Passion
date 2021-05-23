/*
 Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <CoreData/NSSQLIndex.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface NSSQLRTreeIndex : NSSQLIndex

{
    NSString *_tableName;
}

@property (retain, nonatomic, readonly) NSString *tableName;

- (void)dealloc;
- (id)initForIndexDescription:(id)arg1 sqlEntity:(id)arg2;
- (void)generateSQLStrings;
- (id)generateStatementsForStore:(id)arg1;
- (id)dropStatementsForStore:(id)arg1;
- (id)bulkUpdateStatementsForStore:(id)arg1;

@end
