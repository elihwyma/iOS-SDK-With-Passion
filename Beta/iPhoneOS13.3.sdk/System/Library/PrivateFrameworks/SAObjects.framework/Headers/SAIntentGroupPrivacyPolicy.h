/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/AceObject.h>

#import <SAObjects/Swift-Protocol.h>

@class NSString;

@interface SAIntentGroupPrivacyPolicy : AceObject <Swift>

@property (copy, nonatomic) NSString *privacyCategory;
@property (copy, nonatomic) NSString *redactionTarget;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)privacyPolicy;
+ (id)privacyPolicyWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
