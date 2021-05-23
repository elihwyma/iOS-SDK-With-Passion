/*
 Image: /System/Library/PrivateFrameworks/SOS.framework/SOS
 */

#import <Foundation/NSObject.h>

#import <SOS/Swift-Protocol.h>

@class CLLocation, FKFriendsManager, NSDate, NSMutableArray, NSString, SOSContactsManager, SOSPersistentTimerLocationManager, _MKLocationShifter;

@interface SOSEngine : NSObject <Swift>

{
    SOSPersistentTimerLocationManager *_sosPersistentTimerLocationManager;
    NSDate *_timeToStopSendingMessages;
    NSDate *_timeLastMessageSent;
    CLLocation *_lastLocationSent;
    SOSContactsManager *_contactsManager;
    NSString *_medicalIDName;
    long long _notifyContactsReason;
    FKFriendsManager *_friendsManager;
    _MKLocationShifter *_locationShifter;
    NSMutableArray *_clientConnections;
}

@property (retain, nonatomic) FKFriendsManager *friendsManager;
@property (retain, nonatomic) _MKLocationShifter *locationShifter;
@property (retain, nonatomic) NSMutableArray *clientConnections;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sharedInstance;
+ (id)locationShifter;
+ (id)contactStore;
+ (id)meContact;
+ (void)shiftedLocationWithLocation:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (_Bool)authorizedToUseContactStore;
+ (void)preloadContactStoreIfNecessary;
+ (void)_sendMessageToRecipients:(id)arg1 withLocation:(id)arg2 isFirstMessage:(_Bool)arg3 medicalIDName:(id)arg4 Reason:(long long)arg5;
+ (id)_sosMessageForLocation:(id)arg1 isFirstMessage:(_Bool)arg2 withMMS:(_Bool)arg3 callbackNumber:(id)arg4 medicalIDName:(id)arg5 Reason:(long long)arg6;
+ (_Bool)_isBasebandDevice;
+ (void)_sendSMSMessage:(id)arg1 MMSMessage:(id)arg2 location:(id)arg3 recipients:(id)arg4 failureBlock:(CDUnknownBlockType)arg5;
+ (id)GPSCoordinatesURLForLocation:(id)arg1;
+ (void)_sendCKMessage:(id)arg1 failureBlock:(CDUnknownBlockType)arg2;
+ (id)fullNameForContact:(id)arg1;
+ (id)firstNameForContact:(id)arg1;
+ (id)_sosMessageForLocation:(id)arg1 isFirstMessage:(_Bool)arg2 withMMS:(_Bool)arg3 myFullName:(id)arg4 myFirstName:(id)arg5 callbackNumber:(id)arg6 Reason:(long long)arg7;
+ (id)additionalTextForCallbackNumber:(id)arg1 fullName:(id)arg2 firstName:(id)arg3;
+ (void)_sendMessage:(id)arg1 location:(id)arg2 recipients:(id)arg3 useStandalone:(_Bool)arg4 failureBlock:(CDUnknownBlockType)arg5;
+ (id)additionalTextForCallbackNumber:(id)arg1;

- (id)init;
- (void)dealloc;
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)start;
- (void)contactStoreDidChange;
- (id)contactsManager;
- (void)willStartSendingLocationUpdate;
- (void)startSendingLocationUpdateWithCompletion:(CDUnknownBlockType)arg1;
- (void)startSendingLocationUpdateForReason:(long long)arg1 WithCompletion:(CDUnknownBlockType)arg2;
- (void)stopSendingLocationUpdate;
- (void)isSendingLocationUpdate:(CDUnknownBlockType)arg1;
- (void)mostRecentLocationSentWithCompletion:(CDUnknownBlockType)arg1;
- (void)updateCurrentSOSInitiationState:(long long)arg1;
- (void)updateCurrentSOSInteractiveState:(long long)arg1;
- (void)dismissSOSWithCompletion:(CDUnknownBlockType)arg1;
- (void)didDismissSOSBeforeSOSCall:(long long)arg1;
- (id)initWithoutEntitlement;
- (void)SOSSendingLocationUpdateChanged:(id)arg1;
- (_Bool)isSendingLocationUpdate;
- (_Bool)locationIsValidToSend:(id)arg1;
- (_Bool)notificationEnabledAndContactsExist;
- (long long)currentSOSInitiationState;
- (void)sosPersistentTimerLocationMangerTimerFired:(id)arg1 location:(id)arg2;
- (void)fetchMedicalIDName;

@end
