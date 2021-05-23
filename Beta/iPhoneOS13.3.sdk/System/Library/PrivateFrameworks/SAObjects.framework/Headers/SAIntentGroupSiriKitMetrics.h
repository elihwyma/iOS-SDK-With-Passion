/*
 Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import <SAObjects/AceObject.h>

#import <SAObjects/Swift-Protocol.h>

@class NSNumber, NSString;

@interface SAIntentGroupSiriKitMetrics : AceObject <Swift>

@property (copy, nonatomic) NSString *interactionId;
@property (copy, nonatomic) NSString *resultCandidateId;
@property (copy, nonatomic) NSString *taskId;
@property (copy, nonatomic) NSNumber *taskStepStartTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)siriKitMetrics;
+ (id)siriKitMetricsWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
