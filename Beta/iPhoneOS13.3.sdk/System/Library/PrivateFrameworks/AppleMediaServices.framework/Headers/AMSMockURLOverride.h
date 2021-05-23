/*
 Image: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface AMSMockURLOverride : NSObject

+ (id)overrideWithHost:(id)arg1 usingResponse:(id)arg2;
+ (id)overrideWithPathComponent:(id)arg1 usingResponse:(id)arg2;
+ (id)overrideWithURLRegex:(id)arg1 usingResponse:(id)arg2;

@end
