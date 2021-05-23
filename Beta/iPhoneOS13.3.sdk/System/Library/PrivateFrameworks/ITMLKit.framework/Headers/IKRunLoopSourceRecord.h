/*
 Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

#import <Foundation/NSObject.h>

@interface IKRunLoopSourceRecord : NSObject

{
    CDUnknownBlockType _evaluateBlock;
    CDUnknownBlockType _completionBlock;
}

@property (copy, nonatomic) CDUnknownBlockType evaluateBlock;
@property (copy, nonatomic) CDUnknownBlockType completionBlock;

- (id)initWithEvaluateBlock:(CDUnknownBlockType)arg1 completionBlock:(CDUnknownBlockType)arg2;

@end
