/*
 Image: /System/Library/PrivateFrameworks/AudioToolboxCore.framework/AudioToolboxCore
 */

#import <Foundation/NSObject.h>

@interface RemoteProcessingBlockServer : NSObject

+ (int)registerRPB:(id)arg1 outRPBlockID:(unsigned int *)arg2;
+ (int)unregisterRPB:(unsigned int)arg1;
+ (int)registerItem:(unsigned int *)arg1 inRPBlockID:(unsigned int)arg2;
+ (int)unregisterItem:(unsigned int)arg1 inRPBlockID:(unsigned int)arg2;
+ (int)propertiesChanged:(unsigned int)arg1 inPropertyIDs:(id)arg2;
+ (int)propertyChanged:(unsigned int)arg1 inPropertyID:(unsigned int)arg2;
+ (int)itemPropertyChanged:(unsigned int)arg1 inItemID:(unsigned int)arg2 inPropertyID:(unsigned int)arg3;
+ (int)itemParameterChanged:(unsigned int)arg1 inItemID:(unsigned int)arg2 inParmameterID:(unsigned int)arg3 inParameterValue:(float)arg4;

@end
