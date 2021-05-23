/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSArray, NSString, SAIntentGroupProtobufMessage;

@interface SAIntentGroupResolveAppForIntent : SABaseClientBoundCommand

@property (copy, nonatomic) NSArray *appsList;
@property (retain, nonatomic) SAIntentGroupProtobufMessage *intent;
@property (copy, nonatomic) NSString *jsonEncodedIntent;

+ (id)resolveAppForIntent;
+ (id)resolveAppForIntentWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;
- (_Bool)requiresResponse;

@end
