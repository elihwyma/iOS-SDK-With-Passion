/*
 Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

#import <Foundation/NSObject.h>

@class CAAnimation, NSString, SCNNode;

@interface SCNParticlePropertyController : NSObject

{
    CAAnimation *_animation;
    long long _inputMode;
    double _inputScale;
    double _inputBias;
    SCNNode *_inputOrigin;
    NSString *_inputProperty;
    id _c3dAnimation;
}

@property (retain, nonatomic) CAAnimation *animation;
@property (nonatomic) long long inputMode;
@property (nonatomic) double inputScale;
@property (nonatomic) double inputBias;
@property (weak, nonatomic) SCNNode *inputOrigin;
@property (copy, nonatomic) NSString *inputProperty;

+ (_Bool)supportsSecureCoding;
+ (id)particlePropertyControllerWithAnimation:(id)arg1;
+ (id)controllerWithAnimation:(id)arg1;

- (id)init;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)copy;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setC3dAnimation:(id)arg1;
- (id)c3dAnimation;
- (void)_customEncodingOfSCNParticlePropertyController:(id)arg1;
- (void)_customDecodingOfSCNParticlePropertyController:(id)arg1;

@end
