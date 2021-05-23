/*
 Image: /System/Library/PrivateFrameworks/EmailFoundation.framework/EmailFoundation
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol EFSQLExpressable;

@interface EFSQLIndexedColumnSchema : NSObject

{
    id <EFSQLExpressable> _expression;
    unsigned long long _collation;
    unsigned long long _orderDirection;
}

@property (nonatomic, readonly) id <EFSQLExpressable> expression;
@property (nonatomic, readonly) unsigned long long collation;
@property (nonatomic, readonly) unsigned long long orderDirection;
@property (copy, nonatomic, readonly) NSString *name;
@property (copy, nonatomic, readonly) NSString *definition;

- (id)initWithExpression:(id)arg1;
- (id)initWithColumnName:(id)arg1;
- (id)initWithColumnName:(id)arg1 orderDirection:(unsigned long long)arg2;
- (id)initWithExpression:(id)arg1 collation:(unsigned long long)arg2 orderDirection:(unsigned long long)arg3;
- (id)initWithExpression:(id)arg1 orderDirection:(unsigned long long)arg2;
- (id)initWithColumnName:(id)arg1 collation:(unsigned long long)arg2 orderDirection:(unsigned long long)arg3;

@end
