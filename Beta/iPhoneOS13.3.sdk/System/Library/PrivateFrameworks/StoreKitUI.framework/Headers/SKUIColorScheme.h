/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <Foundation/NSObject.h>

#import <StoreKitUI/Swift-Protocol.h>

@class UIColor;

@interface SKUIColorScheme : NSObject <Swift>

{
    UIColor *_backgroundColor;
    UIColor *_highlightedTextColor;
    UIColor *_primaryTextColor;
    UIColor *_secondaryTextColor;
}

@property (nonatomic, readonly) long long schemeStyle;
@property (copy, nonatomic) UIColor *backgroundColor;
@property (copy, nonatomic) UIColor *highlightedTextColor;
@property (copy, nonatomic) UIColor *primaryTextColor;
@property (copy, nonatomic) UIColor *secondaryTextColor;

+ (_Bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithColorSchemeDictionary:(id)arg1;

@end
