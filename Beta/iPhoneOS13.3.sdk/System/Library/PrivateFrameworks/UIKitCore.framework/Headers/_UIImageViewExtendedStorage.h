/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class CIContext, NSArray, NSMapTable, NSString, UIImage, UIImageSymbolConfiguration, UIImageView, UILayoutGuide;

__attribute__((visibility("hidden")))
@interface _UIImageViewExtendedStorage : NSObject

{
    UIImageView *_imageView;
    UIImage *_image;
    UIImage *_highlightedImage;
    UIImage *_configuredImage;
    UIImage *_configuredHighlightedImage;
    UIImageSymbolConfiguration *_preferredSymbolConfiguration;
    UIImageSymbolConfiguration *_overridingSymbolConfiguration;
    NSArray *_animationImages;
    NSArray *_highlightedAnimationImages;
    double _animationDuration;
    long long _animationRepeatCount;
    long long _defaultRenderingMode;
    unsigned long long _templateImageRenderingEffects;
    UIImage *_displayedImage;
    UIImage *_displayedHighlightedImage;
    CIContext *_CIContext;
    UILayoutGuide *_imageContentGuide;
    NSMapTable *_layouts;
    unsigned int _drawMode;
    struct {
        unsigned int highlighted:1;
        unsigned int masksTemplateImages:1;
        unsigned int adjustsImageSizeForAccessibilityContentSizeCategory:1;
    } _flags;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (id)initForImageView:(id)arg1;

@end
