/*
 Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

#import <Foundation/NSObject.h>

@class HMAccessory, HMMediaSystem, NSString, NSUUID;

@interface HFSymptomResultContextProvider : NSObject

{
    HMAccessory *_accessory;
    HMMediaSystem *_mediaSystem;
}

@property (nonatomic, readonly) HMAccessory *accessory;
@property (nonatomic, readonly) HMMediaSystem *mediaSystem;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic, readonly) NSString *homeKitObjectName;
@property (copy, nonatomic, readonly) NSString *accessoryName;
@property (copy, nonatomic, readonly) NSUUID *accessoryUUID;
@property (copy, nonatomic, readonly) NSString *currentDeviceNetworkSSID;
@property (copy, nonatomic, readonly) NSString *accessoryNetworkSSID;
@property (copy, nonatomic, readonly) NSString *currentUserID;
@property (copy, nonatomic, readonly) NSString *currentAppleMusicAccountName;

- (id)init;
- (id)initWithAccessory:(id)arg1 mediaSystem:(id)arg2;
- (_Bool)shouldDisplayManualFixOptionForSymptom:(id)arg1;
- (long long)fixStateForSymptom:(id)arg1;

@end
