/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIBarItem.h>

@class NSString, UIColor, UIImage, UITabBarAppearance, UITabBarButton, _UITabBarItemAppearanceStorage;

@interface UITabBarItem : UIBarItem

{
    NSString *_title;
    SEL _action;
    id _target;
    UIImage *_templateImage;
    UIImage *_selectedTemplateImage;
    UIImage *_selectedImage;
    UIImage *_unselectedImage;
    struct UIEdgeInsets _imageInsets;
    UIImage *_landscapeTemplateImage;
    UIImage *_landscapeSelectedTemplateImage;
    UIImage *_landscapeSelectedImage;
    struct UIEdgeInsets _landscapeImageInsets;
    NSString *_badgeValue;
    UITabBarButton *_view;
    _UITabBarItemAppearanceStorage *_appearanceStorage;
    struct {
        unsigned int enabled:1;
        unsigned int style:3;
        unsigned int isSystemItem:1;
        unsigned int systemItem:7;
        unsigned int customSelectedImage:1;
        unsigned int customUnselectedImage:1;
    } _tabBarItemFlags;
    _Bool _springLoaded;
    struct UIOffset _badgeOffset;
    UITabBarAppearance *_standardAppearance;
    long long __barMetrics;
    long long __imageStyle;
    UIColor *__tintColor;
}

@property (nonatomic, setter=_setBarMetrics:) long long _barMetrics;
@property (nonatomic, setter=_setImageStyle:) long long _imageStyle;
@property (retain, nonatomic, setter=_setTintColor:) UIColor *_tintColor;
@property (nonatomic, getter=_isSelected, setter=_setSelected:) _Bool _selected;
@property (nonatomic, readonly) UIImage *_internalLandscapeSelectedImagePhone;
@property (retain, nonatomic) UIImage *landscapeSelectedImagePhone;
@property (nonatomic) struct UIOffset badgeOffset;
@property (nonatomic) struct UIOffset landscapePhoneBadgeOffset;
@property (retain, nonatomic) UIImage *selectedImage;
@property (copy, nonatomic) NSString *badgeValue;
@property (nonatomic) struct UIOffset titlePositionAdjustment;
@property (copy, nonatomic) UIColor *badgeColor;
@property (copy, nonatomic) UITabBarAppearance *standardAppearance;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)_appearanceBlindViewClasses;

- (id)init;
- (void)setEnabled:(_Bool)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setTarget:(id)arg1;
- (id)target;
- (id)title;
- (void)setTitle:(id)arg1;
- (_Bool)isEnabled;
- (SEL)action;
- (id)image;
- (void)setImage:(id)arg1;
- (id)view;
- (void)setView:(id)arg1;
- (void)setImageInsets:(struct UIEdgeInsets)arg1;
- (id)_internalTitle;
- (id)_internalLargeContentSizeImage;
- (struct UIEdgeInsets)largeContentSizeImageInsets;
- (id)_internalTemplateImage;
- (id)resolvedTitle;
- (_Bool)isSystemItem;
- (long long)systemItem;
- (id)largeContentSizeImage;
- (struct UIEdgeInsets)imageInsets;
- (void)setSpringLoaded:(_Bool)arg1;
- (_Bool)isSpringLoaded;
- (_Bool)hasTitle;
- (void)setAction:(SEL)arg1;
- (void)appearance:(id)arg1 categoriesChanged:(long long)arg2;
- (id)titleTextAttributesForState:(unsigned long long)arg1;
- (struct UIEdgeInsets)landscapeImagePhoneInsets;
- (void)setTitleTextAttributes:(id)arg1 forState:(unsigned long long)arg2;
- (void)setLandscapeImagePhone:(id)arg1;
- (void)_updateView;
- (void)setLargeContentSizeImage:(id)arg1;
- (void)setLargeContentSizeImageInsets:(struct UIEdgeInsets)arg1;
- (id)landscapeImagePhone;
- (void)setLandscapeImagePhoneInsets:(struct UIEdgeInsets)arg1;
- (id)_createViewForTabBar:(id)arg1 asProxyView:(_Bool)arg2;
- (void)_setTitleTextAttributeValue:(id)arg1 forAttributeKey:(id)arg2 state:(unsigned long long)arg3;
- (void)_showSelectedIndicator:(_Bool)arg1 changeSelection:(_Bool)arg2;
- (void)_updateToMatchCurrentState;
- (id)_internalTemplateImagesForTabBarDisplayStyle:(long long)arg1;
- (void)_setInternalTitle:(id)arg1;
- (void)_setInternalTemplateImage:(id)arg1;
- (void)_setInternalLandscapeTemplateImage:(id)arg1;
- (id)_internalTemplateImages;
- (id)_internalLandscapeTemplateImages;
- (id)badgeTextAttributesForState:(unsigned long long)arg1;
- (void)setBadgeTextAttributes:(id)arg1 forState:(unsigned long long)arg2;
- (id)_internalTitleForTabBarDisplayStyle:(long long)arg1;
- (id)unselectedImage;
- (void)_updateViewBadge;
- (void)_updateViewAndPositionItems:(_Bool)arg1;
- (id)initWithTitle:(id)arg1 image:(id)arg2 tag:(long long)arg3;
- (id)initWithTitle:(id)arg1 image:(id)arg2 selectedImage:(id)arg3;
- (id)initWithTabBarSystemItem:(long long)arg1 tag:(long long)arg2;
- (void)setFinishedSelectedImage:(id)arg1 withFinishedUnselectedImage:(id)arg2;
- (id)finishedSelectedImage;
- (id)finishedUnselectedImage;
- (void)setAnimatedBadge:(_Bool)arg1;
- (_Bool)animatedBadge;
- (void)setUnselectedImage:(id)arg1;
- (id)_internalLandscapeTemplateImage;

@end
