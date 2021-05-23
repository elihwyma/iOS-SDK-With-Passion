/*
 Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

#import <ITMLKit/IKJSObject.h>

@interface IKDOMLSParser : IKJSObject

@property (readonly, getter=appendAsChildrenAction) long long ACTION_APPEND_AS_CHILDREN;
@property (readonly, getter=replaceChildrenAction) long long ACTION_REPLACE_CHILDREN;
@property (readonly, getter=insertBeforeAction) long long ACTION_INSERT_BEFORE;
@property (readonly, getter=insertAfterAction) long long ACTION_INSERT_AFTER;
@property (readonly, getter=replaceAction) long long ACTION_REPLACE;

+ (id)_dataFromInput:(id)arg1;

- (id)parse:(id)arg1;
- (id)parseWithContext:(id)arg1:(id)arg2:(long long)arg3;

@end
