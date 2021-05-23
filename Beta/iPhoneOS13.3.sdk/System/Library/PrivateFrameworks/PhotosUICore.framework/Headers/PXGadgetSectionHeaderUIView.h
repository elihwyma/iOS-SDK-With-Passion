/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <UIKit/UICollectionReusableView.h>

#import <PhotosUICore/Swift-Protocol.h>

@class NSString, PXGadgetSectionHeader, UIButton, UILabel, UIView;

@interface PXGadgetSectionHeaderUIView : UICollectionReusableView <Swift>

{
    CDStruct_d97c9657 _updateFlags;
    PXGadgetSectionHeader *_headerModel;
    UILabel *_titleLabel;
    UIButton *_accessoryButton;
    UIView *_divider;
}

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIButton *accessoryButton;
@property (retain, nonatomic) UIView *divider;
@property (nonatomic, readonly) PXGadgetSectionHeader *headerModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)_sizingLabel;
+ (double)preferredHeightForText:(id)arg1 buttonType:(unsigned long long)arg2 fittingWidth:(double)arg3 style:(unsigned long long)arg4 dividerHidden:(_Bool)arg5;
+ (double)_heightThatFitsFirstToLastBaselineWithText:(id)arg1 width:(double)arg2 font:(id)arg3;
+ (double)_preferredHeightForText:(id)arg1 fittingWidth:(double)arg2 style:(unsigned long long)arg3 dividerHidden:(_Bool)arg4;
+ (double)_preferredHeightOfButtonWithType:(unsigned long long)arg1 width:(double)arg2;
+ (id)_sizingButton;
+ (id)_accessoryButtonFont;

- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)_updateTitle;
- (void)contentSizeCategoryDidChangeNotification:(id)arg1;
- (void)_updateButton;
- (void)_buttonPressed;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;

@end
