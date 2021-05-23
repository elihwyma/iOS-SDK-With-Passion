/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SABaseCommand.h>

#import <SAObjects/Swift-Protocol.h>

@class NSArray, NSDictionary, NSString;

@interface SAAppsGetRestrictedAppsResponse : SABaseCommand <Swift>

@property (copy, nonatomic) NSDictionary *appToItsRestrictionsMap;
@property (copy, nonatomic) NSArray *restrictedApps;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic) NSString *aceId;
@property (copy, nonatomic) NSString *refId;

+ (id)getRestrictedAppsResponse;
+ (id)getRestrictedAppsResponseWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;
- (_Bool)requiresResponse;

@end
