/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <Foundation/NSObject.h>

@class UIColor;

@interface SKUIAnalyzedImageColors : NSObject

{
    _Bool _isBackgroundLight;
    UIColor *_backgroundColor;
    UIColor *_textPrimaryColor;
    UIColor *_textSecondaryColor;
}

@property (retain, nonatomic) UIColor *backgroundColor;
@property (retain, nonatomic) UIColor *textPrimaryColor;
@property (retain, nonatomic) UIColor *textSecondaryColor;
@property (nonatomic) _Bool isBackgroundLight;

@end
