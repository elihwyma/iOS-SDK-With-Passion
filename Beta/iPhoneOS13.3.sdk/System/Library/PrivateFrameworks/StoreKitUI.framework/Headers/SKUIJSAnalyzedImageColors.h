/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <ITMLKit/IKJSObject.h>

@class SKUIJSColor;

__attribute__((visibility("hidden")))
@interface SKUIJSAnalyzedImageColors : IKJSObject

{
    SKUIJSColor *_backgroundColor;
    SKUIJSColor *_textPrimaryColor;
    SKUIJSColor *_textSecondaryColor;
    _Bool _isBackgroundLight;
}

@property (nonatomic, readonly) SKUIJSColor *backgroundColor;
@property (nonatomic, readonly) SKUIJSColor *textPrimaryColor;
@property (nonatomic, readonly) SKUIJSColor *textSecondaryColor;
@property (nonatomic, readonly) _Bool isBackgroundLight;

- (id)initWithAppContext:(id)arg1 analyzedImageColors:(id)arg2;

@end
