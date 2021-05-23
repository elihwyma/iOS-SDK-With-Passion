/*
 Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

#import <ITMLKit/IKDOMEvent.h>

@class IKDOMNode, IKJSObject, NSDate, NSString;

@interface IKDOMCustomEvent : IKDOMEvent

{
    IKJSObject *_detail;
}

@property (retain, nonatomic) IKJSObject *detail;
@property (retain, nonatomic, readonly) NSString *type;
@property (retain, nonatomic, readonly) IKDOMNode *target;
@property (retain, nonatomic, readonly) IKDOMNode *currentTarget;
@property (nonatomic, readonly) long long eventPhase;
@property (nonatomic, readonly) _Bool bubbles;
@property (nonatomic, readonly) _Bool cancelable;
@property (nonatomic, readonly) NSDate *timeStamp;
@property (nonatomic, readonly) _Bool defaultPrevented;

- (id)initWithAppContext:(id)arg1 type:(id)arg2 xmlAttribute:(id)arg3 canBubble:(_Bool)arg4 isCancelable:(_Bool)arg5 detail:(id)arg6;
- (id)initWithType:(id)arg1 eventInit:(id)arg2;

@end
