/*
 Image: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities
 */

#import <AXMediaUtilities/AXMEvaluationNode.h>

@interface AXMRectangleDetectorNode : AXMEvaluationNode

{
    double _cameraPixelFocalLength;
    double _minimumAspectRatio;
    double _maximumAspectRatio;
    double _quadratureTolerance;
    double _minimumSize;
    long long _maximumNumberOfRects;
    struct CGPoint _cameraOpticalOrigin;
}

@property (nonatomic) double cameraPixelFocalLength;
@property (nonatomic) struct CGPoint cameraOpticalOrigin;
@property (nonatomic) double minimumAspectRatio;
@property (nonatomic) double maximumAspectRatio;
@property (nonatomic) double quadratureTolerance;
@property (nonatomic) double minimumSize;
@property (nonatomic) long long maximumNumberOfRects;

+ (_Bool)supportsSecureCoding;
+ (id)title;
+ (_Bool)isSupported;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)nodeInitialize;
- (_Bool)validateVisionKitSoftLinkSymbols;
- (void)evaluate:(id)arg1;
- (_Bool)requiresVisionFramework;

@end
