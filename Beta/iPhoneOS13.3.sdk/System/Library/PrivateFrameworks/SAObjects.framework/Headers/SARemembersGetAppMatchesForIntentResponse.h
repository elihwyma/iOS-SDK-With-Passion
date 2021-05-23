/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SABaseCommand.h>

#import <SAObjects/Swift-Protocol.h>

@class NSArray, NSString;

@interface SARemembersGetAppMatchesForIntentResponse : SABaseCommand <Swift>

@property (copy, nonatomic) NSString *jsonMatchSignals;
@property (copy, nonatomic) NSString *matchStatus;
@property (copy, nonatomic) NSArray *matchingBundleIDs;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic) NSString *aceId;
@property (copy, nonatomic) NSString *refId;

+ (id)getAppMatchesForIntentResponse;
+ (id)getAppMatchesForIntentResponseWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;
- (_Bool)requiresResponse;

@end
