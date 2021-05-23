/*
 Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <IMCore/IMPluginPayload.h>

@class CKMediaObject, NSDictionary, NSURL, UIViewController;

@protocol CKPluginEntryViewController;

@interface CKBrowserItemPayload : IMPluginPayload

{
    _Bool _requiresValidation;
    _Bool _useDirectSend;
    NSURL *_videoComplementFileURL;
    UIViewController<CKPluginEntryViewController> *_photoShelfViewController;
    NSURL *_fileURL;
    NSDictionary *_attributionInfo;
    CKMediaObject *_mediaObject;
}

@property (retain, nonatomic) NSURL *videoComplementFileURL;
@property (retain, nonatomic) UIViewController<CKPluginEntryViewController> *photoShelfViewController;
@property (retain, nonatomic) NSURL *fileURL;
@property (retain, nonatomic) NSDictionary *attributionInfo;
@property (retain, nonatomic) CKMediaObject *mediaObject;
@property (nonatomic) _Bool requiresValidation;
@property (nonatomic) _Bool useDirectSend;

+ (_Bool)supportsSecureCoding;
+ (id)browserItemFromSticker:(id)arg1;
+ (id)browserItemPayloadFromIMPluginPayload:(id)arg1;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)transcoderUserInfo;
- (id)mediaObjectFromPayload;
- (_Bool)shouldSendAsMediaObject;
- (_Bool)isEqualToPluginPayload:(id)arg1;
- (_Bool)shouldSendAsRichLink;
- (_Bool)shouldSendAsText;
- (id)__ck_urlFromTextBodyForRichLink;

@end
