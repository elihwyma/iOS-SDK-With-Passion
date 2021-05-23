/*
 Image: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
 */

#import <Foundation/NSObject.h>

@class NSArray;

@interface CRKTrustEvaluationPolicies : NSObject

{
    NSArray *_policyRefs;
}

@property (copy, nonatomic, readonly) NSArray *policyRefs;

+ (id)defaultPolicicesForServerEvaluation;
+ (id)defaultPoliciesForClientEvaluation;

- (id)init;
- (id)initWithPolicyRefs:(id)arg1;

@end
