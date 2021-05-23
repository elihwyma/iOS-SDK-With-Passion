/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/SABaseCommand.h>

#import <SAObjects/Swift-Protocol.h>

@class NSString, SAIntentGroupBatchSlotResolutionResult, SAIntentGroupConfirmIntentCompleted, SAIntentGroupHandleIntentCompleted;

@interface SAIntentGroupProcessIntentCompleted : SABaseCommand <Swift>

@property (retain, nonatomic) SAIntentGroupBatchSlotResolutionResult *batchSlotResolutionResult;
@property (retain, nonatomic) SAIntentGroupConfirmIntentCompleted *confirmIntentCompleted;
@property (retain, nonatomic) SAIntentGroupHandleIntentCompleted *handleIntentCompleted;
@property (copy, nonatomic) NSString *lastAttemptedStep;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic) NSString *aceId;
@property (copy, nonatomic) NSString *refId;

+ (id)processIntentCompleted;
+ (id)processIntentCompletedWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;
- (_Bool)requiresResponse;

@end
