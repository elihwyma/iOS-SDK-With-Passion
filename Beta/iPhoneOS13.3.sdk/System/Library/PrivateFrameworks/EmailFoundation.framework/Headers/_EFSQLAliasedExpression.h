/*
 Image: /System/Library/PrivateFrameworks/EmailFoundation.framework/EmailFoundation
 */

#import <Foundation/NSObject.h>

#import <EmailFoundation/Swift-Protocol.h>

@class NSString;

@protocol EFSQLExpressable;

@interface _EFSQLAliasedExpression : NSObject <Swift>

{
    id <EFSQLExpressable> _expression;
    NSString *_alias;
}

@property (nonatomic, readonly) id <EFSQLExpressable> expression;
@property (copy, nonatomic, readonly) NSString *alias;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic, readonly) NSString *ef_SQLExpression;

- (id)initWithExpression:(id)arg1 alias:(id)arg2;

@end
