/*
 Image: /System/Library/PrivateFrameworks/SiriClientFlow.framework/SiriClientFlow
 */

#import <SAObjects/SACFFlowCompleted.h>

@interface SACFFlowCompleted (CFAdditions)

+ (id)successResponseWithAceId:(id)arg1 logs:(id)arg2;
+ (id)failureResponseWithAceId:(id)arg1 logs:(id)arg2;
+ (id)clientFlowCompletedWithRefId:(id)arg1 domain:(id)arg2 status:(long long)arg3 context:(id)arg4 contextVersion:(id)arg5 logs:(id)arg6;

@end
