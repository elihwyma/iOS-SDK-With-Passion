/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIImage.h>

@class UIColor;

__attribute__((visibility("hidden")))
@interface UIKBCachedImage : UIImage

@property (nonatomic, readonly) _Bool hasFormatColor;
@property (retain, nonatomic) UIColor *formatColor;

+ (_Bool)supportsSecureCoding;

@end
