/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <Foundation/NSObject.h>

@class NTKSolarTimeModel, UIBezierPath;

@interface NTKSolarPath : NSObject

{
    UIBezierPath *_bezierPath;
    struct CGRect _bounds;
    NTKSolarTimeModel *_solarTimeModel;
    _Bool _verticallyFitsPathToBounds;
    _Bool _usePlaceholderData;
    struct CGPoint _points[29];
    double _altitude[29];
}

@property (nonatomic, readonly) UIBezierPath *bezierPath;
@property (nonatomic, readonly) struct CGRect bounds;
@property (nonatomic, readonly) NTKSolarTimeModel *solarTimeModel;
@property (nonatomic, readonly) _Bool verticallyFitsPathToBounds;

- (id)initWithBounds:(struct CGRect)arg1 solarTimeModel:(id)arg2 verticallyFitsPathToBounds:(_Bool)arg3 usePlaceholderData:(_Bool)arg4;
- (double)altitudeAtPercentage:(double)arg1;
- (id)_computeSolarPath;
- (double)altitudeAtX:(double)arg1;

@end
