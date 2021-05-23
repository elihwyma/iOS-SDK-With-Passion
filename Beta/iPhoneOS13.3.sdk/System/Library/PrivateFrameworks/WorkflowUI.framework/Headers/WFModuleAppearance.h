/*
 Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

#import <Foundation/NSObject.h>

@class UIColor, UIFont;

@interface WFModuleAppearance : NSObject

{
    double _cornerRadius;
    UIColor *_shadowColor;
    UIColor *_progressShadowColor;
    double _shadowOpacity;
    double _shadowRadius;
    UIColor *_borderColor;
    double _borderWidth;
    UIFont *_summaryFont;
    UIFont *_unpopulatedSummaryFont;
    UIColor *_backgroundColor;
    UIColor *_parentBackgroundColor;
    UIColor *_progressBackgroundColor;
    UIColor *_separatorColor;
    UIColor *_warningSeparatorColor;
    UIColor *_parametersBackgroundColor;
    UIColor *_parametersHighlightedColor;
    UIColor *_headingButtonColor;
    struct CGSize _shadowOffset;
}

@property (nonatomic, readonly) double cornerRadius;
@property (nonatomic, readonly) UIColor *shadowColor;
@property (nonatomic, readonly) UIColor *progressShadowColor;
@property (nonatomic, readonly) struct CGSize shadowOffset;
@property (nonatomic, readonly) double shadowOpacity;
@property (nonatomic, readonly) double shadowRadius;
@property (nonatomic, readonly) UIColor *borderColor;
@property (nonatomic, readonly) double borderWidth;
@property (nonatomic, readonly) UIFont *summaryFont;
@property (nonatomic, readonly) UIFont *unpopulatedSummaryFont;
@property (nonatomic, readonly) UIColor *backgroundColor;
@property (nonatomic, readonly) UIColor *parentBackgroundColor;
@property (nonatomic, readonly) UIColor *progressBackgroundColor;
@property (nonatomic, readonly) UIColor *separatorColor;
@property (nonatomic, readonly) UIColor *warningSeparatorColor;
@property (nonatomic, readonly) UIColor *parametersBackgroundColor;
@property (nonatomic, readonly) UIColor *parametersHighlightedColor;
@property (nonatomic, readonly) UIColor *headingButtonColor;

+ (id)defaultAppearance;
+ (id)lightAppearance;
+ (id)commentAppearance;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;

@end
