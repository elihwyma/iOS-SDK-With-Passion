/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SABaseClientBoundCommand.h>

@interface SASetContextConfiguration : SABaseClientBoundCommand

@property (nonatomic) long long contextTimeoutSeconds;

+ (id)setContextConfiguration;
+ (id)setContextConfigurationWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;
- (_Bool)requiresResponse;

@end
