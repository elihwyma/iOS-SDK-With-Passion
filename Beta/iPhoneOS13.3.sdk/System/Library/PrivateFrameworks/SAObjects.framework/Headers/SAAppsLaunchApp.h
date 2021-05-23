/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSString;

@interface SAAppsLaunchApp : SABaseClientBoundCommand

@property (copy, nonatomic) NSString *applicationClientIdentifier;
@property (copy, nonatomic) NSString *executionEnvironment;
@property (copy, nonatomic) NSString *launchId;

+ (id)launchApp;
+ (id)launchAppWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;
- (_Bool)requiresResponse;

@end
