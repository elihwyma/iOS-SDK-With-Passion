/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <Foundation/NSObject.h>

@interface HDNSOperatingSystemVersion : NSObject

{
    CDStruct_f6aba300 _versionStruct;
}

@property CDStruct_2ec95fd7 versionStruct;

+ (id)versionWithMajor:(long long)arg1 minor:(long long)arg2 patch:(long long)arg3;
+ (id)unknownVersion;

@end
