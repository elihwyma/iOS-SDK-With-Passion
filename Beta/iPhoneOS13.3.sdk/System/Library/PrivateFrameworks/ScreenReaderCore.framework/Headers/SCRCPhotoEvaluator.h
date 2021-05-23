/*
 Image: /System/Library/PrivateFrameworks/ScreenReaderCore.framework/ScreenReaderCore
 */

#import <Foundation/NSObject.h>

@interface SCRCPhotoEvaluator : NSObject

+ (id)sharedInstance;

- (id)evaluateImage:(struct CGImage *)arg1 forCriteria:(unsigned long long)arg2 inRect:(struct CGRect)arg3;

@end
