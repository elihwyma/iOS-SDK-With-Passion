/*
 Image: /System/Library/Frameworks/BusinessChat.framework/BusinessChat
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSString, UIImage;

@interface BCMessageInfo : NSObject

{
    NSString *_title;
    NSString *_subtitle;
    NSString *_alternateTitle;
    NSString *_imageIdentifier;
    NSString *_imageDescription;
    UIImage *_image;
    NSString *__style;
}

@property (nonatomic) NSString *_style;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *subtitle;
@property (retain, nonatomic) NSString *alternateTitle;
@property (retain, nonatomic) NSString *imageIdentifier;
@property (retain, nonatomic) NSString *imageDescription;
@property (nonatomic, readonly) NSString *style;
@property (retain, nonatomic) UIImage *image;
@property (nonatomic, readonly) NSDictionary *dictionaryValue;

- (id)initWithDictionary:(id)arg1;
- (id)initWithTitle:(id)arg1 subtitle:(id)arg2 style:(id)arg3 alternateTitle:(id)arg4 imageIdentifier:(id)arg5 imageDescription:(id)arg6;
- (id)initWithDictionary:(id)arg1 imageDictionary:(id)arg2;

@end
