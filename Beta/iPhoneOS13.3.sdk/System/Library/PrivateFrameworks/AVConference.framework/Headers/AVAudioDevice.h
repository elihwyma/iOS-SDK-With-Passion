/*
 Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

#import <Foundation/NSObject.h>

@class NSNumber, NSString;

@interface AVAudioDevice : NSObject

{
    NSString *_deviceName;
    NSNumber *_deviceID;
    NSString *_UID;
    _Bool _inputAvailable;
    _Bool _outputAvailable;
    _Bool _preferredDevice;
    _Bool _isBluetoothDevice;
    _Bool _isLineIn;
}

@property (nonatomic, readonly) NSString *deviceName;
@property (nonatomic, readonly) NSNumber *deviceID;
@property (nonatomic, readonly) NSString *UID;
@property (nonatomic, readonly) _Bool inputAvailable;
@property (nonatomic, readonly) _Bool outputAvailable;
@property (nonatomic, readonly, getter=isPreferredDevice) _Bool preferredDevice;
@property (nonatomic, readonly) _Bool isBluetoothDevice;

- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)initWithDeviceID:(id)arg1;
- (void)createName;
- (void)createUID;
- (_Bool)isSomethingConnectedToJack;
- (void)createNameForScope:(unsigned int)arg1;
- (_Bool)isValidDevice;
- (_Bool)isValidInputDevice;
- (_Bool)isBuiltInDevice;
- (unsigned int *)allocDeviceControlListAndSize:(unsigned int *)arg1;
- (unsigned int)getDataSourceControlID;
- (_Bool)isStreamAvailableForScope:(unsigned int)arg1;

@end
