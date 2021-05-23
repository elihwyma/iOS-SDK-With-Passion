/*
 Image: /System/Library/PrivateFrameworks/TVRemoteCore.framework/TVRemoteCore
 */

#import <Foundation/NSObject.h>

#import <TVRemoteCore/Swift-Protocol.h>

@class HMHome, NSMutableDictionary, NSString;

@interface _TVRCHMHomeObserver : NSObject <Swift>

{
    HMHome *_currentHome;
    NSMutableDictionary *_serviceToAccessoryIDMapping;
}

@property (retain, nonatomic) NSMutableDictionary *serviceToAccessoryIDMapping;
@property (retain, nonatomic) HMHome *currentHome;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sharedInstance;

- (id)init;
- (void)home:(id)arg1 didAddAccessory:(id)arg2;
- (void)home:(id)arg1 didRemoveAccessory:(id)arg2;
- (void)accessoryDidUpdateReachableTransports:(id)arg1;
- (void)accessory:(id)arg1 didUpdateNameForService:(id)arg2;
- (void)accessoryDidUpdateServices:(id)arg1;
- (void)accessoryDidUpdateReachability:(id)arg1;
- (void)_updateAccessoriesForHome:(id)arg1;
- (void)_updateServicesForAccessory:(id)arg1;
- (void)_checkAccessoryReachabilityAndFetchTVServices:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)_readCharacteristic:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)_checkErrorForLocallySuspendedAccessory:(id)arg1;

@end
