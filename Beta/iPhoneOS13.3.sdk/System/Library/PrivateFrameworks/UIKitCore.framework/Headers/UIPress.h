/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSArray, NSMutableArray, NSString, UIResponder, UIWindow;

@interface UIPress : NSObject

{
    NSMutableArray *_gestureRecognizers;
    NSMutableArray *_forwardingRecord;
    _Bool _abandonForwardingRecord;
    _Bool _isDelayed;
    _Bool _sentPressesEnded;
    _Bool _longClick;
    unsigned int _contextID;
    double _timestamp;
    long long _phase;
    long long _type;
    UIWindow *_window;
    UIResponder *_responder;
    double _force;
    unsigned long long _source;
    unsigned long long _gameControllerComponent;
    unsigned long long _clickCount;
}

@property (nonatomic) double timestamp;
@property (nonatomic) long long phase;
@property (nonatomic) long long type;
@property (retain, nonatomic) UIWindow *window;
@property (retain, nonatomic) UIResponder *responder;
@property (copy, nonatomic) NSArray *gestureRecognizers;
@property (nonatomic) double force;
@property (nonatomic, getter=_source, setter=_setSource:) unsigned long long source;
@property (nonatomic, getter=_gameControllerComponent, setter=_setGameControllerComponent:) unsigned long long gameControllerComponent;
@property (nonatomic, readonly) unsigned int contextID;
@property (nonatomic) _Bool isDelayed;
@property (nonatomic) _Bool sentPressesEnded;
@property (nonatomic) unsigned long long clickCount;
@property (nonatomic, getter=isLongClick) _Bool longClick;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, setter=_setForwardablePhase:) long long _forwardablePhase;
@property (retain, nonatomic, setter=_setResponder:) UIResponder *_responder;

- (_Bool)_isSynthetic;
- (id)_phaseDescription;
- (void)_loadStateFromPress:(id)arg1;
- (void)_removeGestureRecognizer:(id)arg1;
- (void)_loadStateFromPressInfo:(id)arg1;
- (id)_forwardingRecord;
- (SEL)_responderSelectorForPhase:(long long)arg1;
- (_Bool)_wantsForwardingFromResponder:(id)arg1 toNextResponder:(id)arg2 withEvent:(id)arg3;
- (_Bool)_isDirectionalPress;
- (_Bool)_isAbandoningForwardingRecord;
- (void)_abandonForwardingRecord;
- (id)_mutableForwardingRecord;

@end
