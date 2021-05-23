/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <Foundation/NSObject.h>

@class NSArray, NSDictionary, UIBezierPath;

@interface NTKBezierPathPointModel : NSObject

{
    UIBezierPath *_path;
    NSArray *_pathElements;
    NSDictionary *_horizontalPercentageCache;
}

@property (nonatomic, readonly) UIBezierPath *path;

- (id)initWithPath:(id)arg1;
- (id)_buildHorizontalPercentageCache;
- (struct CGPoint)pointOnPathForHorizontalPercentage:(double)arg1 withEndPadding:(double)arg2;
- (double)_estimatePercentageForEndPadding:(double)arg1;
- (struct CGPoint)_computePointOnPathForHorizontalPercentage:(double)arg1;
- (double)_computeDistanceBetweenPointA:(struct CGPoint)arg1 andPointB:(struct CGPoint)arg2;
- (struct CGPoint)pointOnPathForHorizontalPercentage:(double)arg1;

@end
