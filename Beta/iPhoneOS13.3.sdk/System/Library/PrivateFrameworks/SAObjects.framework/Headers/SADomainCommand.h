/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSNumber, NSURL;

@interface SADomainCommand : SABaseClientBoundCommand

@property (copy, nonatomic) NSURL *targetAppId;
@property (copy, nonatomic) NSURL *targetPluginId;
@property (copy, nonatomic) NSNumber *timeout;

+ (id)domainCommand;
+ (id)domainCommandWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;
- (_Bool)requiresResponse;

@end
