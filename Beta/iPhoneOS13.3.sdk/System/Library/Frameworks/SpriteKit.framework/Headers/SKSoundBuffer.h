/*
 Image: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
 */

#import <Foundation/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface SKSoundBuffer : NSObject

{
    unsigned int _bufferId;
    NSString *_path;
    double _duration;
}

@property (nonatomic, readonly) unsigned int bufferId;
@property (nonatomic, readonly) double duration;

+ (id)bufferWithFileNamed:(id)arg1;

- (id)init;
- (void)dealloc;
- (id)description;

@end
