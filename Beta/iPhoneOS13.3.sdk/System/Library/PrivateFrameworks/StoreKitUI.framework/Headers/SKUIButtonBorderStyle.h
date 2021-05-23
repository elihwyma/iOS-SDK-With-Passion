/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <Foundation/NSObject.h>

#import <StoreKitUI/Swift-Protocol.h>

@class IKColor, NSString;

__attribute__((visibility("hidden")))
@interface SKUIButtonBorderStyle : NSObject <Swift>

{
    IKColor *_borderColor;
    double _borderWidth;
    struct UIEdgeInsets _contentInset;
    struct IKCornerRadii _cornerRadii;
    IKColor *_fillColor;
    NSString *_namedCornerStyle;
}

@property (copy, nonatomic) IKColor *borderColor;
@property (nonatomic) double borderWidth;
@property (nonatomic) struct IKCornerRadii cornerRadii;
@property (copy, nonatomic) IKColor *fillColor;
@property (copy, nonatomic) NSString *namedCornerStyle;
@property (nonatomic) struct UIEdgeInsets contentInset;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)_usesBackgroundWithAlpha:(id)arg1;
- (id)initWithElementStyle:(id)arg1;
- (id)bezierPathWithBounds:(struct CGRect)arg1;

@end
