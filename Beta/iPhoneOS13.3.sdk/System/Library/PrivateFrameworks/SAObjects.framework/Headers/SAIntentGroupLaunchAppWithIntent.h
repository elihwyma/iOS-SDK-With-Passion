/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSString, SAIntentGroupProtobufMessage;

@interface SAIntentGroupLaunchAppWithIntent : SABaseClientBoundCommand

@property (retain, nonatomic) SAIntentGroupProtobufMessage *handledIntent;
@property (retain, nonatomic) SAIntentGroupProtobufMessage *handledIntentResponse;
@property (copy, nonatomic) NSString *jsonEncodedHandledIntent;
@property (copy, nonatomic) NSString *jsonEncodedHandledIntentResponse;

+ (id)launchAppWithIntent;
+ (id)launchAppWithIntentWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;
- (_Bool)requiresResponse;

@end
