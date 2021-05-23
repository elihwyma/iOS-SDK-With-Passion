/*
 Image: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
 */

#import <Foundation/NSObject.h>

@class SKNode;

__attribute__((visibility("hidden")))
@interface IKLink : NSObject

{
    float _angleInitial;
    float _angle;
    float _length;
    SKNode *_node;
    union _GLKVector2 _position;
    union _GLKVector2 _size;
}

@property (retain, nonatomic) SKNode *node;
@property (nonatomic) union _GLKVector2 position;
@property (nonatomic) float angleInitial;
@property (nonatomic, readonly) float angle;
@property (nonatomic) float length;
@property (nonatomic) union _GLKVector2 size;

- (id)initWithNode:(id)arg1;
- (void)rotateByAngle:(float)arg1;
- (double)normalizeAngle:(double)arg1;

@end
