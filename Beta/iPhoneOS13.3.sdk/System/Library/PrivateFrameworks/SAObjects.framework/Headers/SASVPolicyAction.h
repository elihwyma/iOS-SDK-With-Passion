/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/AceObject.h>

#import <SAObjects/Swift-Protocol.h>

@class NSString, SASVPolicyActionNode;

@interface SASVPolicyAction : AceObject <Swift>

@property (copy, nonatomic) NSString *name;
@property (retain, nonatomic) SASVPolicyActionNode *policyActionRoot;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)policyAction;
+ (id)policyActionWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
