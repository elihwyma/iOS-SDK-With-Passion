/*
 Image: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
 */

#import <NSObject.h>

@class NSData, NSDictionary, NSString, NSUUID;

__attribute__((visibility("hidden")))
@interface CUWiFiDevice : NSObject

{
    unsigned int _deviceIECategory;
    unsigned int _deviceIEFlags;
    int _rssi;
    int _present;
    NSData *_bssid;
    NSData *_deviceIEBluetoothMAC;
    NSData *_deviceIEDeviceID;
    NSString *_deviceIEManufacturer;
    NSString *_deviceIEModel;
    NSString *_deviceIEName;
    NSData *_deviceIDOUI;
    NSData *_deviceIDSetupHash;
    NSUUID *_identifier;
    NSData *_ieData;
    id _platformObject;
    NSDictionary *_rawScanResult;
    NSString *_ssid;
}

@property (nonatomic) int present;
@property (copy, nonatomic) NSData *bssid;
@property (copy, nonatomic) NSData *deviceIEBluetoothMAC;
@property (nonatomic) unsigned int deviceIECategory;
@property (copy, nonatomic) NSData *deviceIEDeviceID;
@property (nonatomic) unsigned int deviceIEFlags;
@property (copy, nonatomic) NSString *deviceIEManufacturer;
@property (copy, nonatomic) NSString *deviceIEModel;
@property (copy, nonatomic) NSString *deviceIEName;
@property (copy, nonatomic) NSData *deviceIDOUI;
@property (copy, nonatomic) NSData *deviceIDSetupHash;
@property (copy, nonatomic) NSUUID *identifier;
@property (copy, nonatomic) NSData *ieData;
@property (retain, nonatomic) id platformObject;
@property (copy, nonatomic) NSDictionary *rawScanResult;
@property (nonatomic) int rssi;
@property (copy, nonatomic) NSString *ssid;

- (id)description;
- (unsigned int)_updateWithDeviceIE:(const char *)arg1 end:(const char *)arg2;

@end
