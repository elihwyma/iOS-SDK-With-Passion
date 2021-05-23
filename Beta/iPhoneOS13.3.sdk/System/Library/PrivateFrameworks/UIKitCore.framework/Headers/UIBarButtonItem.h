/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIBarItem.h>

#import <UIKitCore/Swift-Protocol.h>

@class NSArray, NSDictionary, NSSet, NSString, UIBarButtonItemGroup, UIColor, UIImage, UILayoutGuide, UINavigationItem, UIToolbarButton, UIView, _UIBarButtonItemAppearanceStorage;

@protocol _UIBarButtonItemViewOwner;

@interface UIBarButtonItem : UIBarItem <Swift>

{
    NSString *_title;
    NSSet *_possibleTitles;
    SEL _action;
    id _target;
    UIImage *_image;
    UIImage *_landscapeImagePhone;
    struct UIEdgeInsets _imageInsets;
    struct UIEdgeInsets _landscapeImagePhoneInsets;
    struct UIEdgeInsets _additionalSelectionInsets;
    double _width;
    UIView *_view;
    _UIBarButtonItemAppearanceStorage *_appearanceStorage;
    struct {
        unsigned int enabled:1;
        unsigned int style:3;
        unsigned int isSystemItem:1;
        unsigned int systemItem:7;
        unsigned int viewIsCustom:1;
        unsigned int isMinibarView:1;
        unsigned int disableAutosizing:1;
        unsigned int selected:1;
        unsigned int imageHasEffects:1;
        unsigned int actsAsFakeBackButton:1;
        unsigned int springLoaded:1;
        unsigned int showsChevron:1;
        unsigned int wantsThreeUp:1;
    } _barButtonItemFlags;
    NSArray *_gestureRecognizers;
    NSArray *_interactions;
    _Bool _flexible;
    _Bool __showsBackButtonIndicator;
    _Bool __hidden;
    _Bool __viewWantsLetterpressImage;
    _Bool __needsViewUpdateForLetterpressImage;
    _Bool _groupRepresentative;
    double _toolbarCharge;
    double _minimumWidth;
    double _maximumWidth;
    NSSet *_possibleSystemItems;
    NSDictionary *_stylesForSizingTitles;
    UIBarButtonItem *__itemVariation;
    UINavigationItem *__owningNavigationItem;
    UIBarButtonItemGroup *__owningButtonGroup;
    id <_UIBarButtonItemViewOwner> __viewOwner;
    CDUnknownBlockType __autoValidationHandler;
    UILayoutGuide *__popoverLayoutGuide;
    NSArray *__backButtonAlternateTitles;
    UIBarButtonItemGroup *_buttonGroup;
}

@property (nonatomic, getter=isEnabled) _Bool enabled;
@property (nonatomic, readonly) UIToolbarButton *_toolbarButton;
@property (nonatomic, getter=_width, setter=_setWidth:) double _width;
@property (nonatomic, readonly) _Bool isSystemItem;
@property (nonatomic, readonly) long long systemItem;
@property (copy, nonatomic, getter=_possibleSystemItems, setter=_setPossibleSystemItems:) NSSet *possibleSystemItems;
@property (copy, nonatomic, setter=_setPossibleItemVariations:) NSSet *_possibleItemVariations;
@property (retain, nonatomic, setter=_setItemVariation:) UIBarButtonItem *_itemVariation;
@property (nonatomic) _Bool selected;
@property (nonatomic, setter=_setAdditionalSelectionInsets:) struct UIEdgeInsets _additionalSelectionInsets;
@property (nonatomic, setter=_setImageHasEffects:) _Bool _imageHasEffects;
@property (retain, nonatomic, setter=_setGestureRecognizers:) NSArray *_gestureRecognizers;
@property (retain, nonatomic, setter=_setInteractions:) NSArray *_interactions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, getter=isSpringLoaded) _Bool springLoaded;
@property (nonatomic, readonly) _Bool _needsViewUpdateForLetterpressImage;
@property (nonatomic, readonly) _Bool isSystemItem;
@property (nonatomic, readonly) long long systemItem;
@property (copy, nonatomic, getter=_possibleSystemItems, setter=_setPossibleSystemItems:) NSSet *possibleSystemItems;
@property (copy, nonatomic, setter=_setPossibleItemVariations:) NSSet *_possibleItemVariations;
@property (retain, nonatomic, setter=_setItemVariation:) UIBarButtonItem *_itemVariation;
@property (copy, nonatomic, setter=_setStylesForSizingTitles:) NSDictionary *_stylesForSizingTitles;
@property (nonatomic, setter=_setShowsBackButtonIndicator:) _Bool _showsBackButtonIndicator;
@property (nonatomic, setter=_setHidden:) _Bool _hidden;
@property (weak, nonatomic, setter=_setOwningNavigationItem:) UINavigationItem *_owningNavigationItem;
@property (weak, nonatomic, setter=_setOwningButtonGroup:) UIBarButtonItemGroup *_owningButtonGroup;
@property (weak, nonatomic, setter=_setViewOwner:) id <_UIBarButtonItemViewOwner> _viewOwner;
@property (copy, nonatomic, setter=_setAutoValidationHandler:) CDUnknownBlockType _autoValidationHandler;
@property (retain, nonatomic, setter=_setPopoverLayoutGuide:) UILayoutGuide *_popoverLayoutGuide;
@property (copy, nonatomic, setter=_setBackButtonAlternateTitles:) NSArray *_backButtonAlternateTitles;
@property (nonatomic) _Bool selected;
@property (nonatomic, setter=_setToolbarCharge:) double _toolbarCharge;
@property (nonatomic, setter=_setMinimumWidth:) double _minimumWidth;
@property (nonatomic, setter=_setMaximumWidth:) double _maximumWidth;
@property (nonatomic, setter=_setFlexible:) _Bool _flexible;
@property (nonatomic, readonly) _Bool _viewWantsLetterpressImage;
@property (nonatomic, readonly) _Bool _needsViewUpdateForLetterpressImage;
@property (weak, nonatomic, readonly) UIBarButtonItemGroup *buttonGroup;
@property (nonatomic, readonly) _Bool groupRepresentative;
@property (nonatomic) long long style;
@property (nonatomic) double width;
@property (copy, nonatomic) NSSet *possibleTitles;
@property (retain, nonatomic) UIView *customView;
@property (nonatomic) SEL action;
@property (weak, nonatomic) id target;
@property (retain, nonatomic) UIColor *tintColor;

+ (void)_getSystemItemStyle:(long long *)arg1 title:(id *)arg2 image:(id *)arg3 selectedImage:(id *)arg4 action:(SEL *)arg5 forBarStyle:(long long)arg6 landscape:(_Bool)arg7 alwaysBordered:(_Bool)arg8 usingSystemItem:(long long)arg9 usingItemStyle:(long long)arg10;
+ (id)_appearanceBlindViewClasses;
+ (Class)classForNavigationButton;
+ (Class)classForToolbarButton;

- (id)init;
- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)title;
- (void)setTitle:(id)arg1;
- (id)image;
- (void)setImage:(id)arg1;
- (id)view;
- (void)setView:(id)arg1;
- (id)window;
- (id)nextResponder;
- (void)setImageInsets:(struct UIEdgeInsets)arg1;
- (struct UIEdgeInsets)largeContentSizeImageInsets;
- (id)resolvedTitle;
- (id)largeContentSizeImage;
- (struct UIEdgeInsets)imageInsets;
- (id)initWithCustomView:(id)arg1;
- (_Bool)hasTitle;
- (_Bool)isCustomViewItem;
- (void)_executeValidationHandler;
- (id)titleTextAttributesForState:(unsigned long long)arg1;
- (id)_imageForState:(unsigned long long)arg1 compact:(_Bool)arg2 type:(long long)arg3;
- (id)backButtonBackgroundImageForState:(unsigned long long)arg1 barMetrics:(long long)arg2;
- (id)backgroundImageForState:(unsigned long long)arg1 style:(long long)arg2 barMetrics:(long long)arg3;
- (id)_backgroundImageForState:(unsigned long long)arg1 compact:(_Bool)arg2 type:(long long)arg3;
- (double)backButtonBackgroundVerticalPositionAdjustmentForBarMetrics:(long long)arg1;
- (_Bool)_resizesBackgroundImage;
- (struct UIEdgeInsets)landscapeImagePhoneInsets;
- (double)backgroundVerticalPositionAdjustmentForBarMetrics:(long long)arg1;
- (_Bool)_showsChevron;
- (struct UIOffset)titlePositionAdjustmentForBarMetrics:(long long)arg1;
- (_Bool)isSpaceItem;
- (_Bool)_wantsThreeUp;
- (_Bool)hasImage;
- (void)_setButtonGroup:(id)arg1 isRepresentative:(_Bool)arg2;
- (id)_viewForPresenting;
- (void)setBackgroundImage:(id)arg1 forState:(unsigned long long)arg2 barMetrics:(long long)arg3;
- (void)setTitleTextAttributes:(id)arg1 forState:(unsigned long long)arg2;
- (id)_appearanceStorage;
- (void)setLandscapeImagePhone:(id)arg1;
- (void)_sendAction:(id)arg1 withEvent:(id)arg2;
- (void)_updateView;
- (void)setLargeContentSizeImage:(id)arg1;
- (void)setLargeContentSizeImageInsets:(struct UIEdgeInsets)arg1;
- (id)_itemForPresenting;
- (id)initWithTitle:(id)arg1 style:(long long)arg2 target:(id)arg3 action:(SEL)arg4;
- (void)_getSystemItemStyle:(long long *)arg1 title:(id *)arg2 image:(id *)arg3 selectedImage:(id *)arg4 action:(SEL *)arg5 forBarStyle:(long long)arg6 landscape:(_Bool)arg7 alwaysBordered:(_Bool)arg8;
- (void)_getNavBarEdgeSizeAdjust:(struct CGSize *)arg1 imageInsets:(struct UIEdgeInsets *)arg2 landscape:(_Bool)arg3;
- (void)_getToolbarSystemItemEdgeInsetsWithImageInsets:(struct UIEdgeInsets *)arg1 forBarStyle:(long long)arg2 landscape:(_Bool)arg3 alwaysBordered:(_Bool)arg4;
- (void)setBackgroundImage:(id)arg1 forState:(unsigned long long)arg2 style:(long long)arg3 barMetrics:(long long)arg4;
- (void)_applyPositionAdjustmentToSegmentedControl:(id)arg1;
- (id)initWithImage:(id)arg1 style:(long long)arg2 target:(id)arg3 action:(SEL)arg4;
- (id)initWithImage:(id)arg1 landscapeImagePhone:(id)arg2 style:(long long)arg3 target:(id)arg4 action:(SEL)arg5;
- (id)initWithBarButtonSystemItem:(long long)arg1 target:(id)arg2 action:(SEL)arg3;
- (id)landscapeImagePhone;
- (void)setLandscapeImagePhoneInsets:(struct UIEdgeInsets)arg1;
- (struct CGRect)_rectForPresenting;
- (id)itemVariation;
- (void)_setSystemItem:(long long)arg1;
- (id)backgroundImageForState:(unsigned long long)arg1 barMetrics:(long long)arg2;
- (void)setBackButtonBackgroundImage:(id)arg1 forState:(unsigned long long)arg2 barMetrics:(long long)arg3;
- (void)setBackgroundVerticalPositionAdjustment:(double)arg1 forBarMetrics:(long long)arg2;
- (void)setTitlePositionAdjustment:(struct UIOffset)arg1 forBarMetrics:(long long)arg2;
- (void)setBackButtonBackgroundVerticalPositionAdjustment:(double)arg1 forBarMetrics:(long long)arg2;
- (void)setBackButtonTitlePositionAdjustment:(struct UIOffset)arg1 forBarMetrics:(long long)arg2;
- (struct UIOffset)backButtonTitlePositionAdjustmentForBarMetrics:(long long)arg1;
- (_Bool)_shouldBezelSystemButtonImage;
- (void)_setEnclosingBar:(id)arg1 onItem:(id)arg2;
- (void)_setWantsThreeUp:(_Bool)arg1;
- (id)_miniImage;
- (void)_setMiniImage:(id)arg1;
- (struct UIEdgeInsets)_miniImageInsets;
- (void)_setMiniImageInsets:(struct UIEdgeInsets)arg1;
- (id)_foregroundColorForLetterpressWithView:(id)arg1;
- (id)createViewForNavigationItem:(id)arg1;
- (id)createViewForToolbar:(id)arg1;
- (_Bool)isMinibarView;
- (void)setIsMinibarView:(_Bool)arg1;
- (_Bool)_actsAsFakeBackButton;
- (void)_setActsAsFakeBackButton:(_Bool)arg1;
- (void)_setShowsChevron:(_Bool)arg1;
- (_Bool)_isImageBarButtonItem;
- (double)_leftImagePaddingForEdgeMarginInNavBar;
- (double)_rightImagePaddingForEdgeMarginInNavBar;
- (void)_connectInterfaceBuilderEventConnection:(id)arg1;

@end
