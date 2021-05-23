/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface _UIElasticValue : NSObject

{
    double _currentValue;
    double _targetValue;
    double _speed;
    double _friction;
    double _momentum;
}

@property (nonatomic) double currentValue;
@property (nonatomic) double targetValue;
@property (nonatomic) double speed;
@property (nonatomic, readonly, getter=isSteady) _Bool steady;
@property (nonatomic) double friction;
@property (nonatomic) double momentum;

- (id)init;
- (id)description;
- (void)update:(double)arg1;
- (id)initWithValue:(double)arg1;
- (void)updateFromDisplayLink:(id)arg1;

@end
