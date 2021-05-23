/*
 Image: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
 */

#import <Foundation/NSObject.h>

@interface AXMIDIEvent : NSObject

{
    unsigned char _note;
    unsigned char _pressure;
    unsigned char _control;
    unsigned char _controlValue;
    unsigned char _program;
    unsigned short _channel;
    unsigned short _pitchBend;
    long long _type;
}

@property (nonatomic) unsigned short channel;
@property (nonatomic, readonly) long long ordinalChannel;
@property (nonatomic, readonly, getter=isOmniChannel) _Bool omniChannel;
@property (nonatomic) long long type;
@property (nonatomic, readonly, getter=isDownEvent) _Bool downEvent;
@property (nonatomic) unsigned char note;
@property (nonatomic, readonly) long long noteValue;
@property (nonatomic, readonly) unsigned char noteOctave;
@property (nonatomic) unsigned char pressure;
@property (nonatomic) unsigned char control;
@property (nonatomic) unsigned char controlValue;
@property (nonatomic) unsigned char program;
@property (nonatomic) unsigned short pitchBend;

+ (_Bool)supportsSecureCoding;

- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)noteDescription;

@end
