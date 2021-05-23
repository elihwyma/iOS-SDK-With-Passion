/*
 Image: /System/Library/PrivateFrameworks/TVRemoteCore.framework/TVRemoteCore
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSError, NSSet, NSString, _TVRCKeyboardState;

@interface _TVRCDeviceState : NSObject

{
    _Bool _supportsTouchEvents;
    _Bool _paired;
    long long _connectionState;
    unsigned long long _pairingCapability;
    long long _connectionType;
    NSString *_name;
    NSString *_identifier;
    NSDictionary *_alternateIdentifiers;
    NSString *_model;
    NSSet *_supportedButtons;
    _TVRCKeyboardState *_keyboardState;
    long long _disconnectReason;
    NSError *_disconnectError;
}

@property (nonatomic) long long connectionState;
@property (nonatomic) unsigned long long pairingCapability;
@property (nonatomic) long long connectionType;
@property (nonatomic) _Bool supportsTouchEvents;
@property (nonatomic, getter=isPaired) _Bool paired;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSDictionary *alternateIdentifiers;
@property (copy, nonatomic) NSString *model;
@property (copy, nonatomic) NSSet *supportedButtons;
@property (copy, nonatomic) _TVRCKeyboardState *keyboardState;
@property (nonatomic) long long disconnectReason;
@property (copy, nonatomic) NSError *disconnectError;

+ (_Bool)supportsSecureCoding;
+ (id)deviceStateFromDevice:(id)arg1;
+ (id)setOfStatesFromDevices:(id)arg1;

- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDevice:(id)arg1;

@end
