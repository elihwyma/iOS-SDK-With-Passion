/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SADomainObject.h>

@class SAIntentGroupProtobufMessage;

@interface SAIntentGroupAceAppIntentPolicyAndVocab : SADomainObject

@property (retain, nonatomic) SAIntentGroupProtobufMessage *aceAppBundleInfo;

+ (id)aceAppIntentPolicyAndVocab;
+ (id)aceAppIntentPolicyAndVocabWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
