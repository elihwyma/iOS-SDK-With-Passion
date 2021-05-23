/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SABaseClientBoundCommand.h>

#import <SAObjects/Swift-Protocol.h>

@class NSArray, NSString, SAIntentGroupProtobufMessage;

@interface SARemembersGetAppMatchesForIntent : SABaseClientBoundCommand <Swift>

@property (copy, nonatomic) NSArray *candidateBundleIDs;
@property (copy, nonatomic) NSString *jsonEncodedIntent;
@property (retain, nonatomic) SAIntentGroupProtobufMessage *protoEncodedIntent;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)getAppMatchesForIntent;
+ (id)getAppMatchesForIntentWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;
- (_Bool)requiresResponse;
- (_Bool)mutatingCommand;

@end
