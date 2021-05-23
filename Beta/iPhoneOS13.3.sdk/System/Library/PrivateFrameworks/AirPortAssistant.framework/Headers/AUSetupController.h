/*
 Image: /System/Library/PrivateFrameworks/AirPortAssistant.framework/AirPortAssistant
 */

#import <AirPortAssistant/AssistantCallbackController.h>

@class NSDate, NSDictionary, NSMutableSet, NSString;

@protocol SetupUIConfigDelegate;

@interface AUSetupController : AssistantCallbackController

{
    id _context;
    struct BSConfigurationContext *_configContext;
    _Bool _autoJoinState;
    _Bool _scanningState;
    _Bool _busy;
    _Bool _initializedBasePasswordFlag;
    _Bool _performingManualRead;
    _Bool _needToNilBonjour;
    NSMutableSet *_setupDelegates;
    id _uiConfigDelegate;
    NSString *_autoGuessSetupRecommendation;
    NSDictionary *_lastInstrumentation;
    _Bool _rememberDiskPassword;
    NSDate *_lastHeardFromDevice;
    NSString *_lastSystemName;
    NSString *_lastDNSName;
    NSString *_keychainBasePassword;
    NSString *_keychainWiFiPassword;
    NSString *_keychainDiskPassword;
    _Bool _activeTask;
}

@property (nonatomic) _Bool activeTask;
@property (nonatomic, readonly) NSMutableSet *setupDelegates;
@property (nonatomic) id <SetupUIConfigDelegate> uiConfigDelegate;
@property (nonatomic) id context;
@property (retain, nonatomic) NSString *autoGuessSetupRecommendation;
@property (retain, nonatomic) NSDictionary *lastInstrumentation;
@property (retain, nonatomic) NSDictionary *bonjourRecord;
@property (nonatomic) _Bool rememberBasePassword;
@property (nonatomic) _Bool rememberWiFiPassword;
@property (nonatomic) _Bool rememberDiskPassword;
@property (retain, nonatomic) NSString *keychainBasePassword;
@property (retain, nonatomic) NSString *keychainWiFiPassword;
@property (retain, nonatomic) NSString *keychainDiskPassword;
@property (nonatomic, readonly) NSDate *lastHeardFromDevice;
@property (retain, nonatomic) NSString *lastSystemName;
@property (retain, nonatomic) NSString *lastDNSName;
@property (retain) NSDictionary *restoreRecommendation;

+ (void)initialize;
+ (id)setupController;

- (id)init;
- (void)dealloc;
- (int)taskState;
- (_Bool)dirty;
- (_Bool)isMonitoring;
- (int)cancelTask;
- (int)closeAllConnections;
- (void)applicationDidEnterBackgroundNotification:(id)arg1;
- (int)subclassAssistantCallback:(struct AssistantCallbackContext *)arg1;
- (int)setupFromAutoguessRecommendation:(id)arg1 withOptions:(id)arg2;
- (int)updateSettingsAsync;
- (int)cancelSetup;
- (void)setupUIConfigResult:(int)arg1 withOptions:(id)arg2;
- (int)closeAllConnections:(_Bool)arg1;
- (int)copyValue:(id *)arg1 forBSSetting:(int)arg2;
- (int)copyValue:(id *)arg1 forSettingPath:(id)arg2;
- (int)stateForProblem:(unsigned int)arg1;
- (int)readPropertyListFromBaseAsync:(id)arg1;
- (void)handleBusyStart;
- (void)setupWiFiState;
- (struct _BaseStation *)bsRef;
- (int)getValue:(id *)arg1 forBSSetting:(int)arg2;
- (void)updateRememberKeychainFlagsButSkipBasePassword:(_Bool)arg1;
- (void)loadKeychainBasePassword;
- (void)loadKeychainWirelessPassword;
- (void)deleteKeychainBasePassword;
- (int)updateKeychainWithPasswords;
- (void)saveKeychainBasePassword;
- (id)bestKeychainMACAddress;
- (int)getValue:(id *)arg1 forSettingPath:(id)arg2;
- (int)setupWithTargetNetwork:(id)arg1;
- (int)setupWithTargetBaseStation:(id)arg1 andSettings:(id)arg2;
- (int)setValue:(id)arg1 forBSSetting:(int)arg2;
- (int)setValue:(id)arg1 forSettingPath:(id)arg2;
- (_Bool)hasACPFeature:(unsigned int)arg1;
- (long long)unignoredProblemCount;
- (id)validateAllSettingsAndGetErrors;
- (id)validateSettingsAndGetErrors:(id)arg1;
- (int)ignoreProblemCode:(unsigned int)arg1;
- (int)unIgnoreProblemCode:(unsigned int)arg1;
- (int)joinAsync;
- (int)joinAndBrowseAsync;
- (int)readAllPropertiesFromBaseAsync;
- (id)snapshotChangedKeys;
- (void)snapshotResetAll;
- (_Bool)snapshotDirty;
- (int)snapshotPush;
- (int)snapshotPop:(_Bool)arg1;
- (id)allKeychainMACAddresses;
- (void)updateRememberKeychainFlagsIfInitializing;
- (int)updateKeychainWithPasswordsWithStatus:(int)arg1;
- (void)saveKeychainWirelessPassword;
- (void)deleteKeychainWirelessPassword;
- (int)rpcSystemInterfacesAsync;
- (int)rpcStartRemoteBrowse:(id)arg1 withService:(id)arg2;
- (int)rpcRefreshBSSettingAsync:(int)arg1;
- (int)rpcDisconnectAllDiskUsersWithMessageAsync:(id)arg1;
- (int)rpcRenewDHCPLeaseAsync;
- (int)rpcWPSStartAsync:(_Bool)arg1 dayPass:(_Bool)arg2 timeout:(unsigned int)arg3;
- (int)rpcWPSStopAsync;
- (int)rpcWPSAllowClientAsync:(id)arg1;
- (unsigned int)taskCode;
- (int)busyState;
- (int)taskRestartAsync;
- (int)taskRestoreDefaultsAsync:(_Bool)arg1;
- (int)taskUploadFirmwareAsync:(id)arg1;
- (int)taskEraseDiskAsync:(id)arg1;
- (int)taskArchiveDiskAsync:(id)arg1;
- (int)setMonitorForChanges:(_Bool)arg1;
- (long long)ethernetPortCount;
- (void)resetWiFiState;
- (_Bool)performingManualRead;
- (void)handleBusyComplete;
- (void)updateLastHeardFromDevice;
- (void)handleSetupComplete:(int)arg1;
- (void)handleTaskComplete;
- (void)logChangesToCCL;
- (id)targetBaseInfoDict;

@end
