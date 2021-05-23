/*
 Image: /System/Library/PrivateFrameworks/DifferentialPrivacy.framework/DifferentialPrivacy
 */

#import <NSObject.h>

@interface _DPDeviceInfo : NSObject

+ (id)osVersion;
+ (_Bool)isInternalBuild;
+ (_Bool)isDataCollectionEnabled;
+ (_Bool)isDisabledByTasking;

@end
