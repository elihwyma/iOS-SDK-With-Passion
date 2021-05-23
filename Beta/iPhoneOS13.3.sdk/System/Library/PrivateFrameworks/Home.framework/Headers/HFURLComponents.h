/*
 Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

#import <Foundation/NSObject.h>

@class HFHomeKitDispatcher, NAFuture, NSURL;

@interface HFURLComponents : NSObject

{
    NSURL *_URL;
    HFHomeKitDispatcher *_homeKitDispatcher;
}

@property (nonatomic, readonly) HFHomeKitDispatcher *homeKitDispatcher;
@property (nonatomic, readonly) NSURL *URL;
@property (nonatomic, readonly) unsigned long long destination;
@property (nonatomic, readonly) unsigned long long secondaryDestination;
@property (nonatomic, readonly) NAFuture *homeKitObjectFuture;

+ (_Bool)isHomeAppURL:(id)arg1;
+ (id)aboutResidentDeviceURL;
+ (id)fixSymptomURLForAccessoryWithUUID:(id)arg1 symptom:(id)arg2;
+ (id)_URLComponentsForDestination:(unsigned long long)arg1;
+ (id)networkRoutersSettingsURL;
+ (id)siriPrivacyURL;
+ (id)musicPrivacyURL;
+ (id)locationPrivacyURL;
+ (id)musicLoginURL;
+ (id)fixSymptomURLForAccessory:(id)arg1 symptom:(id)arg2;
+ (id)aboutImproveSiriAndDictationURL;
+ (id)symptomFromURL:(id)arg1 accessory:(id)arg2;
+ (id)homeKitObjectURLForDestination:(unsigned long long)arg1 secondaryDestination:(unsigned long long)arg2 UUID:(id)arg3;

- (id)description;
- (id)initWithURL:(id)arg1;
- (id)valueForParameter:(id)arg1;
- (id)_homeKitIdentifier;
- (id)initWithURL:(id)arg1 homeKitDispatcher:(id)arg2;

@end
