/*
 Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

#import <ITMLKit/IKJSObject.h>

@interface IKDOMXPathExpression : IKJSObject

{
    CDUnknownBlockType _evaluatingBlock;
}

@property (copy, nonatomic) CDUnknownBlockType evaluatingBlock;

- (id)evaluate:(id)arg1:(long long)arg2:(id)arg3;
- (id)initWithAppContext:(id)arg1 evaluatingBlock:(CDUnknownBlockType)arg2;

@end
