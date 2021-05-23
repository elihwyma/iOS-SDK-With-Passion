/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SABaseClientBoundCommand.h>

#import <SAObjects/Swift-Protocol.h>

@class NSArray, NSString;

@interface SARemembersGetRelativeAppUsageProbabilities : SABaseClientBoundCommand <Swift>

@property (copy, nonatomic) NSArray *bundleIDs;
@property (nonatomic) long long days;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)getRelativeAppUsageProbabilities;
+ (id)getRelativeAppUsageProbabilitiesWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;
- (_Bool)requiresResponse;
- (_Bool)mutatingCommand;

@end
