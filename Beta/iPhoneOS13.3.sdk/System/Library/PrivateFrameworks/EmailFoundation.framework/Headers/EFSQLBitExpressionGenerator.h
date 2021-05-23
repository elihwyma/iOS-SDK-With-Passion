/*
 Image: /System/Library/PrivateFrameworks/EmailFoundation.framework/EmailFoundation
 */

#import <EmailFoundation/EFSQLExpressionGenerator.h>

@protocol EFSQLExpressable;

@interface EFSQLBitExpressionGenerator : EFSQLExpressionGenerator

{
    id <EFSQLExpressable> _bitExpression;
}

@property (nonatomic, readonly) id <EFSQLExpressable> bitExpression;

- (id)initWithTableRelationship:(id)arg1 whereExpression:(id)arg2 previousExpressionGenerator:(id)arg3 bitExpression:(id)arg4;
- (void)bitExpressionWithKeyColumn:(id)arg1;

@end
