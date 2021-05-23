/*
 Image: /System/Library/PrivateFrameworks/NearField.framework/NearField
 */

#import <Foundation/NSObject.h>

@class NFHardwareControllerInfo, NSArray, NSDictionary, NSMutableSet, NSString, NSUUID, NSXPCConnection;

@interface NFHardwareManager : NSObject

{
    NSXPCConnection *_connection;
    NSMutableSet *_sessions;
    _Bool _hasEventListener;
    NSMutableSet *_eventListeners;
    NSArray *_secureElements;
    NSDictionary *_secureElementsById;
    unsigned int _hwSupport;
    _Bool _didPreWarm;
}

@property (readonly) NFHardwareControllerInfo *controllerInfo;
@property (readonly) NSUUID *blessedUser;
@property (nonatomic, readonly) _Bool isBackgroundTagReadingAvailable;
@property (nonatomic) _Bool suspendBackgroundTagReading;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sharedHardwareManager;

- (id)init;
- (void)dealloc;
- (id)remoteObjectProxyWithErrorHandler:(CDUnknownBlockType)arg1;
- (id)synchronousRemoteObjectProxyWithErrorHandler:(CDUnknownBlockType)arg1;
- (_Bool)preWarm;
- (_Bool)secureElementBootHistory:(id *)arg1;
- (id)startSesHatSession:(CDUnknownBlockType)arg1;
- (id)secureElements;
- (id)startNdefTagSession:(CDUnknownBlockType)arg1;
- (id)startReaderSession:(CDUnknownBlockType)arg1;
- (void)registerEventListener:(id)arg1;
- (void)_connectIfNeeded;
- (_Bool)areFeaturesSupported:(unsigned long long)arg1 outError:(id *)arg2;
- (void)actOnUserInitiatedSystemShutDown:(unsigned int)arg1 completion:(CDUnknownBlockType)arg2;
- (id)startECommercePaymentSession:(CDUnknownBlockType)arg1;
- (id)startLoyaltyAndContactlessPaymentSession:(CDUnknownBlockType)arg1;
- (id)startPeerPaymentSession:(CDUnknownBlockType)arg1;
- (id)startTrustSession:(CDUnknownBlockType)arg1;
- (id)startSecureElementManagerSessionWithPriority:(CDUnknownBlockType)arg1;
- (id)startSecureElementManagerSession:(CDUnknownBlockType)arg1;
- (void)unregisterEventListener:(id)arg1;
- (_Bool)isExpressModeSupported;
- (_Bool)isInRestrictedMode;
- (_Bool)setFieldDetectEnabled:(_Bool)arg1;
- (id)startFieldDetectSession:(CDUnknownBlockType)arg1;
- (void)invalidateConnection;
- (void)setAuthorization:(id)arg1;
- (_Bool)expressModesEnabled;
- (void)secureElementWithIdentifier:(id)arg1 didChangeRestrictedMode:(_Bool)arg2;
- (void)didInvalidateXPCConnection:(id)arg1;
- (void)didInterruptXPCConnection:(id)arg1;
- (id)updateHWSupport:(_Bool)arg1;
- (unsigned int)getHwSupport;
- (id)controllerInfoWithError:(id *)arg1;
- (id)getDieIDWithError:(id *)arg1;
- (id)getHeadlessModeFlags:(unsigned int *)arg1;
- (id)getPowerCounters:(id *)arg1;
- (unsigned int)checkUserBlessing:(id)arg1 hasCards:(_Bool *)arg2;
- (unsigned int)setBlessedUser:(id)arg1 keybagUUID:(id)arg2 withAuthorization:(id)arg3;
- (id)secureElementWithIdentifier:(id)arg1;
- (void)sessionDidEnd:(id)arg1;
- (id)startSecureElementManagerSessionWithPriority:(_Bool)arg1 callback:(CDUnknownBlockType)arg2;
- (id)_startReaderSessionWithUI:(long long)arg1 callback:(CDUnknownBlockType)arg2;
- (void)configureReaderModeRFForTransitPartner:(_Bool)arg1 transitPartner:(unsigned int)arg2 callback:(CDUnknownBlockType)arg3;
- (unsigned int)queryHardwareSupport:(id *)arg1;
- (id)rfSettings;
- (id)getDieID;
- (id)getUniqueFDRKey:(id *)arg1;
- (id)pushSignedRF:(id)arg1;
- (_Bool)isExpressAppletTypeSupported:(unsigned char)arg1;
- (id)configureHeadlessFactoryMode:(_Bool)arg1;
- (_Bool)getHeadlessFactoryMode:(id *)arg1;
- (id)disableHeadless;
- (void)dumpLPMDebugLog;
- (unsigned int)checkUserBlessing:(id)arg1;
- (unsigned int)setBlessedUser:(id)arg1 withAuthorization:(id)arg2;
- (_Bool)hasCard;
- (_Bool)triggerDelayedWake:(unsigned char)arg1;
- (id)enableHeadlessTestMode:(unsigned short)arg1;
- (id)toggleGPIO:(unsigned short)arg1;
- (void)refreshSecureElements;
- (id)hostEmulationLog;
- (id)startContactlessPaymentSession:(CDUnknownBlockType)arg1;
- (id)startContactlessSession:(CDUnknownBlockType)arg1;
- (id)startContactlessUICCSession:(CDUnknownBlockType)arg1;
- (id)startReaderSessionWithActionSheetUI:(CDUnknownBlockType)arg1;
- (id)startNdefTagSessionWithBluetoothLESecureOOBData:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (id)startHCESession:(CDUnknownBlockType)arg1;
- (id)startSecureElementAndHCESession:(CDUnknownBlockType)arg1;
- (_Bool)areSessionsAllowed;
- (id)setChipscope:(_Bool)arg1;

@end
