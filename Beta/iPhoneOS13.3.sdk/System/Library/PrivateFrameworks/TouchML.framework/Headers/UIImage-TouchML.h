/*
 Image: /System/Library/PrivateFrameworks/TouchML.framework/TouchML
 */

#import <UIImage.h>

@class NSString, TMLRect;

@interface UIImage (TouchML)

@property (nonatomic, readonly) TMLRect *bounds;
@property (nonatomic, readonly) double aspectRatio;
@property (nonatomic, readonly) double height;
@property (nonatomic, readonly) double width;
@property (copy, nonatomic) NSString *accessibilityLabel;
@property (copy, nonatomic) NSString *accessibilityHint;
@property (copy, nonatomic) NSString *accessibilityValue;
@property (nonatomic) unsigned long long accessibilityTraits;
@property (retain, nonatomic) NSString *accessibilityLanguage;
@property (nonatomic, readonly) double scale;
@property (nonatomic, readonly) id CGImageRef;

+ (void)initializeJSContext:(id)arg1;

- (id)withRenderingMode:(long long)arg1;
- (id)colorPattern;
- (id)resizableImage:(id)arg1:(long long)arg2;
- (id)cropImageToRect:(struct CGRect)arg1;

@end
