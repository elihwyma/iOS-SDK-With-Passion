/*
 Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSString;

@interface CNCapabilitiesManager : NSObject

{
    _Bool _isListeningToIDSServiceAvailability;
    _Bool _isListeningToIDSQueryController;
    NSMutableDictionary *_destinationStatus;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)defaultCapabilitiesManager;
+ (void)_setDefaultCapabilitiesManager:(id)arg1;

- (void)dealloc;
- (void)idStatusUpdatedForDestinations:(id)arg1 service:(id)arg2;
- (_Bool)isSensitiveUIAllowed;
- (_Bool)hasTelephonyCapability;
- (_Bool)hasCellularTelephonyCapability;
- (_Bool)hasCellularTelephonyHardwareCapability;
- (_Bool)hasCellularDataCapability;
- (_Bool)hasSMSCapability;
- (_Bool)hasVibratorCapability;
- (_Bool)hasForceTouchCapability;
- (_Bool)hasSiriCapability;
- (_Bool)hasCameraCapability;
- (_Bool)isEmailConfigured;
- (_Bool)isMMSConfigured;
- (_Bool)isMadridConfigured;
- (_Bool)isConferencingAvailable;
- (_Bool)isConferencingEverGonnaBeAvailable;
- (_Bool)hasPreviouslyConferencedWithID:(id)arg1;
- (id)conferenceURLForPhoneNumber:(id)arg1;
- (id)conferenceURLForDestinationID:(id)arg1;
- (void)addIDSServiceAvailabilityListener:(id)arg1 selector:(SEL)arg2;
- (void)removeIDSServiceAvailabilityListener:(id)arg1;
- (void)_startListeningToIDSServiceAvailabilityIfNecessary;
- (void)_startListeningToIDSIDQueryControllerIfNecessary;
- (_Bool)hasAdditionalTextTones;
- (_Bool)isWeiboServiceAvailable;
- (_Bool)isFaceTimeAudioAvailable;
- (_Bool)isPhoneAppAvailable;
- (_Bool)isMailAppAvailable;
- (_Bool)isMessagesAppAvailable;
- (_Bool)isFaceTimeAppAvailable;
- (_Bool)_isAppAvailable:(id)arg1;
- (_Bool)areFavoritesAvailable;

@end
