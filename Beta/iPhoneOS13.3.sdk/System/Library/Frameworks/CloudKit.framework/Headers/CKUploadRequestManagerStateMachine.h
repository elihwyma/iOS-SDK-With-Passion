/*
 Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

#import <NSObject.h>

@class CUStateEvent, CUStateMachine;

@interface CKUploadRequestManagerStateMachine : NSObject

{
    CDUnknownBlockType _actionHandler;
    CDUnknownBlockType _enterStateHandler;
    CDUnknownBlockType _exitStateHandler;
    CUStateMachine *_stateMachine;
    CUStateEvent *_eventCausingTransition;
    CDUnknownBlockType _internalActionHandler;
}

@property (retain, nonatomic) CUStateMachine *stateMachine;
@property (retain, nonatomic) CUStateEvent *eventCausingTransition;
@property (copy, nonatomic) CDUnknownBlockType internalActionHandler;
@property (copy, nonatomic) CDUnknownBlockType actionHandler;
@property (copy, nonatomic) CDUnknownBlockType enterStateHandler;
@property (copy, nonatomic) CDUnknownBlockType exitStateHandler;

+ (id)nameFromFunction:(long long)arg1;
+ (id)nameFromResponseAction:(long long)arg1;
+ (id)nameFromStateEvent:(long long)arg1;
+ (id)nameFromState:(long long)arg1;

- (void)dealloc;
- (void)start;
- (id)createStateMachine;
- (void)dispatchEvent:(long long)arg1;
- (_Bool)canPerformFunction:(long long)arg1;
- (id)initWithActionHandler:(CDUnknownBlockType)arg1;
- (CDUnknownBlockType)eventHandlerForState:(id)arg1 withEnterBlock:(CDUnknownBlockType)arg2 exitBlock:(CDUnknownBlockType)arg3 eventBlock:(CDUnknownBlockType)arg4;
- (void)transitionToState:(id)arg1 withEvent:(id)arg2;
- (void)dispatchEvent:(long long)arg1 userInfo:(id)arg2;

@end
