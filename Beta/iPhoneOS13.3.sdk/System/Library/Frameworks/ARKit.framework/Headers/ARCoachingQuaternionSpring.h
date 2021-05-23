/*
 Image: /System/Library/Frameworks/ARKit.framework/ARKit
 */

#import <Foundation/NSObject.h>

@class NSArray;

@interface ARCoachingQuaternionSpring : NSObject

{
    NSArray *_springs;
    double _response;
    double _dampingRatio;
}

@property (nonatomic, readonly) NSArray *springs;
@property (nonatomic) CDStruct_183601bc value;
@property (nonatomic) CDStruct_183601bc target;
@property (nonatomic) CDStruct_183601bc velocity;
@property (nonatomic) double response;
@property (nonatomic) double dampingRatio;

- (id)init;
- (void)stepWithDeltaTime:(double)arg1;

@end
