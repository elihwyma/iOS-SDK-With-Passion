/*
 Image: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface SKSoundContext : NSObject

{
    struct ALCdevice_struct *_device;
    struct ALCcontext_struct *_context;
    _Bool _suspended;
}

@property (nonatomic) double gain;
@property (nonatomic) struct CGPoint listenerPosition;
@property (nonatomic) _Bool suspended;

+ (id)context;
+ (id)currentContext;

- (id)init;
- (void)dealloc;
- (void)makeCurrentContext;

@end
