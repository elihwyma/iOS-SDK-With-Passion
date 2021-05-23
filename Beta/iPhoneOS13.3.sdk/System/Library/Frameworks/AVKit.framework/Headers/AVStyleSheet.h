/*
 Image: /System/Library/Frameworks/AVKit.framework/AVKit
 */

#import <NSObject.h>

@class UIFont, UITraitCollection;

__attribute__((visibility("hidden")))
@interface AVStyleSheet : NSObject

{
    _Bool _shouldUseCompactFullScreenSize;
    UIFont *_scrubberTimeLabelFont;
    UIFont *_scrubberInfoLabelFont;
    UIFont *_infoLabelFont;
    double _standardPadding;
    double _standardInteritemPadding;
    double _additionalInlinePaddingForDodgingSafeArea;
    double _volumeSliderInlineWidth;
    double _volumeSliderCompactFullScreenWidth;
    double _volumeSliderRegularFullScreenWidth;
    double _volumeSliderPadding;
    double _minimumProminentPlayButtonDimension;
    double _maximumProminentPlayButtonDimension;
    double _maximumTransportControlsWidth;
    double _maximumMultiRowTransportControlsWidth;
    double _minimumTransportControlsWidth;
    double _minimumScrubberWidth;
    double _playButtonCenterToBottomDistance;
    double _scrubberCenterToScrubInstructionsDistance;
    double _elapsedTimeLabelBaselineToControlsBottomDistance;
    double _elapsedTimeLabelTopToScrubberCenterYDistance;
    double _scrubberCenterYToControlsTopMinimumDistance;
    double _liveBroadcastLabelTopToBackdropTopDistance;
    double _scrubberInstructionsTopToBackdropTopDistance;
    double _scrubberInstructionsMinimumRequiredWidth;
    UITraitCollection *_traitCollection;
    struct CGSize _defaultItemInlineSize;
    struct CGSize _defaultItemFullScreenSize;
    struct CGSize _routePickerButtonInlineSize;
    struct CGSize _routePickerButtonFullScreenSize;
}

@property (nonatomic) _Bool shouldUseCompactFullScreenSize;
@property (retain, nonatomic) UITraitCollection *traitCollection;
@property (nonatomic, readonly) struct CGSize defaultItemInlineSize;
@property (nonatomic, readonly) struct CGSize defaultItemFullScreenSize;
@property (nonatomic, readonly) double standardPadding;
@property (nonatomic, readonly) double standardInteritemPadding;
@property (nonatomic, readonly) double additionalInlinePaddingForDodgingSafeArea;
@property (nonatomic, readonly) struct CGSize routePickerButtonInlineSize;
@property (nonatomic, readonly) struct CGSize routePickerButtonFullScreenSize;
@property (nonatomic, readonly) double volumeSliderInlineWidth;
@property (nonatomic, readonly) double volumeSliderCompactFullScreenWidth;
@property (nonatomic, readonly) double volumeSliderRegularFullScreenWidth;
@property (nonatomic, readonly) double volumeSliderPadding;
@property (nonatomic, readonly) double minimumProminentPlayButtonDimension;
@property (nonatomic, readonly) double maximumProminentPlayButtonDimension;
@property (nonatomic, readonly) double maximumTransportControlsWidth;
@property (nonatomic, readonly) double maximumMultiRowTransportControlsWidth;
@property (nonatomic, readonly) double minimumTransportControlsWidth;
@property (nonatomic, readonly) double minimumScrubberWidth;
@property (nonatomic, readonly) double playButtonCenterToBottomDistance;
@property (nonatomic, readonly) double scrubberCenterToScrubInstructionsDistance;
@property (nonatomic, readonly) double elapsedTimeLabelBaselineToControlsBottomDistance;
@property (nonatomic, readonly) double elapsedTimeLabelTopToScrubberCenterYDistance;
@property (nonatomic, readonly) double scrubberCenterYToControlsTopMinimumDistance;
@property (nonatomic, readonly) double liveBroadcastLabelTopToBackdropTopDistance;
@property (nonatomic, readonly) double scrubberInstructionsTopToBackdropTopDistance;
@property (nonatomic, readonly) double scrubberInstructionsMinimumRequiredWidth;
@property (nonatomic, readonly) UIFont *infoLabelFont;
@property (nonatomic, readonly) UIFont *scrubberTimeLabelFont;
@property (nonatomic, readonly) UIFont *scrubberInfoLabelFont;

- (id)initWithTraitCollection:(id)arg1 shouldUseCompactFullScreenSize:(_Bool)arg2;
- (struct UIEdgeInsets)playbackControlsViewLayoutMarginsForView:(id)arg1 keyboardHeight:(double)arg2 isFullScreen:(_Bool)arg3;
- (void)_loadFontsIfNeeded;

@end
