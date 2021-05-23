/*
 Image: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos
 */

#import <QuartzCore/CADisplayLink.h>

@interface CADisplayLink (RCAdditions)

+ (id)rc_displayLinkWithWeakTarget:(id)arg1 selector:(SEL)arg2;
+ (id)rc_displayWithFramesPerSecond:(long long)arg1 handlerBlock:(CDUnknownBlockType)arg2;

@end
