/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

#import <UIKitCore/Swift-Protocol.h>

@class NSArray, UIColor, UIFont, UITraitCollection;

@interface _UIStatusBarStyleAttributes : NSObject <Swift>

{
    long long _style;
    long long _mode;
    UITraitCollection *_traitCollection;
    long long _effectiveLayoutDirection;
    double _iconScale;
    long long _symbolScale;
    UIFont *_font;
    UIFont *_emphasizedFont;
    UIFont *_smallFont;
    UIColor *_textColor;
    UIColor *_imageTintColor;
    UIColor *_imageDimmedTintColor;
    NSArray *_imageNamePrefixes;
}

@property (copy, nonatomic) UITraitCollection *traitCollection;
@property (nonatomic, readonly) long long style;
@property (nonatomic, readonly) long long mode;
@property (nonatomic, readonly) long long effectiveLayoutDirection;
@property (nonatomic) double iconScale;
@property (nonatomic) long long symbolScale;
@property (copy, nonatomic) UIFont *font;
@property (copy, nonatomic) UIFont *emphasizedFont;
@property (copy, nonatomic) UIFont *smallFont;
@property (copy, nonatomic) UIColor *textColor;
@property (copy, nonatomic) UIColor *imageTintColor;
@property (copy, nonatomic) UIColor *imageDimmedTintColor;
@property (copy, nonatomic) NSArray *imageNamePrefixes;

+ (_Bool)supportsSecureCoding;
+ (id)overriddenStyleAttributes;
+ (id)styleAttributesForStatusBar:(id)arg1 style:(long long)arg2;

- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)fontForStyle:(long long)arg1;
- (id)styleAttributesWithOverrides:(id)arg1;

@end
