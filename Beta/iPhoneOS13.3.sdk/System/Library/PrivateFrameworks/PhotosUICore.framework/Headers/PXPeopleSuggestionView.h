/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXSmartScaleView.h>

@class CAShapeLayer, NSDateFormatter, PXPersonImageRequest, UIImageView, UILabel, UIView;

@protocol PXPerson;

@interface PXPeopleSuggestionView : PXSmartScaleView

{
    _Bool _needsSpotlightUpdate;
    _Bool _validSpotlight;
    id <PXPerson> _suggestion;
    UIImageView *_imageView;
    UIView *_suggestionView;
    UIView *_dimView;
    CAShapeLayer *_spotlightLayer;
    PXPersonImageRequest *_imageRequest;
    NSDateFormatter *_dateFormatter;
    UILabel *_dateLabel;
    struct CGRect _faceRect;
}

@property (nonatomic) struct CGRect faceRect;
@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) UIView *suggestionView;
@property (retain, nonatomic) UIView *dimView;
@property (retain, nonatomic) CAShapeLayer *spotlightLayer;
@property (nonatomic) _Bool needsSpotlightUpdate;
@property (nonatomic) _Bool validSpotlight;
@property (retain, nonatomic) PXPersonImageRequest *imageRequest;
@property (retain, nonatomic) NSDateFormatter *dateFormatter;
@property (retain, nonatomic) UILabel *dateLabel;
@property (nonatomic, readonly) id <PXPerson> suggestion;

- (id)init;
- (void)commonInit;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)viewScaleDidChange;
- (void)setSuggestion:(id)arg1 animated:(_Bool)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)_updateSuggestionImageWithAnimatedSpotlight:(_Bool)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)_updateSpotlightAnimated:(_Bool)arg1;
- (void)_updateDateFieldWithSuggestion:(id)arg1;
- (struct CGRect)_scaledFaceRect;
- (double)_faceScale;

@end
