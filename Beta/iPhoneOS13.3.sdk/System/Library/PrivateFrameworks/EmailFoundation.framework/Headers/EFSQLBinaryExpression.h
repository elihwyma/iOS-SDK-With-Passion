/*
 Image: /System/Library/PrivateFrameworks/EmailFoundation.framework/EmailFoundation
 */

#import <Foundation/NSObject.h>

#import <EmailFoundation/Swift-Protocol.h>

@class NSString;

@protocol EFSQLExpressable;

@interface EFSQLBinaryExpression : NSObject <Swift>

{
    id <EFSQLExpressable> _left;
    id <EFSQLExpressable> _right;
    unsigned long long _binaryOperator;
}

@property (nonatomic, readonly) id <EFSQLExpressable> left;
@property (nonatomic, readonly) id <EFSQLExpressable> right;
@property (nonatomic, readonly) unsigned long long binaryOperator;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic, readonly) NSString *ef_SQLExpression;

- (void)setColumnExpression:(id)arg1;
- (id)_stringForOperator:(unsigned long long)arg1;
- (id)initWithLeft:(id)arg1 operator:(unsigned long long)arg2 right:(id)arg3;

@end
