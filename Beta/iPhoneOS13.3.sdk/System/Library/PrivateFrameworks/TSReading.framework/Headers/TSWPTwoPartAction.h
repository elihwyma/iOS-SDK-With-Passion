/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <Foundation/NSObject.h>

@interface TSWPTwoPartAction : NSObject

{
    CDUnknownBlockType _startAction;
    CDUnknownBlockType _cancelAction;
    CDUnknownBlockType _finishAction;
    _Bool _performImmediately;
}

@property _Bool performImmediately;

+ (id)actionWithStartAction:(CDUnknownBlockType)arg1 cancelAction:(CDUnknownBlockType)arg2 finishAction:(CDUnknownBlockType)arg3;

- (void)dealloc;
- (void)cancel;
- (id)initWithStartAction:(CDUnknownBlockType)arg1 cancelAction:(CDUnknownBlockType)arg2 finishAction:(CDUnknownBlockType)arg3;
- (void)performStartAction;
- (void)performFinishAction;

@end
