/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/AceObject.h>

#import <SAObjects/Swift-Protocol.h>

@class NSArray, NSString, SASVSpeechMetadata;

@interface SASVPolicyActionNode : AceObject <Swift>

@property (copy, nonatomic) NSArray *children;
@property (copy, nonatomic) NSString *confirmationType;
@property (copy, nonatomic) NSString *name;
@property (retain, nonatomic) SASVSpeechMetadata *speechMetadata;
@property (copy, nonatomic) NSString *type;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)policyActionNode;
+ (id)policyActionNodeWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
