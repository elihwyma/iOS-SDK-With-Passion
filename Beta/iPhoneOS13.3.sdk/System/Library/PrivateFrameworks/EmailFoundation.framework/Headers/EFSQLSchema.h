/*
 Image: /System/Library/PrivateFrameworks/EmailFoundation.framework/EmailFoundation
 */

#import <Foundation/NSObject.h>

@class NSArray, NSDictionary;

@interface EFSQLSchema : NSObject

{
    NSDictionary *_tablesByName;
}

@property (copy, nonatomic, readonly) NSArray *tables;

- (id)description;
- (id)initWithTables:(id)arg1;
- (id)definitionWithDatabaseName:(id)arg1 includeIndexes:(_Bool)arg2;
- (id)definitionWithDatabaseName:(id)arg1;
- (id)indexDefinitionsWithDatabaseName:(id)arg1;
- (id)tableForName:(id)arg1;

@end
