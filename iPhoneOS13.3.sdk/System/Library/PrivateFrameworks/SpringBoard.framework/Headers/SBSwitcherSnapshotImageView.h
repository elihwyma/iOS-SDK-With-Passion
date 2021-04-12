//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIImage, UIImageView;

@interface SBSwitcherSnapshotImageView : UIView
{
    UIImageView *_imageView;
    UIView *_scalingView;
    double _cornerRadius;
    NSUInteger _maskedCorners;
    BOOL _usesNonuniformScaling;
    BOOL _hasOpaqueContents;
    long long _orientationForClassicLayout;
}

@property(nonatomic) long long orientationForClassicLayout; // @synthesize orientationForClassicLayout=_orientationForClassicLayout;
@property(nonatomic) BOOL hasOpaqueContents; // @synthesize hasOpaqueContents=_hasOpaqueContents;
@property(nonatomic) BOOL usesNonuniformScaling; // @synthesize usesNonuniformScaling=_usesNonuniformScaling;
// - (void).cxx_destruct;
- (void)_updateCornerRadius;
- (BOOL)_isUsingExternalClassicLayout;
- (double)_transformScale;
- (double)_transformVerticalScale;
- (double)_transformHorizontalScale;
- (CGAffineTransform)scalingTransform;
- (void)layoutSubviews;
@property(nonatomic) NSUInteger maskedCorners;
@property(nonatomic) double cornerRadius;
@property(retain, nonatomic) UIImage *image;
- (id)initWithImage:(id)arg1;

@end

