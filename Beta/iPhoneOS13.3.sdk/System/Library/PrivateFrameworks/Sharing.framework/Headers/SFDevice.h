/*
 Image: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString, NSUUID, SFBLEDevice;

@interface SFDevice : NSObject

{
    _Bool _autoUnlockEnabled;
    _Bool _autoUnlockWatch;
    unsigned char _deviceActionType;
    unsigned char _deviceClassCode;
    unsigned char _deviceModelCode;
    _Bool _duetSync;
    _Bool _hasProblem;
    _Bool _needsAWDL;
    _Bool _needsKeyboard;
    _Bool _needsSetup;
    _Bool _wakeDevice;
    _Bool _watchLocked;
    _Bool _wifiP2P;
    unsigned char _osVersion;
    _Bool _paired;
    _Bool _testMode;
    unsigned int _deviceFlags;
    unsigned int _hotspotInfo;
    unsigned int _systemPairState;
    NSString *_accountID;
    NSArray *_batteryInfo;
    SFBLEDevice *_bleDevice;
    NSString *_contactIdentifier;
    long long _deviceType;
    long long _distance;
    NSUUID *_identifier;
    NSString *_idsIdentifier;
    NSString *_mediaRemoteID;
    NSString *_mediaRouteID;
    NSString *_model;
    NSString *_name;
    unsigned long long _problemFlags;
    NSString *_rapportIdentifier;
    NSString *_requestSSID;
}

@property (copy, nonatomic) NSString *accountID;
@property (copy, nonatomic) NSArray *batteryInfo;
@property (retain, nonatomic) SFBLEDevice *bleDevice;
@property (copy, nonatomic) NSString *contactIdentifier;
@property (nonatomic) unsigned char deviceActionType;
@property (nonatomic) unsigned char deviceClassCode;
@property (nonatomic) unsigned int deviceFlags;
@property (nonatomic) long long distance;
@property (nonatomic) _Bool hasProblem;
@property (nonatomic) unsigned int hotspotInfo;
@property (copy, nonatomic) NSString *idsIdentifier;
@property (copy, nonatomic) NSString *model;
@property (copy, nonatomic) NSString *name;
@property (nonatomic) _Bool needsSetup;
@property (nonatomic) unsigned char osVersion;
@property (nonatomic) _Bool paired;
@property (copy, nonatomic) NSString *requestSSID;
@property (nonatomic) _Bool testMode;
@property (nonatomic) _Bool wakeDevice;
@property (nonatomic) _Bool autoUnlockEnabled;
@property (nonatomic) _Bool autoUnlockWatch;
@property (nonatomic, readonly) unsigned char deviceModelCode;
@property (nonatomic, readonly) long long deviceType;
@property (nonatomic, readonly) _Bool duetSync;
@property (copy, nonatomic) NSUUID *identifier;
@property (copy, nonatomic, readonly) NSString *mediaRemoteID;
@property (copy, nonatomic, readonly) NSString *mediaRouteID;
@property (nonatomic, readonly) _Bool needsAWDL;
@property (nonatomic, readonly) _Bool needsKeyboard;
@property (nonatomic, readonly) _Bool needsKeyboardOnly;
@property (nonatomic, readonly) unsigned long long problemFlags;
@property (nonatomic, readonly) NSString *rapportIdentifier;
@property (nonatomic) unsigned int systemPairState;
@property (nonatomic) _Bool watchLocked;
@property (nonatomic, readonly) _Bool wifiP2P;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)updateWithBLEDevice:(id)arg1;
- (void)updateWithPairedPeer:(id)arg1;
- (void)updateWithRPIdentity:(id)arg1;

@end
