/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/Swift-Protocol.h>

@class UIColor, _UIBarButtonItemAppearanceStorage;

@protocol _UIButtonBarAppearanceDelegate <Swift>

@property (nonatomic, readonly) _UIBarButtonItemAppearanceStorage *appearanceStorage;
@property (nonatomic, readonly) long long barType;
@property (nonatomic, readonly) _Bool compactMetrics;
@property (nonatomic, readonly) _Bool isRTL;
@property (nonatomic, readonly) _Bool barWantsLetterpress;
@property (nonatomic, readonly) UIColor *tintColor;
@property (nonatomic, readonly) _Bool centerTextButtons;
@property (nonatomic, readonly) double defaultEdgeSpacing;
@property (nonatomic, readonly) double defaultTextPadding;
@property (nonatomic, readonly) double backButtonMargin;
@property (nonatomic, readonly) double backButtonMaximumWidth;

- (unsigned short)backIndicatorImage;
- (unsigned short)backIndicatorMaskImage;
- (unsigned short)edgesPaddingBarButtonItem: /* Error: Ran out of types for this method. */;
- (unsigned short)absorptionForItem: /* Error: Ran out of types for this method. */;

@end
