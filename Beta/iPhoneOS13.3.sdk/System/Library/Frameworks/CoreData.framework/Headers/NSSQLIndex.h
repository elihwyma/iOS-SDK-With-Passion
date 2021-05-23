/*
 Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <Foundation/NSObject.h>

@class NSFetchIndexDescription, NSMutableArray, NSSQLEntity;

__attribute__((visibility("hidden")))
@interface NSSQLIndex : NSObject

{
    NSFetchIndexDescription *_indexDescription;
    NSSQLEntity *_sqlEntity;
    NSMutableArray *_createStrings;
    NSMutableArray *_dropStrings;
    NSMutableArray *_updateStrings;
}

@property (retain, nonatomic, readonly) NSFetchIndexDescription *indexDescription;
@property (nonatomic, readonly) NSSQLEntity *sqlEntity;
@property (retain, nonatomic) NSMutableArray *createTableStatements;
@property (retain, nonatomic) NSMutableArray *dropTableStatements;
@property (retain, nonatomic) NSMutableArray *updateTableStatements;

- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (id)initForIndexDescription:(id)arg1 sqlEntity:(id)arg2;
- (id)generateStatementsForStore:(id)arg1;
- (id)dropStatementsForStore:(id)arg1;
- (id)bulkUpdateStatementsForStore:(id)arg1;
- (_Bool)isUnique;

@end
