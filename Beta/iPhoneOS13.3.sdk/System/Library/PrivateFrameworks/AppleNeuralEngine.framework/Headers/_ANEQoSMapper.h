/*
 Image: /System/Library/PrivateFrameworks/AppleNeuralEngine.framework/AppleNeuralEngine
 */

#import <Foundation/NSObject.h>

@interface _ANEQoSMapper : NSObject

+ (unsigned int)aneRealTimeTaskQoS;
+ (unsigned int)aneUserInteractiveTaskQoS;
+ (unsigned int)aneUserInitiatedTaskQoS;
+ (unsigned int)aneDefaultTaskQoS;
+ (unsigned int)aneUtilityTaskQoS;
+ (unsigned int)aneBackgroundTaskQoS;
+ (unsigned long long)queueIndexForQoS:(unsigned int)arg1;
+ (unsigned long long)realTimeQueueIndex;
+ (int)programPriorityForQoS:(unsigned int)arg1;
+ (int)realTimeProgramPriority;

@end
