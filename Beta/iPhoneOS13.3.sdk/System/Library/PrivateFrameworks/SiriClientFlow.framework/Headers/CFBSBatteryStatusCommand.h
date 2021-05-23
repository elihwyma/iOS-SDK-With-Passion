/*
 Image: /System/Library/PrivateFrameworks/SiriClientFlow.framework/SiriClientFlow
 */

#import <SAObjects/SADomainCommand.h>

@class NSString;

@interface CFBSBatteryStatusCommand : SADomainCommand

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)command;
+ (id)aceObjectWithDictionary:(id)arg1 context:(id)arg2;
+ (id)commandWithDictionary:(id)arg1 context:(id)arg2;
+ (void)batteryDeviceControllerWithCompletion:(CDUnknownBlockType)arg1;

- (id)groupIdentifier;
- (id)encodedClassName;
- (_Bool)requiresResponse;
- (void)handleWithCompletion:(CDUnknownBlockType)arg1;

@end
