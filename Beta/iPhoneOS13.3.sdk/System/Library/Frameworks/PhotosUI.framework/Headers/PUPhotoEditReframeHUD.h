/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <UIKit/UIView.h>

@class NSString, UIColor, UILabel;

__attribute__((visibility("hidden")))
@interface PUPhotoEditReframeHUD : UIView

{
    UIColor *_positiveColor;
    UIColor *_negativeColor;
    UILabel *_detailLabel;
    UILabel *_pregatedLabel;
    UILabel *_overcaptureLabel;
    UILabel *_subjectsLabel;
    UILabel *_stitchedLabel;
    UILabel *_tripodLabel;
    UILabel *_buildingLabel;
    UILabel *_reframedLabel;
    UILabel *_resultReframeLabel;
    UILabel *_resultPerspectiveLabel;
    UILabel *_resultHorizonLabel;
}

@property (retain, nonatomic) UILabel *detailLabel;
@property (retain, nonatomic) UILabel *pregatedLabel;
@property (retain, nonatomic) UILabel *overcaptureLabel;
@property (retain, nonatomic) UILabel *subjectsLabel;
@property (retain, nonatomic) UILabel *stitchedLabel;
@property (retain, nonatomic) UILabel *tripodLabel;
@property (retain, nonatomic) UILabel *buildingLabel;
@property (retain, nonatomic) UILabel *reframedLabel;
@property (retain, nonatomic) UILabel *resultReframeLabel;
@property (retain, nonatomic) UILabel *resultPerspectiveLabel;
@property (retain, nonatomic) UILabel *resultHorizonLabel;
@property (copy, nonatomic) NSString *detailText;

- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)_makeLabelAndAddToView;
- (void)showStatsForPhoto:(id)arg1;

@end
