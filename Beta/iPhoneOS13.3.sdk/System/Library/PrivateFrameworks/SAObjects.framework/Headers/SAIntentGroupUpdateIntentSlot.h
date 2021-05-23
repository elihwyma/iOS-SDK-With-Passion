/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SABaseCommand.h>

#import <SAObjects/Swift-Protocol.h>

@class NSNumber, NSString, SAIntentGroupProtobufMessage;

@interface SAIntentGroupUpdateIntentSlot : SABaseCommand <Swift>

@property (copy, nonatomic) NSString *intentSlotKeyPath;
@property (retain, nonatomic) SAIntentGroupProtobufMessage *intentSlotResolutionResult;
@property (copy, nonatomic) NSNumber *intentSlotValueIndex;
@property (copy, nonatomic) NSString *intentTypeName;
@property (copy, nonatomic) NSString *jsonEncodedIntentSlotResolutionResult;
@property (retain, nonatomic) SAIntentGroupProtobufMessage *location;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic) NSString *aceId;
@property (copy, nonatomic) NSString *refId;

+ (id)updateIntentSlot;
+ (id)updateIntentSlotWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;
- (_Bool)requiresResponse;

@end
