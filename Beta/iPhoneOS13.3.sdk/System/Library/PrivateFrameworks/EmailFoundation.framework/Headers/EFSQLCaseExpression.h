/*
 Image: /System/Library/PrivateFrameworks/EmailFoundation.framework/EmailFoundation
 */

#import <Foundation/NSObject.h>

#import <EmailFoundation/Swift-Protocol.h>

@class NSMapTable, NSString;

@protocol EFSQLExpressable;

@interface EFSQLCaseExpression : NSObject <Swift>

{
    id <EFSQLExpressable> _elseExpression;
    id <EFSQLExpressable> _baseExpression;
    NSMapTable *_whenExpressions;
}

@property (nonatomic, readonly) id <EFSQLExpressable> baseExpression;
@property (nonatomic, readonly) NSMapTable *whenExpressions;
@property (retain, nonatomic) id <EFSQLExpressable> elseExpression;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic, readonly) NSString *ef_SQLExpression;

- (id)init;
- (id)objectForKeyedSubscript:(id)arg1;
- (void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;
- (id)initWithBaseExpression:(id)arg1;

@end
