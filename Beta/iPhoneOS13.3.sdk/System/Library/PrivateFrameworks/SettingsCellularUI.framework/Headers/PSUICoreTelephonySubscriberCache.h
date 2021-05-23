/*
 Image: /System/Library/PrivateFrameworks/SettingsCellularUI.framework/SettingsCellularUI
 */

#import <Foundation/NSObject.h>

@class CoreTelephonyClient, NSMutableDictionary, NSString;

@protocol OS_dispatch_queue;

@interface PSUICoreTelephonySubscriberCache : NSObject

{
    NSObject<OS_dispatch_queue> *_queue;
    CoreTelephonyClient *_client;
    NSMutableDictionary *_mobileEquipmentInfoDict;
    NSMutableDictionary *_isoCountryCodesDict;
}

@property (retain, nonatomic) CoreTelephonyClient *client;
@property (retain) NSMutableDictionary *mobileEquipmentInfoDict;
@property (retain) NSMutableDictionary *isoCountryCodesDict;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sharedInstance;

- (id)init;
- (void)willEnterForeground;
- (void)simStatusDidChange:(id)arg1 status:(id)arg2;
- (id)initPrivate;
- (id)mobileEquipmentInfo:(id)arg1;
- (unsigned long long)mobileEquipmentInfoLength;
- (id)shortLabel:(id)arg1;
- (void)fetchMobileEquipmentInfo;
- (void)fetchCountryCodes;
- (id)isoCountryCode:(id)arg1;

@end
