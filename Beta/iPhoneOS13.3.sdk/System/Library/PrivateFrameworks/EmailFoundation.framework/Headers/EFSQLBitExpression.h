/*
 Image: /System/Library/PrivateFrameworks/EmailFoundation.framework/EmailFoundation
 */

#import <Foundation/NSObject.h>

#import <EmailFoundation/Swift-Protocol.h>

@class NSString;

@protocol EFSQLExpressable;

@interface EFSQLBitExpression : NSObject <Swift>

{
    id <EFSQLExpressable> _left;
    id <EFSQLExpressable> _right;
    unsigned long long _bitwiseOperator;
}

@property (nonatomic, readonly) id <EFSQLExpressable> right;
@property (nonatomic, readonly) unsigned long long bitwiseOperator;
@property (retain, nonatomic) id <EFSQLExpressable> left;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic, readonly) NSString *ef_SQLExpression;

+ (id)leftShift:(id)arg1 by:(id)arg2;
+ (id)rightShift:(id)arg1 by:(id)arg2;
+ (id)and:(id)arg1 with:(id)arg2;
+ (id)or:(id)arg1 with:(id)arg2;

- (void)setColumnExpression:(id)arg1;
- (id)_stringForOperator:(unsigned long long)arg1;
- (id)initWithLeft:(id)arg1 bitwiseOperator:(unsigned long long)arg2 right:(id)arg3;

@end
