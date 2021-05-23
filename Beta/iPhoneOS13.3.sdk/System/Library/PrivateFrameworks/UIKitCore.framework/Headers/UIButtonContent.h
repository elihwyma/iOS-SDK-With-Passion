/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

#import <UIKitCore/Swift-Protocol.h>

@class NSAttributedString, NSNumber, NSString, UIColor, UIImage, UIImageSymbolConfiguration, _UIGraphicsLetterpressStyle;

__attribute__((visibility("hidden")))
@interface UIButtonContent : NSObject <Swift>

{
    NSString *title;
    NSAttributedString *attributedTitle;
    UIImage *image;
    UIImage *background;
    UIColor *titleColor;
    UIColor *imageColor;
    UIColor *shadowColor;
    NSNumber *drawingStroke;
    UIImageSymbolConfiguration *preferredSymbolConfiguration;
    _Bool isWidthVariant;
}

@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSAttributedString *attributedTitle;
@property (retain, nonatomic) UIImage *image;
@property (retain, nonatomic) UIImageSymbolConfiguration *preferredSymbolConfiguration;
@property (retain, nonatomic) UIImage *background;
@property (retain, nonatomic) UIColor *titleColor;
@property (retain, nonatomic) UIColor *imageColor;
@property (retain, nonatomic) UIColor *shadowColor;
@property (retain, nonatomic) NSNumber *drawingStroke;
@property (retain, nonatomic) _UIGraphicsLetterpressStyle *letterpressStyle;
@property (nonatomic, readonly) _Bool isEmpty;

- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)updateVariableLengthStringForView:(id)arg1;

@end
