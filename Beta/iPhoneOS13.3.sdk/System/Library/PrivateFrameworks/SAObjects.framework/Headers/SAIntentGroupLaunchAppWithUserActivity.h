/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSString;

@interface SAIntentGroupLaunchAppWithUserActivity : SABaseClientBoundCommand

@property (copy, nonatomic) NSString *userActivityIdentifier;

+ (id)launchAppWithUserActivity;
+ (id)launchAppWithUserActivityWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;
- (_Bool)requiresResponse;

@end
