/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/Swift-Protocol.h>

@class NSString, UIColor, UIImage;

@protocol UIPreviewActionItem_Internal <Swift>

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *identifier;
@property (nonatomic) long long style;
@property (retain, nonatomic, getter=_color, setter=_setColor:) UIColor *color;
@property (retain, nonatomic) UIImage *image;

- (unsigned short)_effectiveColor;
- (unsigned short)_effectiveImage;

@end
