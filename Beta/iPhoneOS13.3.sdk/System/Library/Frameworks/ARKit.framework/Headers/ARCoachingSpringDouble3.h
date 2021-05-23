/*
 Image: /System/Library/Frameworks/ARKit.framework/ARKit
 */

#import <Foundation/NSObject.h>

@class MISSING_TYPE, NSArray;

@interface ARCoachingSpringDouble3 : NSObject

{
    NSArray *_springs;
    double _response;
    double _dampingRatio;
}

@property (nonatomic, readonly) NSArray *springs;
@property (nonatomic) MISSING_TYPE *value;
@property (nonatomic) MISSING_TYPE *target;
@property (nonatomic) MISSING_TYPE *velocity;
@property (nonatomic) MISSING_TYPE *floatValue;
@property (nonatomic) double response;
@property (nonatomic) double dampingRatio;

- (id)init;
- (void)stepWithDeltaTime:(double)arg1;

@end
