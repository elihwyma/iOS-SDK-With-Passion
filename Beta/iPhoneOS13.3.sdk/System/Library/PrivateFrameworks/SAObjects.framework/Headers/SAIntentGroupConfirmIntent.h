/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSString, SAIntentGroupProtobufMessage;

@interface SAIntentGroupConfirmIntent : SABaseClientBoundCommand

@property (retain, nonatomic) SAIntentGroupProtobufMessage *intent;
@property (copy, nonatomic) NSString *jsonEncodedIntent;

+ (id)confirmIntent;
+ (id)confirmIntentWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;
- (_Bool)requiresResponse;

@end
