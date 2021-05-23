/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSString, UIColor, UIFont;

__attribute__((visibility("hidden")))
@interface UIKeyCommandDiscoverabilityHUDVisualStyle : NSObject

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) struct UIEdgeInsets HUDViewInsets;
@property (nonatomic, readonly) double HUDPageControlBottomMargin;
@property (nonatomic, readonly) double columnDividerWidth;
@property (nonatomic, readonly) double summaryXPadding;
@property (nonatomic, readonly) double summaryYPadding;
@property (nonatomic, readonly) double summaryDescriptionToModifiersSpacing;
@property (nonatomic, readonly) double summaryModifiersSpacing;
@property (nonatomic, readonly) UIFont *summaryFont;
@property (nonatomic, readonly) double summaryLineHeight;
@property (nonatomic, readonly) double summaryLineSpacing;
@property (nonatomic, readonly) double minimumFontScaleBeforeTruncation;
@property (nonatomic, readonly) UIColor *titleColor;
@property (nonatomic, readonly) UIColor *inputColor;
@property (nonatomic, readonly) UIColor *dividerColor;

+ (id)visualStyleForTraitCollection:(id)arg1;

- (double)maxHUDWidthForWidth:(double)arg1;
- (double)maxHUDHeightForHeight:(double)arg1;
- (double)columnDividerHeightForHUDHeight:(double)arg1;

@end
