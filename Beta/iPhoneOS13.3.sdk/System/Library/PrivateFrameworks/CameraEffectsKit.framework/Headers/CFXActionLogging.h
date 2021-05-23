/*
 Image: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
 */

#import <Foundation/NSObject.h>

@interface CFXActionLogging : NSObject

+ (id)actionLogAsJSONForEvent:(id)arg1 atLocation:(id)arg2 withEffectStack:(id)arg3;
+ (id)CFX_actionLogDictionaryWithEvent:(id)arg1 atLocation:(id)arg2 withEffectStack:(id)arg3;
+ (id)remainingMemory;
+ (id)actionLogAsStringForEvent:(id)arg1 atLocation:(id)arg2 withEffectStack:(id)arg3;

@end
