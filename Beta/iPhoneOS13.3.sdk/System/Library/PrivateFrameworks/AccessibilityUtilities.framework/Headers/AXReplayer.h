/*
 Image: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
 */

#import <Foundation/NSObject.h>

@interface AXReplayer : NSObject

+ (id)replayer;

- (void)replayWithName:(id)arg1 attempts:(long long)arg2 interval:(double)arg3 async:(_Bool)arg4 queue:(id)arg5 replayBlock:(CDUnknownBlockType)arg6 completion:(CDUnknownBlockType)arg7;

@end
