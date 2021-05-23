/*
 Image: /System/Library/PrivateFrameworks/EmailFoundation.framework/EmailFoundation
 */

#import <Foundation/NSObject.h>

@class EFSQLColumnSchema, EFSQLTableSchema, NSArray, NSDictionary, NSString;

@protocol EFSQLExpressable;

@interface EFSQLObjectPropertyMapper : NSObject

{
    _Bool _isPlaceholder;
    NSDictionary *_children;
    EFSQLTableSchema *_table;
    EFSQLColumnSchema *_sourceColumn;
    id <EFSQLExpressable> _condition;
    NSArray *_additionalColumns;
    id <EFSQLExpressable> _bitExpression;
}

@property (nonatomic, readonly) EFSQLTableSchema *table;
@property (nonatomic, readonly) EFSQLColumnSchema *sourceColumn;
@property (nonatomic, readonly) id <EFSQLExpressable> condition;
@property (nonatomic, readonly) NSArray *additionalColumns;
@property (nonatomic) _Bool isPlaceholder;
@property (nonatomic, readonly) id <EFSQLExpressable> bitExpression;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic) NSDictionary *children;

- (id)childForKey:(id)arg1;
- (id)initWithChildren:(id)arg1 table:(id)arg2 condition:(id)arg3 additionalColumns:(id)arg4;
- (id)initWithChildren:(id)arg1 sourceColumn:(id)arg2 condition:(id)arg3;
- (id)initWithChildren:(id)arg1 sourceColumn:(id)arg2 condition:(id)arg3 additionalColumns:(id)arg4;
- (id)initWithColumn:(id)arg1 condition:(id)arg2;
- (id)initWithColumn:(id)arg1 condition:(id)arg2 additionalColumns:(id)arg3 bitExpression:(id)arg4;
- (id)initWithChildren:(id)arg1 table:(id)arg2;
- (id)initWithChildren:(id)arg1 table:(id)arg2 additionalColumns:(id)arg3;
- (id)initWithChildren:(id)arg1 table:(id)arg2 condition:(id)arg3;
- (id)initWithChildren:(id)arg1 sourceColumn:(id)arg2;
- (id)initWithChildren:(id)arg1 sourceColumn:(id)arg2 additionalColumns:(id)arg3;
- (id)initWithColumn:(id)arg1;
- (id)initWithColumn:(id)arg1 bitExpression:(id)arg2;
- (id)initWithColumn:(id)arg1 additionalColumns:(id)arg2;
- (id)initPlaceholderMapperWithChildren:(id)arg1;

@end
