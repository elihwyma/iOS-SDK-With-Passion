/*
 Image: /System/Library/PrivateFrameworks/EmailFoundation.framework/EmailFoundation
 */

#import <Foundation/NSObject.h>

#import <EmailFoundation/Swift-Protocol.h>

@class NSString;

@protocol EFSQLExpressable;

@interface _EFSQLOrderExpression : NSObject <Swift>

{
    _Bool _isAscending;
    id <EFSQLExpressable> _expression;
}

@property (nonatomic, readonly) id <EFSQLExpressable> expression;
@property (nonatomic, readonly) _Bool isAscending;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic, readonly) NSString *ef_SQLExpression;

- (id)initWithExpression:(id)arg1 ascending:(_Bool)arg2;

@end
