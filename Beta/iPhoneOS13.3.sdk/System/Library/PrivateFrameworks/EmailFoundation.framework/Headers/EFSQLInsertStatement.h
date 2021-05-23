/*
 Image: /System/Library/PrivateFrameworks/EmailFoundation.framework/EmailFoundation
 */

#import <Foundation/NSObject.h>

@class NSMutableArray, NSMutableOrderedSet, NSString;

@interface EFSQLInsertStatement : NSObject

{
    NSString *_table;
    unsigned long long _conflictResolution;
    NSMutableArray *_values;
    NSMutableOrderedSet *_requiredColumns;
}

@property (retain, nonatomic) NSString *table;
@property (nonatomic, readonly) unsigned long long conflictResolution;
@property (retain, nonatomic) NSMutableArray *values;
@property (retain, nonatomic) NSMutableOrderedSet *requiredColumns;
@property (nonatomic, readonly) _Bool isEmpty;
@property (copy, nonatomic, readonly) NSString *queryString;
@property (copy, nonatomic, readonly) NSString *queryStringForNamedBindings;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)objectForKeyedSubscript:(id)arg1;
- (void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;
- (id)initWithTable:(id)arg1;
- (id)addValue;
- (id)initWithTable:(id)arg1 conflictResolution:(unsigned long long)arg2;
- (id)_queryStringForNamedBindings:(_Bool)arg1;
- (id)_valuesForNamedBindings:(_Bool)arg1;
- (void)enumerateBindingIndicesAndValuesUsingBlock:(CDUnknownBlockType)arg1;
- (void)enumerateBindingNamesAndValuesUsingBlock:(CDUnknownBlockType)arg1;

@end
