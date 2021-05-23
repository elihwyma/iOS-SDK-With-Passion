/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

@class PXUIButton, UIImageView, UILabel, UIView;

@interface _PXUIAssetBadgeTopGroup : NSObject

{
    UIView *_backgroundView;
    UIImageView *_imageView;
    UILabel *_label;
    PXUIButton *_button;
    struct PXAssetBadgeInfo _badgeInfo;
    struct CGRect _frame;
    struct CGRect _imageFrame;
    struct CGRect _labelFrame;
    struct CGRect _buttonFrame;
}

@property (retain, nonatomic) UIView *backgroundView;
@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) UILabel *label;
@property (retain, nonatomic) PXUIButton *button;
@property (nonatomic) struct PXAssetBadgeInfo badgeInfo;
@property (nonatomic) struct CGRect frame;
@property (nonatomic) struct CGRect imageFrame;
@property (nonatomic) struct CGRect labelFrame;
@property (nonatomic) struct CGRect buttonFrame;

@end
