/*
 Image: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
 */

#import <SpriteKit/SKAction.h>

@class NSString, SKSoundSource;

__attribute__((visibility("hidden")))
@interface SKPlaySound : SKAction

{
    NSString *_filePath;
    NSString *_fileName;
    struct SKCPlaySound *_mycaction;
    struct CGPoint _position;
    SKSoundSource *_soundSource;
}

+ (_Bool)supportsSecureCoding;
+ (id)playSoundFileNamed:(id)arg1 atPosition:(struct CGPoint)arg2 waitForCompletion:(_Bool)arg3;
+ (id)_audioURLWithName:(id)arg1 bundle:(id)arg2;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)reversedAction;

@end
