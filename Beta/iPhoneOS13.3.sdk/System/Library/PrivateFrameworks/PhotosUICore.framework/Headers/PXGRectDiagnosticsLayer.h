/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <QuartzCore/CALayer.h>

@class NSArray, PXGLayout;

@interface PXGRectDiagnosticsLayer : CALayer

{
    PXGLayout *_layout;
    NSArray *_rectDiagnosticsProviders;
}

@property (retain, nonatomic) PXGLayout *layout;
@property (copy, nonatomic) NSArray *rectDiagnosticsProviders;

+ (id)defaultRectDiagnosticsProviders;

- (void)update;

@end
