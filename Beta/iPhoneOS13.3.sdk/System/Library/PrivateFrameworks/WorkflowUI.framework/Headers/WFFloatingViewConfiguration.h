/*
 Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

#import <Foundation/NSObject.h>

@interface WFFloatingViewConfiguration : NSObject

{
    _Bool _usePillCornerRadius;
    _Bool _colorizesShadow;
    float _shadowOpacity;
    long long _gradientDirection;
    double _cornerRadius;
    double _shadowRadius;
    double _scalingFactor;
    struct CGSize _shadowOffset;
}

@property (nonatomic) long long gradientDirection;
@property (nonatomic) _Bool usePillCornerRadius;
@property (nonatomic) double cornerRadius;
@property (nonatomic) float shadowOpacity;
@property (nonatomic) struct CGSize shadowOffset;
@property (nonatomic) double shadowRadius;
@property (nonatomic) _Bool colorizesShadow;
@property (nonatomic) double scalingFactor;

+ (id)lightMaterialWorkflowConfiguration;
+ (id)darkMaterialWorkflowConfiguration;
+ (id)widgetWorkflowConfiguration;
+ (id)bannerImageConfiguration;
+ (id)paletteColorConfiguration;

- (id)init;

@end
