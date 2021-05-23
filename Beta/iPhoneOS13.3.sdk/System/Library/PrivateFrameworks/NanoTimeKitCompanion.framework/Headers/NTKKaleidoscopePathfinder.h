/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <Foundation/NSObject.h>

@class MISSING_TYPE;

@interface NTKKaleidoscopePathfinder : NSObject

{
    float _sampleRadiusX;
    float _sampleRadiusY;
    int _cellGridWidth;
    int _cellGridHeight;
    int _pathLength;
    MISSING_TYPE **_dominanceGrid;
    MISSING_TYPE **_path;
    float _startRotation;
}

@property (nonatomic, readonly) int cellGridWidth;
@property (nonatomic, readonly) int cellGridHeight;
@property (nonatomic, readonly) int pathLength;
@property (nonatomic, readonly) float startRotation;

+ (_Bool)supportsSecureCoding;
+ (id)pathfinderFromFile:(id)arg1;
+ (id)pathfinderWithImage:(id)arg1;
+ (id)pathfinderFromDirectory:(id)arg1;

- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithImage:(id)arg1;
- (_Bool)writeToFile:(id)arg1;
- (struct NTKKaleidoscopePathfinderPoint)pointForTime:(float)arg1;
- (_Bool)writeToDirectory:(id)arg1;
- (void)adjustRotationStart:(float)arg1;
- (void)adjustSampleRadius:(float)arg1;
- (void)adjustPathStart: /* Error: Ran out of types for this method. */;

@end
