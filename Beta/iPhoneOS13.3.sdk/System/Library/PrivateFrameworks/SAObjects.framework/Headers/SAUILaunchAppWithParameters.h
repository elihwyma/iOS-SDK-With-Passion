/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSDictionary, NSString;

@interface SAUILaunchAppWithParameters : SABaseClientBoundCommand

@property (copy, nonatomic) NSString *appBundleId;
@property (copy, nonatomic) NSDictionary *parameters;

+ (id)launchAppWithParameters;
+ (id)launchAppWithParametersWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;
- (_Bool)requiresResponse;

@end
