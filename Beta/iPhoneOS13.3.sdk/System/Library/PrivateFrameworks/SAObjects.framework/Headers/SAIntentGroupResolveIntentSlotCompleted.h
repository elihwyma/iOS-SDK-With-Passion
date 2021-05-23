/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SABaseCommand.h>

#import <SAObjects/Swift-Protocol.h>

@class NSString, SAIntentGroupProtobufMessage;

@interface SAIntentGroupResolveIntentSlotCompleted : SABaseCommand <Swift>

@property (retain, nonatomic) SAIntentGroupProtobufMessage *intentSlotResolutionResult;
@property (copy, nonatomic) NSString *jsonEncodedIntentSlotResolutionResult;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic) NSString *aceId;
@property (copy, nonatomic) NSString *refId;

+ (id)resolveIntentSlotCompleted;
+ (id)resolveIntentSlotCompletedWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;
- (_Bool)requiresResponse;

@end
