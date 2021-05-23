/*
 Image: /System/Library/PrivateFrameworks/AppleNeuralEngine.framework/AppleNeuralEngine
 */

#import <Foundation/NSObject.h>

@interface _ANEDeviceInfo : NSObject

+ (id)buildVersion;
+ (_Bool)isInternalBuild;
+ (id)bootArgs;
+ (id)aneSubType;
+ (_Bool)hasANE;
+ (_Bool)precompiledModelChecksDisabled;

@end
