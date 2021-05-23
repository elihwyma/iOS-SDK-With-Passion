/*
 Image: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
 */

#import <SpriteKit/SKSpriteNode.h>

@class NSObject, SKAction;

@protocol SKButtonNodeSpriteDelegate;

@interface SKButtonNodeSprite : SKSpriteNode

{
    NSObject<SKButtonNodeSpriteDelegate> *_delegate;
    SKAction *_downAction;
    SKAction *_upAction;
    CDUnknownBlockType _downBlock;
    CDUnknownBlockType _upBlock;
    CDUnknownBlockType _upInsideBlock;
    int _touches;
}

@property (weak, nonatomic) NSObject<SKButtonNodeSpriteDelegate> *delegate;
@property (retain, nonatomic) SKAction *downAction;
@property (retain, nonatomic) SKAction *upAction;

+ (_Bool)supportsSecureCoding;
+ (id)buttonWithFontNamed:(id)arg1;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchBegan:(unsigned long long)arg1 location:(struct CGPoint)arg2;
- (void)touchEnded:(unsigned long long)arg1 location:(struct CGPoint)arg2;
- (void)touchMoved:(unsigned long long)arg1 location:(struct CGPoint)arg2;
- (void)onTouchUpInside:(CDUnknownBlockType)arg1;
- (void)onTouchUp:(CDUnknownBlockType)arg1;
- (void)onTouchDownInside:(CDUnknownBlockType)arg1;

@end
