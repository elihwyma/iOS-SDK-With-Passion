/*
 Image: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
 */

#import <UIKit/UIColor.h>

@class NSString;

@interface UIColor (IC)

@property (nonatomic, readonly) UIColor *ic_resolvedColor;
@property (nonatomic, readonly) _Bool ic_isBlack;
@property (nonatomic, readonly) _Bool ic_isWhite;
@property (nonatomic, readonly) double icaxLuma;
@property (nonatomic, readonly) NSString *icaxApproximateColorDescription;
@property (nonatomic, readonly) NSString *icaxDescriptionWithLuma;
@property (retain, nonatomic, setter=_icaxSetCachedApproximateColorDescription:) NSString *_icaxCachedApproximateColorDescription;

+ (id)ICDarkenedTintColor;
+ (struct UIColor *)ICTintColor;
+ (id)ic_secondaryLabelColor;
+ (struct UIColor *)ic_colorFromString:(id)arg1;
+ (struct UIColor *)preferredDefaultFontColor;
+ (struct UIColor *)ICYellowTodoButtonColor;
+ (struct UIColor *)ICGrayTodoButtonColor;
+ (id)ic_notesDefaultTextColor;
+ (id)ic_notesAppYellowColor;
+ (struct UIColor *)ic_colorWith256Red:(double)arg1 green:(double)arg2 blue:(double)arg3 alpha:(double)arg4;
+ (id)ic_labelColor;
+ (struct UIColor *)ic_paperTexture;
+ (id)ic_darkerAccessibilityColorForColor:(id)arg1;
+ (struct UIColor *)ICLearnMoreButtonUnpressedColor;
+ (struct UIImage *)ic_paperImage;
+ (struct UIImage *)ic_lightPaperImage;
+ (struct UIColor *)ic_colorWith256Red:(double)arg1 green:(double)arg2 blue:(double)arg3 unitAlpha:(double)arg4;
+ (struct UIColor *)ICSystemTintColor;
+ (struct UIColor *)ICRedColor;
+ (struct UIColor *)ICGrayColor;
+ (struct UIColor *)ICGrayTodoButtonHighlightColor;
+ (struct UIColor *)ICLockIconColor;
+ (struct UIColor *)ICListStatusIndicatorColor;
+ (struct UIColor *)ICLockIconColorList;
+ (struct UIColor *)ICNotesListFolderIconColor;
+ (struct UIColor *)ICFindInNoteHighlightColor;
+ (struct UIColor *)ICLearnMoreButtonPressedColor;
+ (struct UIColor *)ICNotesListHeaderTextColor;
+ (struct UIColor *)ICExtractedDocumentViewControllerBackgroundColor;
+ (struct UIColor *)ICTintedSelectionColor;
+ (struct UIColor *)ICActiveTintedSelectionColor;
+ (struct UIColor *)ICNoteEditorToolbarColor;
+ (struct UIColor *)ICDrawingToolsBottomMarginColor;
+ (struct UIColor *)ICMoveActionBackgroundColor;
+ (struct UIColor *)ICShareFolderActionBackgroundColor;
+ (struct UIColor *)ICAccountHeaderLabelColor;
+ (struct UIColor *)ICNoteListDropHighlightColor;
+ (struct UIColor *)ICDefaultFindBarColor;
+ (struct UIColor *)ICSearchHeaderTextColor;
+ (struct UIColor *)ICSearchHeaderBackgroundColor;
+ (struct UIColor *)ICListTitleTextColor;
+ (id)ic_tertiaryLabelColor;
+ (id)ic_quaternaryLabelColor;
+ (id)ic_dynamicWhiteBlackColor;
+ (struct UIColor *)ic_lightPaperTexture;
+ (struct UIColor *)ic_paperTextureForTraitCollection:(id)arg1;
+ (id)icaxHueNameForValue:(double)arg1;

- (id)ic_colorString;
- (id)icaxLightnessModifier;
- (id)_icaxColorDescriptionForHue:(id)arg1 saturation:(id)arg2 lightness:(id)arg3;
- (id)icaxSaturationModifier;
- (id)icaxHueName;
- (double)icaxHue;
- (double)icaxSaturation;
- (id)_icaxLightnessSaturationHueFormatString;
- (id)_icaxLightnessHueFormatString;
- (id)_icaxSaturationHueFormatString;

@end
