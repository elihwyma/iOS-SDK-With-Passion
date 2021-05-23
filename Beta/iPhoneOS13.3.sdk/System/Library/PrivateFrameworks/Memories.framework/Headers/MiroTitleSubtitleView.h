/*
 Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

#import <UIKit/UIView.h>

@class NSLayoutConstraint, NSString, UILabel;

@interface MiroTitleSubtitleView : UIView

{
    _Bool _titleShouldCapitalize;
    _Bool _subtitleShouldCapitalize;
    double _titleScale;
    NSString *_titleFontName;
    NSString *_titleText;
    NSString *_subtitleText;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    double _titleFontSize;
    double _titleStroke;
    double _titleTracking;
    double _titleSpaceTracking;
    double _titleBaselineDistance;
    double _titleOffset;
    NSLayoutConstraint *_titleWidthConstraint;
    NSLayoutConstraint *_titleHeightConstraint;
    NSLayoutConstraint *_titleCenterYConstraint;
    NSLayoutConstraint *_titleCenterXConstraint;
    NSString *_subtitleFontName;
    double _subtitleFontSize;
    double _subtitleStroke;
    double _subtitleTracking;
    double _subtitleSpaceTracking;
    NSLayoutConstraint *_subtitleWidthConstraint;
    NSLayoutConstraint *_subtitleHeightConstraint;
    NSLayoutConstraint *_subtitleCenterYConstraint;
    NSLayoutConstraint *_subtitleCenterXConstraint;
}

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subtitleLabel;
@property (nonatomic) double titleFontSize;
@property (nonatomic) _Bool titleShouldCapitalize;
@property (nonatomic) double titleStroke;
@property (nonatomic) double titleTracking;
@property (nonatomic) double titleSpaceTracking;
@property (nonatomic) double titleBaselineDistance;
@property (nonatomic) double titleOffset;
@property (retain, nonatomic) NSLayoutConstraint *titleWidthConstraint;
@property (retain, nonatomic) NSLayoutConstraint *titleHeightConstraint;
@property (retain, nonatomic) NSLayoutConstraint *titleCenterYConstraint;
@property (retain, nonatomic) NSLayoutConstraint *titleCenterXConstraint;
@property (retain, nonatomic) NSString *subtitleFontName;
@property (nonatomic) double subtitleFontSize;
@property (nonatomic) _Bool subtitleShouldCapitalize;
@property (nonatomic) double subtitleStroke;
@property (nonatomic) double subtitleTracking;
@property (nonatomic) double subtitleSpaceTracking;
@property (retain, nonatomic) NSLayoutConstraint *subtitleWidthConstraint;
@property (retain, nonatomic) NSLayoutConstraint *subtitleHeightConstraint;
@property (retain, nonatomic) NSLayoutConstraint *subtitleCenterYConstraint;
@property (retain, nonatomic) NSLayoutConstraint *subtitleCenterXConstraint;
@property (nonatomic) double titleScale;
@property (retain, nonatomic) NSString *titleFontName;
@property (retain, nonatomic) NSString *titleText;
@property (retain, nonatomic) NSString *subtitleText;

- (id)initWithFrame:(struct CGRect)arg1;
- (id)titleFont;
- (id)subtitleFont;
- (double)titleLineHeight;
- (void)makeSubviewsWithSize:(struct CGSize)arg1;
- (long long)titleLineCount;
- (struct CGSize)aspectCorrectedSizeForSize:(struct CGSize)arg1;
- (double)maxWidthForDisplayForSize:(struct CGSize)arg1;
- (double)maxHeightForDisplayForSize:(struct CGSize)arg1;
- (double)initialTitleMultiplierWithSize:(struct CGSize)arg1;
- (void)emulatePhotosTitleStylesWithSize:(struct CGSize)arg1 multiplier:(double)arg2;
- (id)attributedTitleString;
- (double)initialSubtitleMultiplierWithSize:(struct CGSize)arg1 titleMultiplier:(double)arg2;
- (void)emulatePhotosSubtitleStylesWithSize:(struct CGSize)arg1 multiplier:(double)arg2;
- (id)attributedSubTitleString;
- (double)titleTotalHeight;
- (double)titleLineAscender;
- (double)subtitleTotalHeight;
- (double)titleLineLeading;
- (double)titleLineDesenderHeight;
- (double)subtitleLineHeight;
- (void)updateSubtitleTitleLabelForSize:(struct CGSize)arg1;

@end
