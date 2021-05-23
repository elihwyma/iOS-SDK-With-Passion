/*
 Image: /System/Library/PrivateFrameworks/EmailFoundation.framework/EmailFoundation
 */

#import <Foundation/NSObject.h>

@class NSArray, NSSet;

@interface EFSQLSelectExpressionGenerator : NSObject

{
    NSArray *_columnExpressionGenerators;
    NSSet *_tableExpressionGenerators;
}

@property (nonatomic, readonly) NSArray *columnExpressionGenerators;
@property (nonatomic, readonly) NSSet *tableExpressionGenerators;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqualToSelectExpressionGenerator:(id)arg1;
- (id)initExpressionGeneratorWithColumns:(id)arg1 tables:(id)arg2;
- (id)selectExpression;
- (id)columnAliases;

@end
