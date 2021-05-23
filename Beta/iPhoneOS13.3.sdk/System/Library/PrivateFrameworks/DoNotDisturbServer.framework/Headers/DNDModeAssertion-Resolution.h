/*
 Image: /System/Library/PrivateFrameworks/DoNotDisturbServer.framework/DoNotDisturbServer
 */

#import <DoNotDisturb/DNDModeAssertion.h>

@class NSString;

@interface DNDModeAssertion (Resolution)

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)predicateForModeAssertionsWithClientIdentifiers:(id)arg1;
+ (id)predicateForModeAssertionsWithDeviceIdentifier:(id)arg1;
+ (id)predicateForModeAssertionsWithUUIDs:(id)arg1;
+ (id)predicateForModeAssertionsWithLifetimeClass:(Class)arg1;
+ (id)predicateForModeAssertionsTakenBeforeDate:(id)arg1;

- (id)resolveWithExpectedRemoteDeviceIdentifier:(id)arg1 localDeviceIdentifier:(id)arg2 remoteDeviceIdentifier:(id)arg3;

@end
