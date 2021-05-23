/*
 Image: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
 */

#import <UIKit/UIView.h>

@class ICAttachment, ICAttachmentBrickFrostedView, ICAttachmentBrickTextViewV2, ICSearchResult, NSLayoutConstraint, NSRegularExpression, NSString, UIImage;

@interface ICAttachmentBrickViewV2 : UIView

{
    _Bool _forceDefaultBrickSize;
    _Bool _forManualRendering;
    _Bool _fullHeightText;
    _Bool _showAsFileIcon;
    _Bool _frostedViewActive;
    _Bool _highlightUpdateScheduled;
    _Bool _usingConstraintsForAXLargerTextSizes;
    _Bool _layerIsInvertedForAXInvertColors;
    _Bool _vibrant;
    _Bool _disableImageUpdates;
    _Bool _disableTextUpdates;
    _Bool _disableVibrancy;
    ICAttachment *_attachment;
    ICSearchResult *_searchResult;
    struct UIView *_accessoryView;
    NSRegularExpression *_highlightPatternRegex;
    unsigned long long _defaultBrickSize;
    unsigned long long _brickSize;
    struct UIView *_backgroundView;
    ICAttachmentBrickFrostedView *_frostedView;
    NSLayoutConstraint *_widthConstraint;
    NSLayoutConstraint *_heightConstraint;
    NSLayoutConstraint *_textViewTopConstraint;
    NSLayoutConstraint *_textViewTrailingConstraint;
    NSLayoutConstraint *_accessoryViewWidthConstraint;
    NSLayoutConstraint *_accessoryViewHeightConstraint;
    NSLayoutConstraint *_accessoryViewVerticalConstraint;
    NSLayoutConstraint *_accessoryViewTrailingConstraint;
    long long _fileSizeCache;
    NSString *_fileSizeStringCache;
    ICAttachmentBrickTextViewV2 *_textView;
    unsigned long long _brickType;
    unsigned long long _accessoryType;
    unsigned long long _imageScaling;
    struct UIImage *_image;
    struct CGSize _imageSize;
}

@property (nonatomic) unsigned long long brickSize;
@property (nonatomic, getter=isFullHeightText) _Bool fullHeightText;
@property (nonatomic) _Bool showAsFileIcon;
@property (retain, nonatomic) UIView *backgroundView;
@property (retain, nonatomic) ICAttachmentBrickFrostedView *frostedView;
@property (nonatomic, getter=isFrostedViewActive) _Bool frostedViewActive;
@property (retain, nonatomic) NSLayoutConstraint *widthConstraint;
@property (retain, nonatomic) NSLayoutConstraint *heightConstraint;
@property (retain, nonatomic) NSLayoutConstraint *textViewTopConstraint;
@property (retain, nonatomic) NSLayoutConstraint *textViewTrailingConstraint;
@property (retain, nonatomic) NSLayoutConstraint *accessoryViewWidthConstraint;
@property (retain, nonatomic) NSLayoutConstraint *accessoryViewHeightConstraint;
@property (retain, nonatomic) NSLayoutConstraint *accessoryViewVerticalConstraint;
@property (retain, nonatomic) NSLayoutConstraint *accessoryViewTrailingConstraint;
@property (nonatomic) long long fileSizeCache;
@property (copy, nonatomic) NSString *fileSizeStringCache;
@property (nonatomic) _Bool highlightUpdateScheduled;
@property (nonatomic) _Bool usingConstraintsForAXLargerTextSizes;
@property (nonatomic) _Bool layerIsInvertedForAXInvertColors;
@property (retain, nonatomic) ICAttachmentBrickTextViewV2 *textView;
@property (retain, nonatomic) UIView *accessoryView;
@property (nonatomic, readonly) NSString *typeDescriptionForAccessibility;
@property (nonatomic) unsigned long long brickType;
@property (nonatomic) unsigned long long accessoryType;
@property (nonatomic) unsigned long long imageScaling;
@property (retain, nonatomic) UIImage *image;
@property (nonatomic) struct CGSize imageSize;
@property (nonatomic, getter=isVibrant) _Bool vibrant;
@property (nonatomic) _Bool disableImageUpdates;
@property (nonatomic) _Bool disableTextUpdates;
@property (nonatomic) _Bool disableVibrancy;
@property (weak, nonatomic) ICAttachment *attachment;
@property (weak, nonatomic) ICSearchResult *searchResult;
@property (retain, nonatomic) NSRegularExpression *highlightPatternRegex;
@property (nonatomic) _Bool forceDefaultBrickSize;
@property (nonatomic) unsigned long long defaultBrickSize;
@property (nonatomic) _Bool forManualRendering;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)audioAttachmentDetail1StringWithDuration:(double)arg1 attachment:(id)arg2 brick:(id)arg3;
+ (unsigned long long)brickTypeForAttachment:(id)arg1;
+ (unsigned long long)maximumBrickSizeForAttachment:(id)arg1 defaultSize:(unsigned long long)arg2;
+ (id)brickInfoForAttachment:(id)arg1 brickSize:(unsigned long long)arg2 brick:(id)arg3;
+ (double)clampAccessoryViewScale:(double)arg1 forHorizontalSizeClass:(long long)arg2;
+ (struct CGSize)imageSizeForBrickSize:(unsigned long long)arg1;
+ (struct CGSize)brickSizeWithSize:(unsigned long long)arg1;

- (void)dealloc;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)accessibilityLabel;
- (id)accessibilityValue;
- (_Bool)accessibilityIgnoresInvertColors;
- (void)layoutSubviews;
- (void)updateConstraints;
- (void)didMoveToWindow;
- (void)setContentsScale:(double)arg1;
- (void)_dynamicUserInterfaceTraitDidChange;
- (void)updateText;
- (void)updateImage;
- (void)scaleDidChange;
- (id)thumbnailCache;
- (void)contentSizeCategoryDidChange;
- (void)updateBackgroundImage;
- (void)updateStyle;
- (id)initWithFrame:(struct CGRect)arg1 defaultBrickSize:(unsigned long long)arg2;
- (void)initializeBasicViews;
- (void)attachmentDidLoadNotification:(id)arg1;
- (void)attachmentPreviewImagesDidUpdateNotification:(id)arg1;
- (void)mediaDidLoadNotification:(id)arg1;
- (void)locationContextAuthorizationStatusDidChangeNotification:(id)arg1;
- (void)updateContentFromAttachment;
- (void)updateSearchHighlighting;
- (struct CGSize)computedSize;
- (void)updateVibrancyIfNecessary;
- (id)createTextViewTrailingConstraint;
- (struct UIColor *)backgroundColorForCurrentVibrancy;
- (void)updateAccessoryViewShadow;
- (double)layoutScaling;
- (void)updateAccessoryView;
- (void)updateBrickType;
- (void)layoutBackgroundView;
- (void)updateSearchHighlightingIfNecessary;
- (void)layoutAccessoryTypeMapMarker;
- (void)updateForAppearanceChange;
- (void)updateFileSizeCacheStringIfNeeded;
- (void)clearAccessoryView;
- (struct CGSize)computedAccessorySize;
- (double)accessoryViewTopMarginWithAccessorySize:(struct CGSize)arg1;
- (void)updateAccessoryViewForAccessibilityInvertColors;
- (double)clampAccessoryViewScale:(double)arg1;
- (void)updateSearchHighlightingForAttachmentBrickLabel:(id)arg1;
- (void)audioPlayerView:(id)arg1 updateTime:(double)arg2;
- (void)audioPlayerViewStopped:(id)arg1;
- (void)setAttachment:(id)arg1 forSearchResult:(id)arg2;
- (void)prepareForPrinting;
- (id)quickLookTransitionView;
- (void)accentColorDidChange:(id)arg1;

@end
