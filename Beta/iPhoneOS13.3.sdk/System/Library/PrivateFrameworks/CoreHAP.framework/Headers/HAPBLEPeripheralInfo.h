/*
 Image: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
 */

#import <HMFoundation/HMFObject.h>

@class NSData, NSNumber, NSString, NSUUID;

@interface HAPBLEPeripheralInfo : HMFObject

{
    NSUUID *_peripheralUUID;
    unsigned long long _advertisedProtocolVersion;
    unsigned long long _previousProtocolVersion;
    unsigned long long _resumeSessionId;
    double _lastSeen;
    NSNumber *_statusFlags;
    NSNumber *_stateNumber;
    NSNumber *_configNumber;
    NSNumber *_categoryIdentifier;
    NSString *_accessoryName;
    NSData *_broadcastKey;
    double _keyUpdatedTime;
    NSNumber *_keyUpdatedStateNumber;
}

@property (nonatomic) unsigned long long advertisedProtocolVersion;
@property (nonatomic) unsigned long long previousProtocolVersion;
@property (nonatomic) unsigned long long resumeSessionId;
@property (retain, nonatomic) NSNumber *stateNumber;
@property (retain, nonatomic) NSString *accessoryName;
@property (retain, nonatomic) NSData *broadcastKey;
@property (nonatomic) double keyUpdatedTime;
@property (retain, nonatomic) NSNumber *keyUpdatedStateNumber;
@property (nonatomic, readonly) NSUUID *peripheralUUID;
@property (nonatomic, readonly) double lastSeen;
@property (nonatomic, readonly) NSNumber *statusFlags;
@property (nonatomic, readonly) NSNumber *configNumber;
@property (nonatomic, readonly) NSNumber *categoryIdentifier;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithPeripheralInfo:(id)arg1 advertisedProtocolVersion:(unsigned long long)arg2 previousProtocolVersion:(long long)arg3 resumeSessionId:(unsigned long long)arg4 lastSeen:(double)arg5 statusFlags:(id)arg6 stateNumber:(id)arg7 configNumber:(id)arg8 categoryIdentifier:(id)arg9 accessoryName:(id)arg10;
- (void)updateProtocolVersion:(unsigned long long)arg1;
- (void)updateResumeSessionId:(unsigned long long)arg1;
- (void)updateStateNumber:(id)arg1;
- (void)saveBroadcastKey:(id)arg1 keyUpdatedStateNumber:(id)arg2 updatedTime:(double)arg3;
- (void)updateBroadcastKey:(id)arg1;
- (void)updateAccessoryName:(id)arg1;

@end
