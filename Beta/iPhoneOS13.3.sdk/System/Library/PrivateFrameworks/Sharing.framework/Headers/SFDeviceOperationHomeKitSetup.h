/*
 Image: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
 */

#import <Foundation/NSObject.h>

#import <Sharing/Swift-Protocol.h>

@class ACAccount, HMAccessory, HMAccessoryBrowser, HMDeviceSetupOperation, HMHome, HMHomeManager, HMRoom, NSDictionary, NSString, TROperationQueue, TRSession;

@protocol OS_dispatch_queue, OS_dispatch_source;

@interface SFDeviceOperationHomeKitSetup : NSObject <Swift>

{
    _Bool _active;
    _Bool _paused;
    unsigned long long _startTicks;
    int _state;
    NSObject<OS_dispatch_source> *_timeoutTimer;
    TROperationQueue *_trOperationQueue;
    HMHomeManager *_homeKitHomeManager;
    _Bool _homeKitHomeManagerReady;
    HMAccessoryBrowser *_homeKitBrowser;
    _Bool _homeAppInstallUserDidChoose;
    HMDeviceSetupOperation *_homeKitDeviceSetupOperation;
    HMAccessory *_homeKitAccessory;
    _Bool _reselectHome;
    HMRoom *_homeKitSelectedRoom;
    _Bool _homeKitAddedAccessory;
    _Bool _homeKitAddedAppData;
    _Bool _configuredStereoPair;
    _Bool _personalRequestsDone;
    _Bool _hasHomePod;
    _Bool _hasMultipleUsers;
    _Bool _keyExchangeOnly;
    _Bool _pauseAfterUserInput;
    _Bool _personalRequestsEnabled;
    int _stereoRole;
    NSDictionary *_appDataSelf;
    CDUnknownBlockType _completionHandler;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    HMHome *_homeKitSelectedHome;
    NSString *_homeKitSelectedRoomName;
    NSString *_iTunesAccountID;
    ACAccount *_iTunesAccount;
    double _metricNonUserSeconds;
    double _metricUserSeconds;
    CDUnknownBlockType _pauseHandler;
    CDUnknownBlockType _promptForHomeHandler;
    CDUnknownBlockType _promptForRoomHandler;
    CDUnknownBlockType _promptToInstallHomeAppHandler;
    HMAccessory *_stereoCounterpart;
    TRSession *_trSession;
}

@property (copy, nonatomic) NSDictionary *appDataSelf;
@property (copy, nonatomic) CDUnknownBlockType completionHandler;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (nonatomic, readonly) _Bool hasHomePod;
@property (nonatomic, readonly) _Bool hasMultipleUsers;
@property (nonatomic, readonly) HMHome *homeKitSelectedHome;
@property (copy, nonatomic, readonly) NSString *homeKitSelectedRoomName;
@property (copy, nonatomic) NSString *iTunesAccountID;
@property (retain, nonatomic) ACAccount *iTunesAccount;
@property (nonatomic) _Bool keyExchangeOnly;
@property (nonatomic, readonly) double metricNonUserSeconds;
@property (nonatomic, readonly) double metricUserSeconds;
@property (nonatomic) _Bool pauseAfterUserInput;
@property (copy, nonatomic) CDUnknownBlockType pauseHandler;
@property (nonatomic) _Bool personalRequestsEnabled;
@property (copy, nonatomic) CDUnknownBlockType promptForHomeHandler;
@property (copy, nonatomic) CDUnknownBlockType promptForRoomHandler;
@property (copy, nonatomic) CDUnknownBlockType promptToInstallHomeAppHandler;
@property (retain, nonatomic) HMAccessory *stereoCounterpart;
@property (nonatomic) int stereoRole;
@property (retain, nonatomic) TRSession *trSession;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)invalidate;
- (void)resume;
- (void)_cleanup;
- (void)activate;
- (void)_run;
- (void)_completeWithError:(id)arg1;
- (void)homeManagerDidUpdateDataSyncState:(id)arg1;
- (void)homeManager:(id)arg1 didUpdateStatus:(unsigned long long)arg2;
- (void)homeManagerDidUpdateHomes:(id)arg1;
- (_Bool)_isOwnerOfHome:(id)arg1;
- (void)_restoreHomeApp;
- (void)_startTimeout:(double)arg1;
- (void)_runInit;
- (id)_runHomeKitAutoSelectHome:(_Bool)arg1;
- (void)_updateHomeStats;
- (void)_runHomeKitSelectRoom;
- (void)_runHomeKitDeviceSetup;
- (void)_runHomeKitAddAccessory;
- (void)_runHomeKitSetupRoom;
- (void)_runHomeKitAssignRoom;
- (void)_runHomeKitAddAppData;
- (_Bool)_runHomeKitConfigureStereoPairAndReturnError:(id *)arg1;
- (void)_runPersonalRequestsStart;
- (void)_runHomeKitAddHome;
- (void)_removeSimilarRoomNames:(id)arg1 home:(id)arg2;
- (id)_normalizedString:(id)arg1;
- (void)_updateAccount;
- (id)_mediaSystemForAccessory:(id)arg1;
- (void)accessoryBrowser:(id)arg1 didFindNewAccessory:(id)arg2;
- (void)accessoryBrowser:(id)arg1 didRemoveNewAccessory:(id)arg2;
- (void)homeAppInstallChoice:(_Bool)arg1;
- (void)selectHome:(id)arg1;
- (void)reselectHome;
- (void)selectRoom:(id)arg1;
- (id)findStereoCounterparts;

@end
