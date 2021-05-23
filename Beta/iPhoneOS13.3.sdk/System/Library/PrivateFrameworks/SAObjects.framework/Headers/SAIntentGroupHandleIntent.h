/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSString, SAIntentGroupProtobufMessage;

@interface SAIntentGroupHandleIntent : SABaseClientBoundCommand

@property (nonatomic) _Bool allowsPunchOut;
@property (retain, nonatomic) SAIntentGroupProtobufMessage *intent;
@property (copy, nonatomic) NSString *jsonEncodedIntent;

+ (id)handleIntent;
+ (id)handleIntentWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;
- (_Bool)requiresResponse;

@end
