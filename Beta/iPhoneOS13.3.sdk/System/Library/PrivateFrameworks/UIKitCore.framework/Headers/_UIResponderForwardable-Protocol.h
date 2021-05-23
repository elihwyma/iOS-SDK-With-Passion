/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/Swift-Protocol.h>

@class UIResponder, UIWindow;

@protocol _UIResponderForwardable <Swift>

@property (nonatomic, setter=_setForwardablePhase:) long long _forwardablePhase;
@property (retain, nonatomic, setter=_setResponder:) UIResponder *_responder;
@property (nonatomic, readonly) UIWindow *window;

- (unsigned short)gestureRecognizers;
- (unsigned short)_forwardingRecord;
- (unsigned short)_responderSelectorForPhase: /* Error: Ran out of types for this method. */;
- (unsigned short)_wantsForwardingFromResponder:toNextResponder:withEvent: /* Error: Ran out of types for this method. */;
- (unsigned short)_isAbandoningForwardingRecord;
- (unsigned short)_abandonForwardingRecord;
- (unsigned short)_mutableForwardingRecord;

@end
