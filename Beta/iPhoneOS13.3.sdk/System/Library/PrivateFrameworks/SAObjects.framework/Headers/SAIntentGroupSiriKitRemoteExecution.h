/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/AceObject.h>

#import <SAObjects/Swift-Protocol.h>

@class NSString;

@interface SAIntentGroupSiriKitRemoteExecution : AceObject <Swift>

@property (copy, nonatomic) NSString *executionDeviceAssistantId;
@property (copy, nonatomic) NSString *invocationDeviceAssistantId;
@property (copy, nonatomic) NSString *personalDomainAuthenticationMode;
@property (copy, nonatomic) NSString *runLocation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)siriKitRemoteExecution;
+ (id)siriKitRemoteExecutionWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
