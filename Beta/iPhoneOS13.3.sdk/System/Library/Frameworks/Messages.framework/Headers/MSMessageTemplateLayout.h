/*
 Image: /System/Library/Frameworks/Messages.framework/Messages
 */

#import <Messages/MSMessageLayout.h>

@class NSData, NSString, NSURL, UIImage;

@interface MSMessageTemplateLayout : MSMessageLayout

{
    NSString *_caption;
    NSString *_subcaption;
    NSString *_trailingCaption;
    NSString *_trailingSubcaption;
    NSURL *_mediaFileURL;
    UIImage *_image;
    NSData *_mediaData;
    NSString *_mediaType;
    NSString *_imageTitle;
    NSString *_imageSubtitle;
}

@property (retain, nonatomic) NSData *mediaData;
@property (retain, nonatomic) NSString *mediaType;
@property (copy, nonatomic) NSString *caption;
@property (copy, nonatomic) NSString *subcaption;
@property (copy, nonatomic) NSString *trailingCaption;
@property (copy, nonatomic) NSString *trailingSubcaption;
@property (retain, nonatomic) UIImage *image;
@property (copy, nonatomic) NSURL *mediaFileURL;
@property (copy, nonatomic) NSString *imageTitle;
@property (copy, nonatomic) NSString *imageSubtitle;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
