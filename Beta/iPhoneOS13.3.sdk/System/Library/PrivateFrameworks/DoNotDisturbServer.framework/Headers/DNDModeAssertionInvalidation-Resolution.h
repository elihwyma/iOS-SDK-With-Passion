/*
 Image: /System/Library/PrivateFrameworks/DoNotDisturbServer.framework/DoNotDisturbServer
 */

#import <DoNotDisturb/DNDModeAssertionInvalidation.h>

@class NSString;

@interface DNDModeAssertionInvalidation (Resolution)

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)predicateForModeAssertionInvalidationsWithAssertionClientIdentifiers:(id)arg1;

- (id)resolveWithExpectedRemoteDeviceIdentifier:(id)arg1 localDeviceIdentifier:(id)arg2 remoteDeviceIdentifier:(id)arg3;

@end
