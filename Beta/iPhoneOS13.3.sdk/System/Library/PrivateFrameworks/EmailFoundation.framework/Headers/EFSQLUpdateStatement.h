/*
 Image: /System/Library/PrivateFrameworks/EmailFoundation.framework/EmailFoundation
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSString;

@protocol EFSQLExpressable;

@interface EFSQLUpdateStatement : NSObject

{
    id <EFSQLExpressable> _whereClause;
    NSMutableDictionary *_bindables;
    NSMutableDictionary *_expressables;
    NSString *_table;
    unsigned long long _conflictResolution;
}

@property (retain, nonatomic) NSMutableDictionary *bindables;
@property (retain, nonatomic) NSMutableDictionary *expressables;
@property (retain, nonatomic) NSString *table;
@property (nonatomic, readonly) unsigned long long conflictResolution;
@property (copy, nonatomic, readonly) NSString *queryString;
@property (retain, nonatomic) id <EFSQLExpressable> whereClause;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)objectForKeyedSubscript:(id)arg1;
- (void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;
- (id)initWithTable:(id)arg1;
- (id)initWithTable:(id)arg1 conflictResolution:(unsigned long long)arg2;
- (void)enumerateBindingNamesAndValuesUsingBlock:(CDUnknownBlockType)arg1;
- (id)_queryStringForUpsert:(_Bool)arg1;
- (id)queryStringForUpsert;

@end
