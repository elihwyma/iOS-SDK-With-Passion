/*
 Image: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
 */

#import <AnnotationKit/AKAnnotationPopoverViewController.h>

@class AKCalloutBar, NSString, UIAlertController, UIButton, UIView;

@interface AKHighlightColorEditorController : AKAnnotationPopoverViewController

{
    AKCalloutBar *mCalloutBar;
    UIView *mColorControls;
    UIButton *mAddNoteButton;
    UIButton *mDeleteButton;
    UIButton *mRightArrowButton;
    UIButton *mShareButton;
    int _pageTheme;
    UIAlertController *_alertController;
}

@property (retain, nonatomic) AKCalloutBar *calloutBar;
@property (retain, nonatomic) UIView *colorControls;
@property (retain, nonatomic) UIButton *addNoteButton;
@property (retain, nonatomic) UIButton *deleteButton;
@property (retain, nonatomic) UIButton *rightArrowButton;
@property (retain, nonatomic) UIButton *shareButton;
@property (retain, nonatomic) UIAlertController *alertController;
@property (nonatomic) int pageTheme;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)setDelegate:(id)arg1;
- (void)setPosition:(int)arg1;
- (void)loadView;
- (void)viewDidLoad;
- (void)didShow;
- (void)willShow;
- (void)useColorOf:(id)arg1;
- (void)showColorControlsMenu:(id)arg1;
- (void)handleDeleteButtonTap:(id)arg1;
- (void)handleAddNoteButton:(id)arg1;
- (void)handleRightArrowButton:(id)arg1;
- (void)releaseOutlets;
- (_Bool)p_shouldShowCompactMenu;
- (long long)p_buttonTagForTheme:(id)arg1;
- (id)p_paletteImageForTag:(long long)arg1 pageTheme:(int)arg2;
- (id)p_noteGlyphForTag:(long long)arg1 pageTheme:(int)arg2;
- (_Bool)p_shouldShowShareButton;
- (void)handleShareButton:(id)arg1;
- (void)p_updateAppearance;
- (id)p_colorControlImageForTag:(long long)arg1 pageTheme:(int)arg2;
- (id)localizedAccessibilityStringForStyle:(long long)arg1;
- (void)presentFromRect:(struct CGRect)arg1 view:(id)arg2;
- (id)p_themeForStyle:(long long)arg1 pageTheme:(int)arg2;
- (void)p_removeAnnotation:(id)arg1;
- (void)p_setStyle:(long long)arg1 forAnnotation:(id)arg2;
- (void)p_drawColorControlCircleWithFrame:(struct CGRect)arg1 color:(id)arg2;
- (id)p_colorControlImageForColor:(id)arg1 withForegroundImage:(id)arg2;
- (id)p_colorForTag:(long long)arg1 pageTheme:(int)arg2;
- (id)p_underlineForegroundImageForPageTheme:(int)arg1;
- (id)p_colorControlImageForColor:(id)arg1;
- (id)p_colorControlUnderlineImageForPageTheme:(int)arg1;
- (void)p_drawCrescentWithCircleRect:(struct CGRect)arg1 color:(id)arg2 leftShift:(double)arg3 addRadius:(double)arg4;
- (id)p_paletteImageWithFrontColor:(id)arg1 middleColor:(id)arg2 backColor:(id)arg3 frontForegroundImage:(id)arg4;
- (id)p_buildPaletteImageForFrontTag:(long long)arg1 middleTag:(long long)arg2 backTag:(long long)arg3 pageTheme:(int)arg4;
- (id)p_monochromaticImageFromImage:(id)arg1 withColor:(id)arg2;
- (_Bool)canPresentInPosition:(int)arg1;
- (void)p_postDeleteConfirmation;

@end
