/*
 Image: /System/Library/PrivateFrameworks/EmailFoundation.framework/EmailFoundation
 */

#import <EmailFoundation/EFPair.h>

#import <EmailFoundation/Swift-Protocol.h>

@class NSString;

@protocol EFSQLExpressable;

@interface EFSQLBetweenExpression : EFPair <Swift>

{
    _Bool _between;
    id <EFSQLExpressable> _left;
}

@property (nonatomic, readonly) id <EFSQLExpressable> left;
@property (nonatomic, readonly) _Bool between;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic, readonly) NSString *ef_SQLExpression;

- (void)setColumnExpression:(id)arg1;
- (id)initWithLeft:(id)arg1 firstValue:(id)arg2 secondValue:(id)arg3 between:(_Bool)arg4;

@end
