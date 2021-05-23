/*
 Image: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
 */

#import <Foundation/NSObject.h>

@interface SKReachConstraints : NSObject

{
    double _lowerAngleLimit;
    double _upperAngleLimit;
}

@property (nonatomic) double lowerAngleLimit;
@property (nonatomic) double upperAngleLimit;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithLowerAngleLimit:(double)arg1 upperAngleLimit:(double)arg2;

@end
