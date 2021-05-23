/*
 Image: /System/Library/PrivateFrameworks/ScreenshotServices.framework/ScreenshotServices
 */

#import <Foundation/NSObject.h>

@class CAFilter, UIColor;

@interface SSMaterial : NSObject

{
    CAFilter *_filter;
    UIColor *_color;
}

@property (nonatomic, readonly) CAFilter *filter;
@property (nonatomic, readonly) UIColor *color;
@property (nonatomic, readonly) double colorAlpha;

+ (id)cropHandle;
+ (id)vellumOpacitySliderTrack;
+ (id)vellumOpacitySliderValueImage;

- (void)applyToView:(id)arg1;
- (id)_initWithFilterType:(id)arg1 color:(id)arg2;

@end
