/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SARemoteDevice.h>

@class NSDictionary, NSString;

@interface SARemotePlaybackDevice : SARemoteDevice

@property (copy, nonatomic) NSString *airPlayRouteId;
@property (copy, nonatomic) NSString *entitlementKey;
@property (copy, nonatomic) NSString *hashedRouteId;
@property (copy, nonatomic) NSString *storefront;
@property (copy, nonatomic) NSString *userToken;
@property (copy, nonatomic) NSDictionary *utsRequiredRequestKeyValuePairs;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)remotePlaybackDevice;
+ (id)remotePlaybackDeviceWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
