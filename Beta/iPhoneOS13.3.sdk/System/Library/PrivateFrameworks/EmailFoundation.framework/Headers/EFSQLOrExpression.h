/*
 Image: /System/Library/PrivateFrameworks/EmailFoundation.framework/EmailFoundation
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString;

@interface EFSQLOrExpression : NSObject

{
    NSArray *_expressions;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic, readonly) NSString *ef_SQLExpression;
@property (copy, nonatomic, readonly) NSArray *expressions;

- (id)initWithExpressions:(id)arg1;

@end
