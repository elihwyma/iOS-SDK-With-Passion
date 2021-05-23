/*
 Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

#import <Foundation/NSObject.h>

#import <AssistantServices/Swift-Protocol.h>

@class NSString, NSUUID;

@interface AFBluetoothDeviceInfo : NSObject <Swift>

{
    _Bool _isAdvancedAppleAudioDevice;
    _Bool _supportsInEarDetection;
    _Bool _supportsVoiceTrigger;
    _Bool _supportsSpokenNotification;
    _Bool _supportsListeningModeANC;
    _Bool _supportsListeningModeTransparency;
    unsigned int _vendorID;
    unsigned int _productID;
    NSString *_address;
    NSUUID *_deviceUID;
}

@property (copy, nonatomic, readonly) NSString *address;
@property (copy, nonatomic, readonly) NSUUID *deviceUID;
@property (nonatomic, readonly) unsigned int vendorID;
@property (nonatomic, readonly) unsigned int productID;
@property (nonatomic, readonly) _Bool isAdvancedAppleAudioDevice;
@property (nonatomic, readonly) _Bool supportsInEarDetection;
@property (nonatomic, readonly) _Bool supportsVoiceTrigger;
@property (nonatomic, readonly) _Bool supportsSpokenNotification;
@property (nonatomic, readonly) _Bool supportsListeningModeANC;
@property (nonatomic, readonly) _Bool supportsListeningModeTransparency;

+ (_Bool)supportsSecureCoding;
+ (id)newWithBuilder:(CDUnknownBlockType)arg1;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)_descriptionWithIndent:(unsigned long long)arg1;
- (id)mutatedCopyWithMutator:(CDUnknownBlockType)arg1;
- (id)initWithAddress:(id)arg1 deviceUID:(id)arg2 vendorID:(unsigned int)arg3 productID:(unsigned int)arg4 isAdvancedAppleAudioDevice:(_Bool)arg5 supportsInEarDetection:(_Bool)arg6 supportsVoiceTrigger:(_Bool)arg7 supportsSpokenNotification:(_Bool)arg8 supportsListeningModeANC:(_Bool)arg9 supportsListeningModeTransparency:(_Bool)arg10;

@end
