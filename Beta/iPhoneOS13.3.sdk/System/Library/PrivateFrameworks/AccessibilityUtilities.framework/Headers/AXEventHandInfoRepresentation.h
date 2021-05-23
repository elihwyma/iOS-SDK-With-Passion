/*
 Image: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString;

@interface AXEventHandInfoRepresentation : NSObject

{
    unsigned char _systemGesturePossible;
    unsigned char _swipe;
    unsigned short _initialFingerCount;
    unsigned short _currentFingerCount;
    unsigned int _eventType;
    unsigned int _handIdentity;
    unsigned int _handIndex;
    unsigned int _handEventMask;
    unsigned int _additionalHandEventFlagsForGeneratedEvents;
    NSArray *_paths;
    struct CGPoint _handPosition;
}

@property (nonatomic) unsigned char swipe;
@property (nonatomic) unsigned int eventType;
@property (nonatomic) unsigned short initialFingerCount;
@property (nonatomic) unsigned short currentFingerCount;
@property (retain, nonatomic) NSArray *paths;
@property (nonatomic) unsigned char systemGesturePossible;
@property (nonatomic) unsigned int handIdentity;
@property (nonatomic) unsigned int handIndex;
@property (nonatomic) struct CGPoint handPosition;
@property (nonatomic, readonly) _Bool isStylus;
@property (nonatomic) unsigned int handEventMask;
@property (nonatomic) unsigned int additionalHandEventFlagsForGeneratedEvents;
@property (nonatomic, readonly) unsigned long long length;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)supportsSecureCoding;
+ (id)representationWithHandInfo:(CDStruct_f2c5c900 *)arg1;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)accessibilityEventRepresentationTabularDescription;
- (void)writeToHandInfo:(CDStruct_f2c5c900 *)arg1;

@end
