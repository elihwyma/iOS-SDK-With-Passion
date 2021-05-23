/*
 Image: /System/Library/PrivateFrameworks/SettingsCellularUI.framework/SettingsCellularUI
 */

#import <Foundation/NSObject.h>

@class CoreTelephonyClient, NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface PSUICarrierServicesSpecifierCache : NSObject

{
    CoreTelephonyClient *_client;
    NSMutableDictionary *_specifiersDict;
}

@property (retain, nonatomic) CoreTelephonyClient *client;
@property (retain, nonatomic) NSMutableDictionary *specifiersDict;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sharedInstance;

- (id)init;
- (void)dealloc;
- (void)willEnterForeground;
- (void)simStatusDidChange:(id)arg1 status:(id)arg2;
- (void)carrierBundleChange:(id)arg1;
- (id)initPrivate;
- (void)_clearCache;
- (void)openURLWithSpecifier:(id)arg1;
- (void)dialCarrierServiceNumber:(id)arg1;
- (id)readPreference:(id)arg1;
- (id)newMyAccountSpecifierWithTarget:(id)arg1 context:(id)arg2;
- (id)newMMSInfoSpecifierWithTarget:(id)arg1 context:(id)arg2;
- (void)fetchSpecifiers;
- (void)_allowClicks;
- (id)specifiers:(id)arg1;

@end
