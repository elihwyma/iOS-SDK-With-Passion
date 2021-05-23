/*
 Image: /System/Library/PrivateFrameworks/EmailFoundation.framework/EmailFoundation
 */

#import <EmailFoundation/EFSQLColumnExpression.h>

#import <EmailFoundation/Swift-Protocol.h>

@class NSString;

@interface EFSQLDisqualifiedColumnExpression : EFSQLColumnExpression <Swift>

{
    EFSQLColumnExpression *_columnExpression;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) EFSQLColumnExpression *columnExpression;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic, readonly) NSString *ef_SQLExpression;

- (_Bool)isEqual:(id)arg1;
- (id)cachedSelf;

@end
