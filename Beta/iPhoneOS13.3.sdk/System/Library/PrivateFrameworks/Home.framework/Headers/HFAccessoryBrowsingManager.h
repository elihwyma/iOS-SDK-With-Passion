/*
 Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

#import <Foundation/NSObject.h>

@class HMAccessoryBrowser, NSArray, NSHashTable, NSMutableSet, NSString, SFDeviceDiscovery;

@interface HFAccessoryBrowsingManager : NSObject

{
    _Bool _isBrowsing;
    HMAccessoryBrowser *_accessoryBrowser;
    SFDeviceDiscovery *_sharingDeviceBrowser;
    NSHashTable *_observers;
    NSMutableSet *_mutableDiscoveredSharingDevices;
}

@property (nonatomic) _Bool isBrowsing;
@property (retain, nonatomic) HMAccessoryBrowser *accessoryBrowser;
@property (retain, nonatomic) SFDeviceDiscovery *sharingDeviceBrowser;
@property (retain, nonatomic) NSHashTable *observers;
@property (retain, nonatomic) NSMutableSet *mutableDiscoveredSharingDevices;
@property (nonatomic, readonly) NSArray *discoveredHMAccessories;
@property (nonatomic, readonly) NSArray *discoveredSharingDevices;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)stopSearchingForNewAccessories;
- (void)startSearchingForNewAccessories;
- (void)accessoryBrowser:(id)arg1 didFindNewAccessory:(id)arg2;
- (void)accessoryBrowser:(id)arg1 didRemoveNewAccessory:(id)arg2;
- (void)addBrowsingObserver:(id)arg1;
- (void)removeBrowsingObserver:(id)arg1;

@end
