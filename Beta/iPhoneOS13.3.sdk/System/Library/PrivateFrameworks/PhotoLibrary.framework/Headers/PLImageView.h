/*
 Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

#import <UIKit/UIImageView.h>

@class NSString, PLPhotoTilePlaceholderView, PLTiledLayer, PLVideoView, UILabel, UIView;

@interface PLImageView : UIImageView

{
    NSString *_name;
    UIView *_borderView;
    PLVideoView *_videoView;
    PLPhotoTilePlaceholderView *_placeholderView;
    UIView *_leftAccessoryView;
    UIView *_bottomRightAccessoryView;
    struct CGSize _leftAccessoryViewOffset;
    UILabel *_textBadge;
    unsigned int _shadowEnabled:1;
    unsigned int _suppressShadowDrawing:1;
    unsigned int _borderViewIsVisible:1;
    unsigned int _drawsBorder:1;
    float _aspectRatio;
    double _lastBorderAlphaTime;
    double _lastShadowAlphaTime;
    double _transitionProgress;
    _Bool _edgeAntialiasingEnabled;
    PLTiledLayer *_fullSizeImageTiledLayer;
    long long _fullSizeImageOrientation;
    _Bool _showsPlaceholder;
    double _accessoryViewsAlpha;
    double _placeholderScale;
}

@property (copy, nonatomic) NSString *name;
@property (nonatomic, getter=isDimmed) _Bool dimmed;
@property (nonatomic, getter=isBorderAndAccessoriesVisible) _Bool borderAndAccessoriesVisible;
@property (nonatomic) float borderAndAccessoriesAlpha;
@property (nonatomic) _Bool drawsBorder;
@property (nonatomic, getter=isShadowEnabled) _Bool shadowEnabled;
@property (nonatomic) double transitionProgress;
@property (retain, nonatomic) PLVideoView *videoView;
@property (retain, nonatomic) UIView *leftAccessoryView;
@property (nonatomic) struct CGSize leftAccessoryViewOffset;
@property (retain, nonatomic) UIView *bottomRightAccessoryView;
@property (nonatomic) double accessoryViewsAlpha;
@property (nonatomic, readonly) _Bool showsPlaceholder;
@property (nonatomic) double placeholderScale;
@property (nonatomic, readonly) struct CGSize placeholderSize;

+ (void)initialize;
+ (struct CGSize)badgeOffset;
+ (id)textBadgeForString:(id)arg1 photoSize:(struct CGSize)arg2;
+ (_Bool)shouldDrawShadows;

- (void)dealloc;
- (void)setImage:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)setEdgeAntialiasingEnabled:(_Bool)arg1;
- (id)textBadgeString;
- (void)setFullSizeImageJPEGData:(id)arg1 size:(struct CGSize)arg2 orientation:(long long)arg3;
- (void)setShowsPlaceholder:(_Bool)arg1;
- (void)setTextBadgeString:(id)arg1;
- (void)renderSnapshotInContext:(struct CGContext *)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1 allowRounding:(_Bool)arg2;
- (struct CGRect)_leftAccessoryViewFrame;
- (struct CGRect)_bottomRightAccessoryViewFrame;
- (void)_updateShadowPath;
- (void)updateFullSizeImageVisibleArea;
- (struct CGAffineTransform)_transformForFullSizeImageTiledLayer;
- (void)_setShadowEnabled:(_Bool)arg1 force:(_Bool)arg2;
- (void)parentDidLayout;
- (void)setBorderAndAccessoriesAlpha:(float)arg1 forced:(_Bool)arg2;
- (void)_updatePlaceholderLayout;
- (void)_updatePlaceholderAlpha;
- (void)setLeftAccessoryView:(id)arg1 animated:(_Bool)arg2;
- (void)setBottomRightAccessoryView:(id)arg1 animated:(_Bool)arg2;

@end
