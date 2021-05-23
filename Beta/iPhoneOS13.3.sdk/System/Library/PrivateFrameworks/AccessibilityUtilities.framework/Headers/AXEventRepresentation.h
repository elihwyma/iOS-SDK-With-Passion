/*
 Image: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
 */

#import <Foundation/NSObject.h>

@class AXEventAccelerometerInfoRepresentation, AXEventData, AXEventGameControllerInfoRepresentation, AXEventHandInfoRepresentation, AXEventIOSMACPointerInfoRepresentation, AXEventKeyInfoRepresentation, AXEventPointerInfoRepresentation, NSData, NSString;

@interface AXEventRepresentation : NSObject

{
    _Bool _isBuiltIn;
    _Bool _isDisplayIntegrated;
    _Bool _isGeneratedEvent;
    _Bool _useOriginalHIDTime;
    _Bool _redirectEvent;
    _Bool _systemDrag;
    unsigned int _type;
    unsigned int _originalType;
    int _subtype;
    int _flags;
    unsigned int _taskPort;
    int _pid;
    unsigned int _contextId;
    unsigned int _displayId;
    unsigned int _willUpdateMask;
    unsigned int _didUpdateMask;
    unsigned long long _time;
    unsigned long long _senderID;
    AXEventHandInfoRepresentation *_handInfo;
    AXEventKeyInfoRepresentation *_keyInfo;
    AXEventAccelerometerInfoRepresentation *_accelerometerInfo;
    AXEventGameControllerInfoRepresentation *_gameControllerInfo;
    AXEventPointerInfoRepresentation *_pointerControllerInfo;
    AXEventIOSMACPointerInfoRepresentation *_iosmacPointerInfo;
    NSString *_clientId;
    unsigned long long _HIDTime;
    NSData *_HIDAttributeData;
    long long _scrollAmount;
    long long _scrollAccelAmount;
    unsigned long long _additionalFlags;
    long long _generationCount;
    struct __IOHIDEvent *_creatorHIDEvent;
    struct __IOHIDServiceClient *_creatorHIDServiceClient;
    AXEventData *_accessibilityData;
    void *_window;
    NSData *_data;
    struct CGPoint _location;
    struct CGPoint _windowLocation;
}

@property (nonatomic) void *window;
@property (retain, nonatomic) NSData *data;
@property (retain, nonatomic) struct __IOHIDEvent *creatorHIDEvent;
@property (retain, nonatomic) struct __IOHIDServiceClient *creatorHIDServiceClient;
@property (nonatomic) unsigned int type;
@property (nonatomic) unsigned int originalType;
@property (nonatomic) int subtype;
@property (nonatomic) struct CGPoint location;
@property (nonatomic) struct CGPoint windowLocation;
@property (nonatomic) unsigned long long time;
@property (nonatomic) int flags;
@property (nonatomic) unsigned long long senderID;
@property (retain, nonatomic) AXEventHandInfoRepresentation *handInfo;
@property (retain, nonatomic) AXEventKeyInfoRepresentation *keyInfo;
@property (retain, nonatomic) AXEventAccelerometerInfoRepresentation *accelerometerInfo;
@property (retain, nonatomic) AXEventGameControllerInfoRepresentation *gameControllerInfo;
@property (retain, nonatomic) AXEventPointerInfoRepresentation *pointerControllerInfo;
@property (retain, nonatomic) AXEventIOSMACPointerInfoRepresentation *iosmacPointerInfo;
@property (retain, nonatomic) NSString *clientId;
@property (nonatomic) unsigned int taskPort;
@property (nonatomic) int pid;
@property (nonatomic) unsigned long long HIDTime;
@property (retain, nonatomic) NSData *HIDAttributeData;
@property (nonatomic) long long scrollAmount;
@property (nonatomic) long long scrollAccelAmount;
@property (nonatomic) unsigned long long additionalFlags;
@property (nonatomic) unsigned int contextId;
@property (nonatomic) unsigned int displayId;
@property (nonatomic) _Bool isBuiltIn;
@property (nonatomic) _Bool isDisplayIntegrated;
@property (nonatomic) long long generationCount;
@property (nonatomic) unsigned int willUpdateMask;
@property (nonatomic) unsigned int didUpdateMask;
@property (nonatomic) _Bool isGeneratedEvent;
@property (nonatomic) _Bool useOriginalHIDTime;
@property (nonatomic, readonly) _Bool isUpdate;
@property (nonatomic, readonly) _Bool willBeUpdated;
@property (nonatomic, readonly) unsigned long long fingerCount;
@property (nonatomic, readonly) _Bool isTouchDown;
@property (nonatomic, readonly) _Bool isMove;
@property (nonatomic, readonly) _Bool isChordChange;
@property (nonatomic, readonly) _Bool isLift;
@property (nonatomic, readonly) _Bool isInRange;
@property (nonatomic, readonly) _Bool isInRangeLift;
@property (nonatomic, readonly) _Bool isCancel;
@property (nonatomic, getter=isRedirectEvent) _Bool redirectEvent;
@property (nonatomic, getter=isSystemDrag) _Bool systemDrag;
@property (retain, nonatomic) AXEventData *accessibilityData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)supportsSecureCoding;
+ (id)representationWithHIDEvent:(struct __IOHIDEvent *)arg1 hidStreamIdentifier:(id)arg2 clientID:(id)arg3 taskPort:(unsigned int)arg4;
+ (id)representationWithEventRecord:(CDStruct_64a21a73 *)arg1;
+ (id)representationWithHIDEvent:(struct __IOHIDEvent *)arg1 serviceClient:(struct __IOHIDServiceClient *)arg2 hidStreamIdentifier:(id)arg3;
+ (void)_appendKeyInfoToMediaKey:(id)arg1 usage:(long long)arg2 downEvent:(_Bool)arg3;
+ (id)representationWithType:(unsigned int)arg1 subtype:(int)arg2 time:(unsigned long long)arg3 location:(struct CGPoint)arg4 windowLocation:(struct CGPoint)arg5 handInfo:(id)arg6;
+ (id)representationWithHIDEvent:(struct __IOHIDEvent *)arg1 serviceClient:(struct __IOHIDServiceClient *)arg2 hidStreamIdentifier:(id)arg3 clientID:(id)arg4 taskPort:(unsigned int)arg5;
+ (id)_digitizerRepresentation:(struct __IOHIDEvent *)arg1 hidStreamIdentifier:(id)arg2;
+ (id)_keyboardButtonEvent:(struct __IOHIDEvent *)arg1;
+ (id)_wheelEvent:(struct __IOHIDEvent *)arg1;
+ (id)_gameControllerEvent:(struct __IOHIDEvent *)arg1;
+ (id)_pointerControllerEvent:(struct __IOHIDEvent *)arg1;
+ (id)representationWithData:(id)arg1;
+ (id)cancelEventForPathIndexMask:(unsigned int)arg1;
+ (id)representationWithLocation:(struct CGPoint)arg1 windowLocation:(struct CGPoint)arg2 handInfo:(id)arg3;
+ (id)representationWithHIDEvent:(struct __IOHIDEvent *)arg1 hidStreamIdentifier:(id)arg2;
+ (id)accelerometerRepresentation:(id)arg1;
+ (id)keyRepresentationWithType:(unsigned int)arg1;
+ (id)buttonRepresentationWithType:(unsigned int)arg1;
+ (id)iosmacPointerRepresentationWithTypeWithPointerInfo:(id)arg1;
+ (id)gestureRepresentationWithHandType:(unsigned int)arg1 locations:(id)arg2;
+ (id)touchRepresentationWithHandType:(unsigned int)arg1 location:(struct CGPoint)arg2;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)dataRepresentation;
- (id)accessibilityEventRepresentationTabularDescription;
- (struct __IOHIDEvent *)newHIDEventRef;
- (CDStruct_64a21a73 *)newEventRecord;
- (_Bool)isDownEvent;
- (id)_accessibilityDataFromRealEvent:(struct __IOHIDEvent *)arg1;
- (struct __IOHIDEvent *)_newHandHIDEventRef;
- (struct __IOHIDEvent *)_newIOSMACPointerRef;
- (struct __IOHIDEvent *)_newButtonHIDEventRefWithType:(unsigned int)arg1;
- (struct __IOHIDEvent *)_newKeyboardHIDEventRef;
- (struct __IOHIDEvent *)_newAccelerometerHIDEventRef;
- (void)_applyAccessibilityDataToRealEvent:(struct __IOHIDEvent *)arg1;
- (unsigned long long)_machTimeForHIDEventRef;
- (unsigned char)screenEdgeForPoint:(struct CGPoint)arg1;
- (id)_senderNameForID;
- (_Bool)_HIDEventIsAccessibilityEvent:(struct __IOHIDEvent *)arg1;
- (struct __IOHIDEvent *)_accessibilityEventFromRealEvent:(struct __IOHIDEvent *)arg1;
- (unsigned int)pathIndexMask;
- (void)resetInitialTouchCountValueForHidStreamIdentifier:(id)arg1;
- (unsigned int)_contextIDFromHIDEvent:(struct __IOHIDEvent *)arg1;
- (id)normalizedEventRepresentation:(_Bool)arg1 scale:(_Bool)arg2;
- (id)fakeTouchScaleEventRepresentation:(_Bool)arg1;
- (void)modifyPoints:(CDUnknownBlockType)arg1;
- (void)neuterUpdates;
- (id)denormalizedEventRepresentation:(_Bool)arg1 descale:(_Bool)arg2;
- (struct __GSEvent *)newGSEventRef;
- (unsigned int)firstPathContextId;
- (void)applyAccessibilityDataToCreatorHIDEvent;

@end
