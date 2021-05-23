/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SABaseCommand.h>

#import <SAObjects/Swift-Protocol.h>

@class NSArray, NSString;

@interface SASetRemoteDevices : SABaseCommand <Swift>

@property (nonatomic) _Bool remoteDeviceHasNoAssistantId;
@property (nonatomic) _Bool remoteDeviceNotSetup;
@property (nonatomic) _Bool remoteDeviceUnreachable;
@property (copy, nonatomic) NSArray *remoteDevices;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic) NSString *aceId;
@property (copy, nonatomic) NSString *refId;

+ (id)setRemoteDevices;
+ (id)setRemoteDevicesWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;
- (_Bool)requiresResponse;

@end
