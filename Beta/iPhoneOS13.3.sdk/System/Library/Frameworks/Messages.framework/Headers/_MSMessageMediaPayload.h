/*
 Image: /System/Library/Frameworks/Messages.framework/Messages
 */

#import <Foundation/NSObject.h>

@class NSData, NSDictionary, NSString, NSURL, UIImage;

@interface _MSMessageMediaPayload : NSObject

{
    _Bool _isSticker;
    UIImage *_image;
    NSURL *_mediaURL;
    NSString *_mediaType;
    NSString *_text;
    NSData *_mediaData;
    NSString *_mediaFilename;
    NSData *_data;
    NSString *_accessibilityLabel;
    NSDictionary *_attributionInfo;
}

@property (copy, nonatomic) NSString *text;
@property (retain, nonatomic) UIImage *image;
@property (copy, nonatomic) NSURL *mediaURL;
@property (copy, nonatomic) NSData *mediaData;
@property (copy, nonatomic) NSString *mediaType;
@property (copy, nonatomic) NSString *mediaFilename;
@property (copy, nonatomic) NSData *data;
@property (copy, nonatomic) NSString *accessibilityLabel;
@property (copy, nonatomic) NSDictionary *attributionInfo;
@property (nonatomic) _Bool isSticker;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSticker:(id)arg1;

@end
