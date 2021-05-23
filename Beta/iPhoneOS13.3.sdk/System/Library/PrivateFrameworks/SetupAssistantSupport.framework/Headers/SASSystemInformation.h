/*
 Image: /System/Library/PrivateFrameworks/SetupAssistantSupport.framework/SetupAssistantSupport
 */

#import <Foundation/NSObject.h>

@interface SASSystemInformation : NSObject

+ (id)productVersion;
+ (id)storageCapacity;
+ (id)storageAvailable;
+ (long long)compareProductVersion:(id)arg1 toProductVersion:(id)arg2;

@end
