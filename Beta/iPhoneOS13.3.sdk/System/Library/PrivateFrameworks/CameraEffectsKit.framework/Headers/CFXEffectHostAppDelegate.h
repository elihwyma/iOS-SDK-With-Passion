/*
 Image: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface CFXEffectHostAppDelegate : NSObject

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)effectTemplatesDirectoryName;
- (id)effectTemplatesBundle;
- (_Bool)wantsExtraLineSpacingForDiacritics;
- (_Bool)wantsDynamicLineSpacingForDiacritics;
- (_Bool)wantsToScaleEmojiToCapHeight;
- (_Bool)wantsToSkipSuggestedLineBreaksInParagraphLayout;
- (_Bool)wantsToUseBinarySearchForScalingToBothMargins;
- (_Bool)wantsToLimitLinesOfText;
- (unsigned int)getNumberOfLinesToLimitTextTo;
- (_Bool)wantsToImproveQualityOfDraftQualityText;
- (_Bool)wantsToDownscaleGlyphsToOutputSize;
- (_Bool)wantsToSetTranscriptionsUsingArray;
- (_Bool)wantsToIgnoreTextBoundsOfTransparentObjects;
- (_Bool)wantsToIgnoreTextBoundsOfNewlinesOfTranscriptions;
- (_Bool)wantsToUseCachedTextureForText;
- (_Bool)wantsToIncludeSubstituteFontNameInAttributedString;
- (_Bool)wantsToIncludeTrackingValueInAttributedString;
- (_Bool)wantsToComputeTypographicHeightWithoutLastLineLeading;
- (_Bool)wantsToAdjustTextBoundsHeightUsingCapHeight;
- (_Bool)wantsToCacheTopLevelGroupRender;
- (unsigned int)getMaxGlyphResolution;

@end
