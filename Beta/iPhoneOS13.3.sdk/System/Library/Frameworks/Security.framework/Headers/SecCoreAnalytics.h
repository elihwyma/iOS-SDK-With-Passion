/*
 Image: /System/Library/Frameworks/Security.framework/Security
 */

#import <Foundation/NSObject.h>

@interface SecCoreAnalytics : NSObject

+ (void)sendEvent:(id)arg1 event:(id)arg2;
+ (void)sendEventLazy:(id)arg1 builder:(CDUnknownBlockType)arg2;

@end
