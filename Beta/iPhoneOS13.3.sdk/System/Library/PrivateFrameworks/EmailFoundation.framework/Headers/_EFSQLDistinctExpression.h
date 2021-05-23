/*
 Image: /System/Library/PrivateFrameworks/EmailFoundation.framework/EmailFoundation
 */

#import <Foundation/NSObject.h>

#import <EmailFoundation/Swift-Protocol.h>

@class NSString;

@protocol EFSQLExpressable;

@interface _EFSQLDistinctExpression : NSObject <Swift>

{
    id <EFSQLExpressable> _expression;
}

@property (nonatomic, readonly) id <EFSQLExpressable> expression;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic, readonly) NSString *ef_SQLExpression;

- (id)initWithExpression:(id)arg1;

@end
