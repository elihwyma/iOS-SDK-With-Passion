/*
 Image: /System/Library/Frameworks/Messages.framework/Messages
 */

#import <Foundation/NSObject.h>

@class CKImageData, NSData, NSError, NSString, NSURL, UIImage;

@interface MSSticker : NSObject

{
    NSURL *_imageFileURL;
    NSString *_localizedDescription;
    NSData *_data;
    CKImageData *__imageData;
    NSError *__stickerError;
    UIImage *__thumbnail;
}

@property (retain, nonatomic) CKImageData *_imageData;
@property (retain, nonatomic) NSError *_stickerError;
@property (retain, nonatomic) UIImage *_thumbnail;
@property (nonatomic, readonly) NSURL *imageFileURL;
@property (copy, nonatomic, readonly) NSString *localizedDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSData *data;

+ (id)MSStickerPreviewCacheKeyForSticker:(id)arg1;
+ (id)stickerWithContentsOfURL:(id)arg1 localizedDescription:(id)arg2 error:(id *)arg3;

- (id)accessibilityLabel;
- (id)initWithContentsOfURL:(id)arg1 data:(id)arg2 localizedDescription:(id)arg3 error:(id *)arg4;
- (id)initWithContentsOfFileURL:(id)arg1 localizedDescription:(id)arg2 error:(id *)arg3;
- (id)initWithContentsOfURL:(id)arg1 localizedDescription:(id)arg2 error:(id *)arg3;
- (void)_generateImageData;
- (void)_generateThumbnail;

@end
