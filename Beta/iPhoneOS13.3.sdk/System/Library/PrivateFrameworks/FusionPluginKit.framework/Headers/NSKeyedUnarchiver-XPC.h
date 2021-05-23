/*
 Image: /System/Library/PrivateFrameworks/FusionPluginKit.framework/FusionPluginKit
 */

#import <Foundation/NSKeyedUnarchiver.h>

@interface NSKeyedUnarchiver (XPC)

+ (id)_unarchiveObjectFromVersion1XPCObject:(id)arg1 allowedClasses:(id)arg2;
+ (id)unarchiveDataToObject:(id)arg1 allowedClasses:(id)arg2;
+ (id)unarchiveXPCObject:(id)arg1 allowedClasses:(id)arg2;

@end
