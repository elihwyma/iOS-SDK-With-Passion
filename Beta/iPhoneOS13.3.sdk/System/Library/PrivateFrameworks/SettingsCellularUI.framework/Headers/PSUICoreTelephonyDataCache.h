/*
 Image: /System/Library/PrivateFrameworks/SettingsCellularUI.framework/SettingsCellularUI
 */

#import <Foundation/NSObject.h>

@class CoreTelephonyClient, NSMutableDictionary, NSString, RadiosPreferences;

@protocol OS_dispatch_group, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface PSUICoreTelephonyDataCache : NSObject

{
    NSObject<OS_dispatch_queue> *_queue;
    _Bool _intlDataAccessStatus;
    _Bool _intlDataAccessStatusInitialized;
    _Bool _cellularDataSetting;
    _Bool _cellularDataSettingInitialized;
    struct __CTServerConnection *_ctConnection;
    CoreTelephonyClient *_client;
    NSMutableDictionary *_dataStatusDict;
    NSObject<OS_dispatch_group> *_intlDataAccessGroup;
    RadiosPreferences *_radioPreferences;
}

@property (retain, nonatomic) CoreTelephonyClient *client;
@property (retain) NSMutableDictionary *dataStatusDict;
@property _Bool intlDataAccessStatus;
@property (retain) NSObject<OS_dispatch_group> *intlDataAccessGroup;
@property _Bool intlDataAccessStatusInitialized;
@property (retain, nonatomic) RadiosPreferences *radioPreferences;
@property _Bool cellularDataSetting;
@property _Bool cellularDataSettingInitialized;
@property struct __CTServerConnection *ctConnection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sharedInstance;

- (id)init;
- (void)dealloc;
- (void)airplaneModeChanged;
- (void)willEnterForeground;
- (void)setInternationalDataAccessStatus:(_Bool)arg1;
- (void)dataStatus:(id)arg1 dataStatusInfo:(id)arg2;
- (_Bool)isCellularDataEnabled;
- (_Bool)isAirplaneModeEnabled;
- (void)setCellularDataEnabled:(_Bool)arg1;
- (id)initPrivate;
- (_Bool)getInternationalDataAccessStatus;
- (void)setDataFallbackEnabled:(_Bool)arg1;
- (_Bool)isDataFallbackEnabled;
- (id)getDataStatus:(id)arg1;
- (void)fetchDataStatus;
- (void)fetchInternationalDataAccessStatus;
- (void)fetchCellularDataEnabled;

@end
