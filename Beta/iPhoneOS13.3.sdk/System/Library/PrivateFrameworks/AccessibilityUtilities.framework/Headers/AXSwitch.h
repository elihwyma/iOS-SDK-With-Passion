/*
 Image: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
 */

#import <Foundation/NSObject.h>

@class AXMIDIEvent, NSString, NSUUID;

@interface AXSwitch : NSObject

{
    unsigned short _keyCode;
    long long _action;
    long long _longPressAction;
    NSString *_name;
    struct NSString *_source;
    struct NSString *_type;
    NSString *_productName;
    NSString *_manufacturerName;
    NSUUID *_uuid;
    long long _buttonNumber;
    long long _headSwitch;
    AXMIDIEvent *_midiEvent;
    unsigned long long _cameraSwitch;
    NSString *_remoteSwitchIdentifier;
    NSString *_remoteDeviceName;
    NSString *_remoteDeviceIdentifier;
}

@property (retain, nonatomic) NSUUID *uuid;
@property (nonatomic) long long action;
@property (nonatomic) long long longPressAction;
@property (copy, nonatomic) NSString *name;
@property (retain, nonatomic) NSString *source;
@property (nonatomic, readonly) NSString *localizedSourceDescription;
@property (retain, nonatomic) NSString *type;
@property (copy, nonatomic) NSString *productName;
@property (copy, nonatomic) NSString *manufacturerName;
@property (nonatomic, readonly) _Bool hasLongPressAction;
@property (nonatomic, readonly) _Bool supportsLongPress;
@property (nonatomic) unsigned short keyCode;
@property (nonatomic) long long buttonNumber;
@property (nonatomic) long long headSwitch;
@property (retain, nonatomic) AXMIDIEvent *midiEvent;
@property (nonatomic) unsigned long long cameraSwitch;
@property (copy, nonatomic) NSString *remoteSwitchIdentifier;
@property (copy, nonatomic) NSString *remoteDeviceName;
@property (copy, nonatomic) NSString *remoteDeviceIdentifier;

+ (_Bool)supportsSecureCoding;
+ (id)switchWithAction:(long long)arg1 name:(id)arg2 source:(struct NSString *)arg3 type:(struct NSString *)arg4;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithAction:(long long)arg1 name:(id)arg2 source:(struct NSString *)arg3 type:(struct NSString *)arg4;

@end
