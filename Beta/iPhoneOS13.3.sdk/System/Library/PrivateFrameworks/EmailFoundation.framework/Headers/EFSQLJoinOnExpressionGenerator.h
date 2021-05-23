/*
 Image: /System/Library/PrivateFrameworks/EmailFoundation.framework/EmailFoundation
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface EFSQLJoinOnExpressionGenerator : NSObject

{
    NSString *_table;
    NSString *_tableAlias;
    NSString *_columns;
}

@property (nonatomic, readonly) NSString *table;
@property (nonatomic, readonly) NSString *tableAlias;
@property (nonatomic, readonly) NSString *columns;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithTable:(id)arg1 tableAlias:(id)arg2 columns:(id)arg3;
- (_Bool)isEqualToJoinOnExpressonGenerator:(id)arg1;
- (id)joinOnExpression;

@end
