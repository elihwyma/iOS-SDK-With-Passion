/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSString, UIToolbar, UIView;

@protocol _UIBarAppearanceChangeObserver;

__attribute__((visibility("hidden")))
@interface _UIToolbarVisualProvider : NSObject

{
    UIToolbar *_toolbar;
    NSString *_backdropGroupName;
    UIView *_customBackgroundView;
    UIView *_currentBackgroundView;
}

@property (nonatomic, readonly) UIToolbar *toolbar;
@property (retain, nonatomic) UIView *customBackgroundView;
@property (nonatomic, readonly) UIView *currentBackgroundView;
@property (nonatomic, readonly) struct CGRect backgroundFrame;
@property (nonatomic, readonly) _Bool toolbarIsSmall;
@property (nonatomic) long long itemDistribution;
@property (copy, nonatomic) NSString *backdropGroupName;
@property (nonatomic) _Bool useModernAppearance;
@property (nonatomic, readonly) id <_UIBarAppearanceChangeObserver> appearanceObserver;

- (void)layoutSubviews;
- (id)traitCollectionForChild:(id)arg1 baseTraitCollection:(id)arg2;
- (struct CGSize)defaultSizeForOrientation:(long long)arg1;
- (void)updateArchivedSubviews:(id)arg1;
- (void)updateBackgroundGroupName;
- (id)initWithToolbar:(id)arg1;
- (void)updateBarForStyle:(long long)arg1;
- (void)updateItemsForNewFrame:(id)arg1;
- (void)updateWithItems:(id)arg1 fromOldItems:(id)arg2 animate:(_Bool)arg3;
- (void)customViewChangedForButtonItem:(id)arg1;
- (void)positionToolbarButtonsAndResetFontScaleAdjustment:(_Bool)arg1;
- (void)updateBarBackgroundSize;
- (void)updateBarBackground;
- (void)drawBackgroundViewInRect:(struct CGRect)arg1;
- (void)updateAppearance;

@end
