/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSArray, NSString, SAIntentGroupProtobufMessage;

@interface SAIntentGroupProcessIntent : SABaseClientBoundCommand

@property (nonatomic) _Bool allowsPunchOut;
@property (retain, nonatomic) SAIntentGroupProtobufMessage *intent;
@property (copy, nonatomic) NSArray *intentSlotKeyPaths;
@property (copy, nonatomic) NSString *jsonEncodedIntent;
@property (nonatomic) _Bool shouldRunHandleIntent;

+ (id)processIntent;
+ (id)processIntentWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;
- (_Bool)requiresResponse;
- (_Bool)mutatingCommand;

@end
