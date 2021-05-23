/*
 Image: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
 */

#import <NSObject.h>

@class NSArray, NSString, UIColor, UIImage;

@interface SiriUISashItem : NSObject

{
    _Bool _canPunchout;
    _Bool _hidden;
    _Bool _isDefault;
    NSString *_title;
    UIImage *_image;
    UIColor *_backgroundColor;
    UIColor *_textColor;
    NSString *_applicationBundleIdentifier;
    NSArray *_commands;
}

@property (nonatomic, setter=_setDefault:) _Bool isDefault;
@property (copy, nonatomic) NSString *title;
@property (retain, nonatomic) UIImage *image;
@property (retain, nonatomic) UIColor *backgroundColor;
@property (retain, nonatomic) UIColor *textColor;
@property (nonatomic, getter=isHidden) _Bool hidden;
@property (copy, nonatomic, readonly) NSString *applicationBundleIdentifier;
@property (nonatomic, readonly) _Bool canPunchout;
@property (copy, nonatomic) NSArray *commands;

+ (id)_languageCode;
+ (id)defaultSashItem;
+ (void)_setLanguageCode:(id)arg1;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (id)initWithTitle:(id)arg1 image:(id)arg2;
- (id)initWithExtension:(id)arg1;
- (id)initWithApplicationBundleIdentifier:(id)arg1;

@end
