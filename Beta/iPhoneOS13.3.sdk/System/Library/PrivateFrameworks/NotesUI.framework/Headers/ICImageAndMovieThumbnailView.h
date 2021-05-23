/*
 Image: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
 */

#import <UIKit/UIView.h>

@class ICLabel, NSLayoutConstraint, NSMutableDictionary, UIColor, UIImage, UIImageView;

@interface ICImageAndMovieThumbnailView : UIView

{
    _Bool _showAsMovie;
    _Bool _hairlineWidthUnitIsInPoint;
    _Bool _forceSquareImageAspectRatio;
    _Bool _showMovieDuration;
    unsigned long long _imageScaling;
    struct UIColor *_borderColor;
    unsigned long long _hairlineEdges;
    unsigned long long _edgesToRemoveStartPoint;
    unsigned long long _edgesToRemoveEndPoint;
    double _mininumScaleFactor;
    struct UIImageView *_imageView;
    NSLayoutConstraint *_imageViewLeftLayoutConstraint;
    NSLayoutConstraint *_imageViewRightLayoutConstraint;
    NSLayoutConstraint *_imageViewBottomLayoutConstraint;
    NSLayoutConstraint *_imageViewTopLayoutConstraint;
    struct UIView *_movieFooter;
    ICLabel *_movieDurationLabel;
    NSMutableDictionary *_hairlineLayers;
    NSMutableDictionary *_hairlineColors;
    CDStruct_1b6d18a9 _movieDuration;
}

@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) NSLayoutConstraint *imageViewLeftLayoutConstraint;
@property (retain, nonatomic) NSLayoutConstraint *imageViewRightLayoutConstraint;
@property (retain, nonatomic) NSLayoutConstraint *imageViewBottomLayoutConstraint;
@property (retain, nonatomic) NSLayoutConstraint *imageViewTopLayoutConstraint;
@property (retain, nonatomic) UIView *movieFooter;
@property (retain, nonatomic) ICLabel *movieDurationLabel;
@property (retain, nonatomic) NSMutableDictionary *hairlineLayers;
@property (retain, nonatomic) NSMutableDictionary *hairlineColors;
@property (nonatomic) _Bool showMovieDuration;
@property (retain, nonatomic) UIImage *image;
@property (nonatomic) unsigned long long imageScaling;
@property (nonatomic) double imageInset;
@property (nonatomic) _Bool showAsMovie;
@property (nonatomic) CDStruct_1b6d18a9 movieDuration;
@property (nonatomic) double cornerRadius;
@property (retain, nonatomic) UIColor *borderColor;
@property (nonatomic) _Bool hairlineWidthUnitIsInPoint;
@property (nonatomic) unsigned long long hairlineEdges;
@property (nonatomic) unsigned long long edgesToRemoveStartPoint;
@property (nonatomic) unsigned long long edgesToRemoveEndPoint;
@property (nonatomic) double mininumScaleFactor;
@property (nonatomic) _Bool forceSquareImageAspectRatio;

- (id)initWithCoder:(id)arg1;
- (void)setBounds:(struct CGRect)arg1;
- (void)commonInit;
- (id)initWithFrame:(struct CGRect)arg1;
- (double)pixelWidth;
- (id)initWithFrame:(struct CGRect)arg1 showMovieDuration:(_Bool)arg2;
- (void)setupMovieFooter;
- (_Bool)usesSeparateLayersForHairlines;
- (void)updateHairlineFrames;
- (void)updateDurationLabel;
- (void)updateHairline;
- (_Bool)usesSeparateLayerForHairlineEdge:(unsigned long long)arg1;
- (double)hairlineWidthInPoint;
- (double)backingScale;
- (id)hairlineLayerForEdge:(unsigned long long)arg1;
- (struct CGRect)frameByApplyingVerticalReductionTo:(struct CGRect)arg1 edge:(unsigned long long)arg2;
- (struct CGRect)frameByApplyingHorizontalReductionTo:(struct CGRect)arg1 edge:(unsigned long long)arg2;
- (void)setHairlineColor:(struct UIColor *)arg1 forEdges:(unsigned long long)arg2;

@end
