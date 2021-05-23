/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SABaseClientBoundCommand.h>

@interface SADeviceMyriadConfiguration : SABaseClientBoundCommand

@property (nonatomic) double deviceAdjustment;
@property (nonatomic) double deviceClass;
@property (nonatomic) double deviceDelay;
@property (nonatomic) double deviceTrumpDelay;

+ (id)deviceMyriadConfiguration;
+ (id)deviceMyriadConfigurationWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;
- (_Bool)requiresResponse;

@end
