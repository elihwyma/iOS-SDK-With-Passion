/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSArray, NSMutableArray, UIKBRenderConfig, UIKBRenderingContext;

@interface UIKBRenderFactory : NSObject

{
    UIKBRenderingContext *_renderingContext;
    NSMutableArray *_segmentTraits;
    _Bool _suppressSegmentTraits;
    double _rivenSizeFactor;
    _Bool _lightweightFactory;
    double _scale;
    struct CGSize _stretchFactor;
    _Bool _boldTextEnabled;
    _Bool _increasedContrastEnabled;
    _Bool _allowsPaddles;
    _Bool _preferStringKeycapOverImage;
    _Bool _drawsOneHandedAffordance;
}

@property (nonatomic, readonly) NSArray *segmentTraits;
@property (nonatomic) double rivenSizeFactor;
@property (nonatomic) _Bool lightweightFactory;
@property (nonatomic) _Bool increasedContrastEnabled;
@property (nonatomic) double scale;
@property (nonatomic) struct CGSize stretchFactor;
@property (retain, nonatomic) UIKBRenderingContext *renderingContext;
@property (readonly, getter=renderConfig) UIKBRenderConfig *renderConfig;
@property (nonatomic) _Bool allowsPaddles;
@property (nonatomic) _Bool preferStringKeycapOverImage;
@property (nonatomic, readonly) _Bool boldTextEnabled;
@property (nonatomic) _Bool drawsOneHandedAffordance;

+ (_Bool)_enabled;
+ (long long)_graphicsQuality;
+ (id)factoryForVisualStyle:(CDStruct_227bb23d)arg1 renderingContext:(id)arg2;
+ (id)cacheKeyForString:(id)arg1 withRenderFlags:(long long)arg2 renderingContext:(id)arg3;
+ (_Bool)couldUseGlyphSelectorForDisplayString:(id)arg1;
+ (Class)factoryClassForVisualStyle:(CDStruct_227bb23d)arg1;
+ (id)factoryForVisualStyle:(CDStruct_227bb23d)arg1 renderingContext:(id)arg2 skipLayoutSegments:(_Bool)arg3;
+ (id)_characterSetForGlyphSelectors;
+ (id)lightweightFactoryForVisualStyle:(CDStruct_227bb23d)arg1 renderingContext:(id)arg2;
+ (id)segmentedControlColor:(_Bool)arg1;

- (void)dealloc;
- (id)traitsForKey:(id)arg1 onKeyplane:(id)arg2;
- (id)displayContentsForKey:(id)arg1;
- (id)defaultKeyBackgroundColorName;
- (struct CGPoint)dualStringKeyBottomTextOffset:(id)arg1 keyplane:(id)arg2;
- (struct CGPoint)dualStringKeyTopTextOffset:(id)arg1 keyplane:(id)arg2;
- (id)backgroundTraitsForKeyplane:(id)arg1;
- (_Bool)popupKeyUsesCustomKeyContentView:(id)arg1;
- (Class)contentViewClassForPopupKey:(id)arg1;
- (id)initWithRenderingContext:(id)arg1 skipLayoutSegments:(_Bool)arg2;
- (double)keyCornerRadius;
- (double)emojiPopupDividerKeyOffset;
- (void)setupLayoutSegments;
- (double)RivenFactor:(double)arg1;
- (struct CGPoint)RivenPointFactor:(struct CGPoint)arg1;
- (void)scaleTraits:(id)arg1;
- (id)lowQualityLayeredBackgroundColorName;
- (void)lowQualityTraits:(id)arg1;
- (long long)enabledBlendForm;
- (id)_traitsForKey:(id)arg1 onKeyplane:(id)arg2;
- (id)traitsHashStringForKey:(id)arg1 withGeometry:(id)arg2 withSymbolStyle:(id)arg3 controlOpacities:(_Bool)arg4 blurBlending:(_Bool)arg5;
- (id)hashStringElement;
- (_Bool)keyIsRightToLeftSensitive:(id)arg1;
- (_Bool)useBlueThemingForKey:(id)arg1;
- (id)deleteKeyImageName;
- (id)deleteOnKeyImageName;
- (id)shiftKeyImageName;
- (id)shiftLockImageName;
- (id)shiftOnKeyImageName;
- (double)skinnyKeyThreshold;
- (id)keyImageNameWithSkinnyVariation:(id)arg1;
- (id)handwritingMoreKeyImageName;
- (id)messagesWriteboardKeyImageName;
- (id)globalEmojiKeyImageName;
- (id)globalKeyImageName;
- (id)dismissKeyImageName;
- (id)dictationKeyImageName;
- (id)leftArrowKeyImageName;
- (id)rightArrowKeyImageName;
- (id)cutKeyImageName;
- (id)copyKeyImageName;
- (id)pasteKeyImageName;
- (id)undoKeyImageName;
- (id)boldKeyImageName;
- (id)biuKeyImageName;
- (id)multitapCompleteKeyImageName;
- (id)muttitapReverseKeyImageName;
- (id)ZWNJKeyImageName;
- (_Bool)shouldClearBaseDisplayStringForVariants:(id)arg1;
- (void)applyBoldTextForContent:(id)arg1 withKey:(id)arg2;
- (long long)lightHighQualityEnabledBlendForm;
- (id)_controlKeyBackgroundColorName;
- (id)defaultKeyShadowColorName;
- (void)modifyTraitsForDetachedInputSwitcher:(id)arg1 withKey:(id)arg2;
- (void)modifyTraitsForDividerVariant:(id)arg1 withKey:(id)arg2;
- (double)translucentGapWidth;
- (_Bool)supportsInputTraits:(id)arg1 forKeyplane:(id)arg2;
- (id)spaceKeyGrabberHandlesImageName;
- (void)addLayoutSegment:(id)arg1;
- (void)suppressLayoutSegments;
- (id)controlKeyBackgroundColorName;
- (id)controlKeyForegroundColorName;
- (id)controlKeyShadowColorName;
- (id)lightKeycapsFontName;
- (id)thinKeycapsFontName;
- (id)lightPadKeycapsFontName;
- (id)lightTextFontName;
- (id)thinTextFontName;
- (void)_customizeTraits:(id)arg1 forPopupForKey:(id)arg2 withRenderingContext:(id)arg3 keycapsFontName:(id)arg4;
- (long long)glyphSelectorForDisplayString:(id)arg1;
- (double)passcodeEdgeWeight;
- (id)passcodeKeyEdgeColorName;
- (id)passcodeActiveControlKeyTraits;
- (void)modifyKeyTraitsForPasscode:(id)arg1 forKey:(id)arg2 onKeyplane:(id)arg3;
- (id)passcodeBackgroundTraitsForKeyplane:(id)arg1;
- (id)passcodeControlKeyTraits;
- (id)passcodeShiftedControlKeyTraits;
- (id)extraPasscodePaddleTraits;

@end
