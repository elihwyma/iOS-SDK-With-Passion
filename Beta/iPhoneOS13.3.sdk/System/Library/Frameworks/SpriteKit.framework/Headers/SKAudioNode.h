/*
 Image: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
 */

#import <SpriteKit/SKNode.h>

@class AVAudioNode;

@interface SKAudioNode : SKNode

{
    struct SKCAudioNode *_skcAudioNode;
    _Bool _autoplayLooped;
    _Bool _positional;
}

@property (retain, nonatomic) AVAudioNode *avAudioNode;
@property (nonatomic) _Bool autoplayLooped;
@property (nonatomic, getter=isPositional) _Bool positional;

+ (_Bool)supportsSecureCoding;
+ (id)_audioURLWithName:(id)arg1 bundle:(id)arg2;

- (id)init;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithURL:(id)arg1;
- (void)commonInit;
- (id)audioURL;
- (void)setAudioURL:(id)arg1;
- (id)initWithAVAudioNode:(id)arg1;
- (id)audioFile;
- (id)initWithFileNamed:(id)arg1;
- (_Bool)isEqualToNode:(id)arg1;
- (void)setAudioFileName:(id)arg1;
- (id)audioFileName;
- (void)_setAudioName:(id)arg1 bundle:(id)arg2;
- (id)initWithFileNamed:(id)arg1 bundle:(id)arg2;
- (void)_playLooped;
- (void)_connectToScene:(id)arg1;
- (struct SKCNode *)_makeBackingNode;
- (void)_didMakeBackingNode;

@end
