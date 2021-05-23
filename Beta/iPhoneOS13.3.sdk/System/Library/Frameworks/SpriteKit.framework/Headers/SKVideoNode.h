/*
 Image: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
 */

#import <SpriteKit/SKNode.h>

@class AVPlayer, NSString, NSURL;

@interface SKVideoNode : SKNode

{
    struct SKCVideoNode *_skcVideoNode;
    _Bool _isUsingKVO;
    NSString *_videoFileName;
    NSURL *_videoFileURL;
    AVPlayer *_player;
}

@property (retain, nonatomic) AVPlayer *_player;
@property (nonatomic) struct CGSize size;
@property (nonatomic) struct CGPoint anchorPoint;

+ (_Bool)supportsSecureCoding;
+ (id)debugHierarchyPropertyDescriptions;
+ (id)debugHierarchyValueForPropertyWithName:(id)arg1 onObject:(id)arg2 outOptions:(id *)arg3 outError:(id *)arg4;
+ (id)videoNodeWithFileNamed:(id)arg1;
+ (id)videoNodeWithURL:(id)arg1;
+ (id)videoNodeWithVideoFileNamed:(id)arg1;
+ (id)videoNodeWithVideoURL:(id)arg1;
+ (id)videoNodeWithAVPlayer:(id)arg1;

- (id)init;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithURL:(id)arg1;
- (void)pause;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)commonInit;
- (void)setPaused:(_Bool)arg1;
- (void)play;
- (id)initWithVideoURL:(id)arg1;
- (id)initWithFileNamed:(id)arg1;
- (_Bool)isEqualToNode:(id)arg1;
- (struct SKCNode *)_makeBackingNode;
- (void)_didMakeBackingNode;
- (id)initWithAVPlayer:(id)arg1;
- (id)initWithVideoFileNamed:(id)arg1;

@end
