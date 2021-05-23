/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSString;

@interface SAAppsCheckRestriction : SABaseClientBoundCommand

@property (copy, nonatomic) NSString *executionEnvironment;
@property (copy, nonatomic) NSString *launchId;

+ (id)checkRestriction;
+ (id)checkRestrictionWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;
- (_Bool)requiresResponse;

@end
