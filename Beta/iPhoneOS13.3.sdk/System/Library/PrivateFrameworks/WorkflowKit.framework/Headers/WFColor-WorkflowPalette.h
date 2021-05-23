/*
 Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
 */

#import <ContentKit/WFColor.h>

@class NSString, WFGradient;

@interface WFColor (WorkflowPalette)

@property (nonatomic, readonly) WFGradient *paletteGradient;
@property (nonatomic, readonly) unsigned int RGBAValue;
@property (nonatomic, readonly) NSString *hexValue;

+ (id)workflowGradientPalette;
+ (id)workflowPalette;
+ (id)workflowPaletteNames;
+ (id)colorWithPaletteColor:(unsigned long long)arg1;
+ (id)colorWithRGBAValue:(unsigned int)arg1;
+ (id)colorWithP3RGBAValue:(unsigned int)arg1;

@end
