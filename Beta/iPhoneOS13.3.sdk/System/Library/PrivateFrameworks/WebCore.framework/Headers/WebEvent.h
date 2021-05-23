/*
 Image: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

#import <NSObject.h>

@class NSArray, NSString;

@interface WebEvent : NSObject

{
    int _type;
    double _timestamp;
    struct CGPoint _locationInWindow;
    NSString *_characters;
    NSString *_charactersIgnoringModifiers;
    unsigned int _modifierFlags;
    _Bool _keyRepeating;
    unsigned long long _keyboardFlags;
    NSString *_inputManagerHint;
    unsigned short _keyCode;
    _Bool _tabKey;
    float _deltaX;
    float _deltaY;
    unsigned int _touchCount;
    NSArray *_touchLocations;
    NSArray *_touchIdentifiers;
    NSArray *_touchPhases;
    _Bool _isGesture;
    float _gestureScale;
    float _gestureRotation;
    _Bool _wasHandled;
}

@property (nonatomic, readonly) int type;
@property (nonatomic, readonly) double timestamp;
@property (nonatomic, readonly) struct CGPoint locationInWindow;
@property (retain, nonatomic, readonly) NSString *characters;
@property (retain, nonatomic, readonly) NSString *charactersIgnoringModifiers;
@property (nonatomic, readonly) unsigned int modifierFlags;
@property (nonatomic, readonly, getter=isKeyRepeating) _Bool keyRepeating;
@property (retain, nonatomic, readonly) NSString *inputManagerHint;
@property (nonatomic, readonly) unsigned long long keyboardFlags;
@property (nonatomic, readonly) unsigned short keyCode;
@property (nonatomic, readonly, getter=isTabKey) _Bool tabKey;
@property (nonatomic, readonly) float deltaX;
@property (nonatomic, readonly) float deltaY;
@property (nonatomic, readonly) unsigned int touchCount;
@property (retain, nonatomic, readonly) NSArray *touchLocations;
@property (retain, nonatomic, readonly) NSArray *touchIdentifiers;
@property (retain, nonatomic, readonly) NSArray *touchPhases;
@property (nonatomic, readonly) _Bool isGesture;
@property (nonatomic, readonly) float gestureScale;
@property (nonatomic, readonly) float gestureRotation;
@property (nonatomic) _Bool wasHandled;

+ (unsigned int)modifierFlags;

- (void)dealloc;
- (id)description;
- (id)initWithKeyEventType:(int)arg1 timeStamp:(double)arg2 characters:(id)arg3 charactersIgnoringModifiers:(id)arg4 modifiers:(unsigned int)arg5 isRepeating:(_Bool)arg6 withFlags:(unsigned long long)arg7 withInputManagerHint:(id)arg8 keyCode:(unsigned short)arg9 isTabKey:(_Bool)arg10;
- (id)_typeDescription;
- (id)initWithTouchEventType:(int)arg1 timeStamp:(double)arg2 location:(struct CGPoint)arg3 modifiers:(unsigned int)arg4 touchCount:(unsigned int)arg5 touchLocations:(id)arg6 touchIdentifiers:(id)arg7 touchPhases:(id)arg8 isGesture:(_Bool)arg9 gestureScale:(float)arg10 gestureRotation:(float)arg11;
- (id)initWithMouseEventType:(int)arg1 timeStamp:(double)arg2 location:(struct CGPoint)arg3 modifiers:(unsigned int)arg4;
- (id)initWithMouseEventType:(int)arg1 timeStamp:(double)arg2 location:(struct CGPoint)arg3;
- (id)initWithScrollWheelEventWithTimeStamp:(double)arg1 location:(struct CGPoint)arg2 deltaX:(float)arg3 deltaY:(float)arg4;
- (id)_touchPhaseDescription:(int)arg1;
- (id)_touchLocationsDescription:(id)arg1;
- (id)_touchIdentifiersDescription;
- (id)_touchPhasesDescription;
- (id)_eventDescription;
- (id)_modiferFlagsDescription;

@end
