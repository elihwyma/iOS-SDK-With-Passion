/*
 Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

#import <ITMLKit/Swift-Protocol.h>

@class IKDOMNode, NSDate, NSString;

@protocol IKJSDOMEvent <Swift>

@property (retain, nonatomic, readonly) NSString *type;
@property (retain, nonatomic, readonly) IKDOMNode *target;
@property (retain, nonatomic, readonly) IKDOMNode *currentTarget;
@property (nonatomic, readonly) long long eventPhase;
@property (nonatomic, readonly) _Bool bubbles;
@property (nonatomic, readonly) _Bool cancelable;
@property (nonatomic, readonly) NSDate *timeStamp;
@property (nonatomic, readonly) _Bool defaultPrevented;

- (unsigned short)stopPropagation;
- (unsigned short)preventDefault;
- (unsigned short)stopImmediatePropagation;
- (unsigned short)initWithType:eventInit: /* Error: Ran out of types for this method. */;

@end
