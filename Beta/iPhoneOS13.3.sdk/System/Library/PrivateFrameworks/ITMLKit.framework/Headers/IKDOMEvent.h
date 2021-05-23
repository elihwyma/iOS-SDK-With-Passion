/*
 Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

#import <ITMLKit/IKJSObject.h>

#import <ITMLKit/Swift-Protocol.h>

@class IKDOMNode, NSDate, NSString;

@interface IKDOMEvent : IKJSObject <Swift>

{
    _Bool _bubbles;
    _Bool _cancelable;
    _Bool _inUse;
    _Bool _defaultPrevented;
    NSString *_type;
    IKDOMNode *_target;
    NSDate *_timeStamp;
    NSString *_xmlAttribute;
    IKDOMNode *_currentTarget;
    long long _eventPhase;
    long long _dispatchState;
}

@property (retain, nonatomic) IKDOMNode *currentTarget;
@property (nonatomic) long long eventPhase;
@property (nonatomic) long long dispatchState;
@property (nonatomic) _Bool defaultPrevented;
@property (retain, nonatomic) IKDOMNode *target;
@property (retain, nonatomic, readonly) NSString *xmlAttribute;
@property (nonatomic, getter=isInUse) _Bool inUse;
@property (retain, nonatomic, readonly) NSString *type;
@property (nonatomic, readonly) _Bool bubbles;
@property (nonatomic, readonly) _Bool cancelable;
@property (nonatomic, readonly) NSDate *timeStamp;

- (void)stopPropagation;
- (void)preventDefault;
- (void)stopImmediatePropagation;
- (_Bool)isPropagationStopped;
- (void)updateDispatchStateWithCurrentTarget:(id)arg1 phase:(long long)arg2;
- (_Bool)isImmediatePropagationStopped;
- (id)initWithAppContext:(id)arg1 type:(id)arg2 xmlAttribute:(id)arg3 canBubble:(_Bool)arg4 isCancelable:(_Bool)arg5;
- (id)initWithType:(id)arg1 eventInit:(id)arg2;

@end
