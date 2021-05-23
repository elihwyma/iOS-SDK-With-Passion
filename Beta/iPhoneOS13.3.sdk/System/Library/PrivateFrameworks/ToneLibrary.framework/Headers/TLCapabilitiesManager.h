/*
 Image: /System/Library/PrivateFrameworks/ToneLibrary.framework/ToneLibrary
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSString;

@interface TLCapabilitiesManager : NSObject

{
    _Bool _isRingtoneStoreAvailable;
    _Bool _isAlertToneStoreAvailable;
    NSDictionary *_deviceCodeNameSimplicationMapping;
}

@property (nonatomic, readonly, getter=isRingtoneStoreAvailable) _Bool ringtoneStoreAvailable;
@property (nonatomic, readonly, getter=isAlertToneStoreAvailable) _Bool alertToneStoreAvailable;
@property (nonatomic, readonly) _Bool wantsModernDefaultRingtone;
@property (nonatomic, readonly) _Bool hasVibratorCapability;
@property (nonatomic, readonly) _Bool hasSynchronizedVibrationsCapability;
@property (nonatomic, readonly) _Bool hasSynchronizedEmbeddedVibrationsCapability;
@property (nonatomic, readonly) _Bool hasUserGeneratedVibrationsCapability;
@property (nonatomic, readonly) NSString *deviceCodeName;
@property (nonatomic, readonly) NSString *simplifiedDeviceCodeName;
@property (nonatomic, readonly, getter=isHomePod) _Bool homePod;

+ (id)sharedCapabilitiesManager;

- (id)init;
- (void)dealloc;
- (_Bool)_hasTelephonyCapability;
- (void)_handleStoreAvailableItemKindsChangedNotification:(id)arg1;
- (void)_checkRingtoneStoreAvailability;
- (void)_updateRingtoneStoreAvailabilityWithAvailableKinds:(id)arg1 error:(id)arg2;

@end
