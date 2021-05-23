/*
 Image: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation
 */

@class HMFMessage, NSArray, NSString;

@interface HMFMessageFilter

{
    HMFMessage *_message;
}

@property (copy, readonly) HMFMessage *message;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, readonly) NSString *shortDescription;
@property (copy, readonly) NSString *privateDescription;
@property (copy, readonly) NSString *propertyDescription;
@property (copy, nonatomic, readonly) NSArray *attributeDescriptions;

+ (id)logCategory;
+ (_Bool)canInitWithMessage:(id)arg1;
+ (id)policyClasses;

- (id)init;
- (id)initWithMessage:(id)arg1;
- (id)logIdentifier;
- (_Bool)acceptWithPolicies:(id)arg1 error:(id *)arg2;

@end
