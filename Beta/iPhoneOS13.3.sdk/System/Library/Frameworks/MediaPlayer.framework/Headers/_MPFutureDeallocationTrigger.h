/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <Foundation/NSObject.h>

@interface _MPFutureDeallocationTrigger : NSObject

{
    CDUnknownBlockType _block;
}

@property (copy, nonatomic) CDUnknownBlockType block;

+ (id)triggerWithBlock:(CDUnknownBlockType)arg1;

- (void)dealloc;

@end
