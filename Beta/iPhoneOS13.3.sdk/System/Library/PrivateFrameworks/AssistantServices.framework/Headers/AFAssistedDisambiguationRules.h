/*
 Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

#import <Foundation/NSObject.h>

@interface AFAssistedDisambiguationRules : NSObject

@property (nonatomic, readonly) unsigned long long decisionDepth;
@property (nonatomic, readonly) double decisionAge;
@property (nonatomic, readonly) double decisionThreshold;
@property (nonatomic, readonly) unsigned long long maxPersistenceDepth;
@property (nonatomic, readonly) double maxPersistenceAge;

+ (id)defaultRules;

- (double)weightForEvent:(id)arg1;

@end
