/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSNumber, NSString, SAIntentGroupProtobufMessage;

@interface SAIntentGroupResolveIntentSlot : SABaseClientBoundCommand

@property (retain, nonatomic) SAIntentGroupProtobufMessage *intent;
@property (copy, nonatomic) NSString *intentSlotKeyPath;
@property (copy, nonatomic) NSNumber *intentSlotValueIndex;
@property (copy, nonatomic) NSString *jsonEncodedIntent;

+ (id)resolveIntentSlot;
+ (id)resolveIntentSlotWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;
- (_Bool)requiresResponse;
- (_Bool)mutatingCommand;

@end
