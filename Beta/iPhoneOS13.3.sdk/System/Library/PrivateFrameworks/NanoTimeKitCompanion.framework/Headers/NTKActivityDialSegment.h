/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <Foundation/NSObject.h>

@class CALayer, NTKFaceColorScheme;

@interface NTKActivityDialSegment : NSObject

{
    double _alpha;
    NTKFaceColorScheme *_colorScheme;
    CALayer *_arcLayer;
    CALayer *_tickLayer;
    double _tickRotation;
    double _tickScale;
}

@property (nonatomic) double alpha;
@property (retain, nonatomic) NTKFaceColorScheme *colorScheme;
@property (retain, nonatomic) CALayer *arcLayer;
@property (retain, nonatomic) CALayer *tickLayer;
@property (nonatomic) double tickRotation;
@property (nonatomic) double tickScale;

- (void)_updateTransform;
- (id)initWithHourIndex:(long long)arg1;

@end
