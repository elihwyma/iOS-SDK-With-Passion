/*
 Image: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol PVHostApplicationDelegate;

@interface PVHostApplicationDelegateHandler : NSObject

{
    _Bool _cacheDelegateResponses;
    id <PVHostApplicationDelegate> _hostApplicationDelegate;
}

@property (retain, nonatomic) id <PVHostApplicationDelegate> hostApplicationDelegate;
@property (nonatomic) _Bool cacheDelegateResponses;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sharedInstance;

- (id)init;
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
- (_Bool)wantsToIncludeTrailingWhitespaceInParagraphLineWidth;
- (_Bool)wantsToCacheTopLevelGroupRender;
- (unsigned int)getMaxGlyphResolution;

@end
