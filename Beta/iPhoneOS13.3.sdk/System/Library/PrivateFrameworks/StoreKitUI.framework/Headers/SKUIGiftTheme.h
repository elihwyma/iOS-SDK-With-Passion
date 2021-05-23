/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <Foundation/NSObject.h>

#import <StoreKitUI/Swift-Protocol.h>

@class NSString, NSURL, UIColor, UIImage;

__attribute__((visibility("hidden")))
@interface SKUIGiftTheme : NSObject <Swift>

{
    UIColor *_backgroundColor;
    UIColor *_bodyTextColor;
    UIImage *_headerImage;
    NSURL *_headerImageURL;
    UIColor *_primaryTextColor;
    long long _themeIdentifier;
    NSString *_themeName;
}

@property (nonatomic) long long themeIdentifier;
@property (copy, nonatomic) NSString *themeName;
@property (copy, nonatomic) UIColor *backgroundColor;
@property (copy, nonatomic) UIColor *bodyTextColor;
@property (copy, nonatomic) UIColor *primaryTextColor;
@property (retain, nonatomic) UIImage *headerImage;
@property (copy, nonatomic) NSURL *headerImageURL;

- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithThemeDictionary:(id)arg1;

@end
