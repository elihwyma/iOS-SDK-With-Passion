//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <NotesUI/ICAttachmentBrickAudioPlayerViewV2Delegate-Protocol.h>

@class ICAttachment, ICAttachmentBrickFrostedView, ICAttachmentBrickTextViewV2, ICSearchResult, NSLayoutConstraint, NSRegularExpression, NSString, UIImage;

@interface ICAttachmentBrickViewV2 : UIView <ICAttachmentBrickAudioPlayerViewV2Delegate>
{
    BOOL _forceDefaultBrickSize;
    BOOL _forManualRendering;
    BOOL _fullHeightText;
    BOOL _showAsFileIcon;
    BOOL _frostedViewActive;
    BOOL _highlightUpdateScheduled;
    BOOL _usingConstraintsForAXLargerTextSizes;
    BOOL _layerIsInvertedForAXInvertColors;
    BOOL _vibrant;
    BOOL _disableImageUpdates;
    BOOL _disableTextUpdates;
    BOOL _disableVibrancy;
    ICAttachment *_attachment;
    ICSearchResult *_searchResult;
    UIView _accessoryView;
    NSRegularExpression *_highlightPatternRegex;
    NSUInteger _defaultBrickSize;
    NSUInteger _brickSize;
    UIView _backgroundView;
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
    NSUInteger _brickType;
    NSUInteger _accessoryType;
    NSUInteger _imageScaling;
    UIImage _image;
    CGSize _imageSize;
}

+ (CGSize)imageSizeForBrickSize:(NSUInteger)arg1;
+ (id)audioAttachmentDetail1StringWithDuration:(double)arg1 attachment:(id)arg2 brick:(id)arg3;
+ (id)brickInfoForAttachment:(id)arg1 brickSize:(NSUInteger)arg2 brick:(id)arg3;
+ (double)clampAccessoryViewScale:(double)arg1 forHorizontalSizeClass:(long long)arg2;
+ (CGSize)brickSizeWithSize:(NSUInteger)arg1;
+ (NSUInteger)maximumBrickSizeForAttachment:(id)arg1 defaultSize:(NSUInteger)arg2;
+ (NSUInteger)brickTypeForAttachment:(id)arg1;
@property(nonatomic) BOOL disableVibrancy; // @synthesize disableVibrancy=_disableVibrancy;
@property(nonatomic) BOOL disableTextUpdates; // @synthesize disableTextUpdates=_disableTextUpdates;
@property(nonatomic) BOOL disableImageUpdates; // @synthesize disableImageUpdates=_disableImageUpdates;
@property(nonatomic, getter=isVibrant) BOOL vibrant; // @synthesize vibrant=_vibrant;
@property(nonatomic) CGSize imageSize; // @synthesize imageSize=_imageSize;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
@property(nonatomic) NSUInteger imageScaling; // @synthesize imageScaling=_imageScaling;
@property(nonatomic) NSUInteger accessoryType; // @synthesize accessoryType=_accessoryType;
@property(nonatomic) NSUInteger brickType; // @synthesize brickType=_brickType;
@property(retain, nonatomic) ICAttachmentBrickTextViewV2 *textView; // @synthesize textView=_textView;
@property(nonatomic) BOOL layerIsInvertedForAXInvertColors; // @synthesize layerIsInvertedForAXInvertColors=_layerIsInvertedForAXInvertColors;
@property(nonatomic) BOOL usingConstraintsForAXLargerTextSizes; // @synthesize usingConstraintsForAXLargerTextSizes=_usingConstraintsForAXLargerTextSizes;
@property(nonatomic) BOOL highlightUpdateScheduled; // @synthesize highlightUpdateScheduled=_highlightUpdateScheduled;
@property(copy, nonatomic) NSString *fileSizeStringCache; // @synthesize fileSizeStringCache=_fileSizeStringCache;
@property(nonatomic) long long fileSizeCache; // @synthesize fileSizeCache=_fileSizeCache;
@property(retain, nonatomic) NSLayoutConstraint *accessoryViewTrailingConstraint; // @synthesize accessoryViewTrailingConstraint=_accessoryViewTrailingConstraint;
@property(retain, nonatomic) NSLayoutConstraint *accessoryViewVerticalConstraint; // @synthesize accessoryViewVerticalConstraint=_accessoryViewVerticalConstraint;
@property(retain, nonatomic) NSLayoutConstraint *accessoryViewHeightConstraint; // @synthesize accessoryViewHeightConstraint=_accessoryViewHeightConstraint;
@property(retain, nonatomic) NSLayoutConstraint *accessoryViewWidthConstraint; // @synthesize accessoryViewWidthConstraint=_accessoryViewWidthConstraint;
@property(retain, nonatomic) NSLayoutConstraint *textViewTrailingConstraint; // @synthesize textViewTrailingConstraint=_textViewTrailingConstraint;
@property(retain, nonatomic) NSLayoutConstraint *textViewTopConstraint; // @synthesize textViewTopConstraint=_textViewTopConstraint;
@property(retain, nonatomic) NSLayoutConstraint *heightConstraint; // @synthesize heightConstraint=_heightConstraint;
@property(retain, nonatomic) NSLayoutConstraint *widthConstraint; // @synthesize widthConstraint=_widthConstraint;
@property(nonatomic, getter=isFrostedViewActive) BOOL frostedViewActive; // @synthesize frostedViewActive=_frostedViewActive;
@property(retain, nonatomic) ICAttachmentBrickFrostedView *frostedView; // @synthesize frostedView=_frostedView;
@property(retain, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(nonatomic) BOOL showAsFileIcon; // @synthesize showAsFileIcon=_showAsFileIcon;
@property(nonatomic, getter=isFullHeightText) BOOL fullHeightText; // @synthesize fullHeightText=_fullHeightText;
@property(nonatomic) NSUInteger brickSize; // @synthesize brickSize=_brickSize;
@property(nonatomic) BOOL forManualRendering; // @synthesize forManualRendering=_forManualRendering;
@property(nonatomic) NSUInteger defaultBrickSize; // @synthesize defaultBrickSize=_defaultBrickSize;
@property(nonatomic) BOOL forceDefaultBrickSize; // @synthesize forceDefaultBrickSize=_forceDefaultBrickSize;
@property(retain, nonatomic) NSRegularExpression *highlightPatternRegex; // @synthesize highlightPatternRegex=_highlightPatternRegex;
@property(retain, nonatomic) UIView *accessoryView; // @synthesize accessoryView=_accessoryView;
@property(nonatomic) __weak ICSearchResult *searchResult; // @synthesize searchResult=_searchResult;
@property(nonatomic) __weak ICAttachment *attachment; // @synthesize attachment=_attachment;
// - (void).cxx_destruct;
- (BOOL)accessibilityIgnoresInvertColors;
- (void)updateAccessoryViewForAccessibilityInvertColors;
@property(readonly, nonatomic) NSString *typeDescriptionForAccessibility;
- (void)setContentsScale:(double)arg1;
- (void)updateSearchHighlightingForAttachmentBrickLabel:(id)arg1;
- (void)updateSearchHighlighting;
- (void)updateSearchHighlightingIfNecessary;
- (void)updateAccessoryViewShadow;
- (id)createTextViewTrailingConstraint;
- (double)accessoryViewTopMarginWithAccessorySize:(CGSize)arg1;
- (CGSize)computedAccessorySize;
- (CGSize)computedSize;
- (double)layoutScaling;
- (void)scaleDidChange;
- (double)clampAccessoryViewScale:(double)arg1;
- (void)updateFileSizeCacheStringIfNeeded;
- (void)updateImage;
- (void)clearAccessoryView;
- (void)updateAccessoryView;
- (void)updateText;
- (void)updateForAppearanceChange;
- (void)_dynamicUserInterfaceTraitDidChange;
- (void)layoutSubviews;
- (void)layoutAccessoryTypeMapMarker;
- (void)layoutBackgroundView;
- (void)updateBackgroundImage;
- (void)updateStyle;
- (void)updateBrickType;
- (void)updateContentFromAttachment;
- (void)initializeBasicViews;
- (id)thumbnailCache;
- (void)updateConstraints;
- (void)didMoveToWindow;
- (UIColor )backgroundColorForCurrentVibrancy;
- (void)updateVibrancyIfNecessary;
- (void)audioPlayerViewStopped:(id)arg1;
- (void)audioPlayerView:(id)arg1 updateTime:(double)arg2;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void )arg4;
- (void)accentColorDidChange:(id)arg1;
- (void)locationContextAuthorizationStatusDidChangeNotification:(id)arg1;
- (void)mediaDidLoadNotification:(id)arg1;
- (void)attachmentPreviewImagesDidUpdateNotification:(id)arg1;
- (void)attachmentDidLoadNotification:(id)arg1;
- (id)quickLookTransitionView;
- (void)contentSizeCategoryDidChange;
- (void)prepareForReuse;
- (void)prepareForPrinting;
- (void)setAttachment:(id)arg1 forSearchResult:(id)arg2;
- (void)dealloc;
- (id)initWithFrame:(CGRect)arg1 defaultBrickSize:(NSUInteger)arg2;
- (id)initWithFrame:(CGRect)arg1;
- (id)accessibilityValue;
- (id)accessibilityLabel;

@end

