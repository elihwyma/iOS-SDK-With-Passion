/*
 Image: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
 */

#import <SpriteKit/SKNode.h>

@interface SKCropNode : SKNode

{
    SKNode *_mask;
    struct SKCCropNode *_skcCropNode;
}

@property (nonatomic) _Bool prefersAlphaMask;
@property (nonatomic) _Bool invertMask;
@property (retain, nonatomic) SKNode *maskNode;

+ (_Bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)isEqualToNode:(id)arg1;
- (struct SKCNode *)_makeBackingNode;
- (void)_didMakeBackingNode;
- (void)useAlphaMask:(_Bool)arg1;

@end
