/*
 Image: /System/Library/PrivateFrameworks/WiFiKit.framework/WiFiKit
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface WFUserSuppliedNetwork : NSObject

{
    NSString *_ssid;
    long long _security;
    NSString *_username;
    NSString *_password;
    struct __SecIdentity *_TLSIdentity;
}

@property (copy, nonatomic) NSString *ssid;
@property (nonatomic) long long security;
@property (copy, nonatomic) NSString *username;
@property (copy, nonatomic) NSString *password;
@property (nonatomic) struct __SecIdentity *TLSIdentity;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)title;
- (id)subtitle;
- (long long)rssi;
- (_Bool)isSecure;
- (_Bool)isAdhoc;
- (_Bool)iOSHotspot;
- (float)scaledRSSI;
- (_Bool)isUnconfiguredAccessory;
- (_Bool)isEnterprise;
- (unsigned long long)signalBars;
- (_Bool)isInstantHotspot;
- (id)hotspotBatteryLife;
- (id)hotspotSignalStrength;
- (id)hotspotCellularProtocol;
- (_Bool)canBeDisplayedAsCurrent;

@end
