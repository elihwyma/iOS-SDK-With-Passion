/*
 Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

#import <ITMLKit/Swift-Protocol.h>

@protocol IKJSDOMLSParser <Swift>

@property (readonly, getter=appendAsChildrenAction) long long ACTION_APPEND_AS_CHILDREN;
@property (readonly, getter=replaceChildrenAction) long long ACTION_REPLACE_CHILDREN;
@property (readonly, getter=insertBeforeAction) long long ACTION_INSERT_BEFORE;
@property (readonly, getter=insertAfterAction) long long ACTION_INSERT_AFTER;
@property (readonly, getter=replaceAction) long long ACTION_REPLACE;

- (unsigned short)parse: /* Error: Ran out of types for this method. */;
- (unsigned short)parseWithContext::: /* Error: Ran out of types for this method. */;

@end
