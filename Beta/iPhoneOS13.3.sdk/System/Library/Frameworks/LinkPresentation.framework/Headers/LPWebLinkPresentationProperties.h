/*
 Image: /System/Library/Frameworks/LinkPresentation.framework/LinkPresentation
 */

#import <Foundation/NSObject.h>

@class LPAudio, LPCaptionBarPresentationProperties, LPImage, LPImagePresentationProperties, LPInlineMediaPlaybackInformation, LPVideo, NSArray, NSNumber, NSString, UIColor;

@interface LPWebLinkPresentationProperties : NSObject

{
    _Bool _preliminary;
    long long _style;
    LPCaptionBarPresentationProperties *_captionBar;
    LPCaptionBarPresentationProperties *_mediaTopCaptionBar;
    LPCaptionBarPresentationProperties *_mediaBottomCaptionBar;
    NSString *_quotedText;
    LPImage *_image;
    LPImagePresentationProperties *_imageProperties;
    NSArray *_alternateImages;
    LPVideo *_video;
    LPAudio *_audio;
    UIColor *_backgroundColor;
    NSNumber *_minimumHeight;
    LPInlineMediaPlaybackInformation *_inlinePlaybackInformation;
}

@property (nonatomic, getter=isPreliminary) _Bool preliminary;
@property (nonatomic) long long style;
@property (retain, nonatomic) LPCaptionBarPresentationProperties *captionBar;
@property (retain, nonatomic) LPCaptionBarPresentationProperties *mediaTopCaptionBar;
@property (retain, nonatomic) LPCaptionBarPresentationProperties *mediaBottomCaptionBar;
@property (copy, nonatomic) NSString *quotedText;
@property (retain, nonatomic) LPImage *image;
@property (retain, nonatomic) LPImagePresentationProperties *imageProperties;
@property (retain, nonatomic) NSArray *alternateImages;
@property (retain, nonatomic) LPVideo *video;
@property (retain, nonatomic) LPAudio *audio;
@property (retain, nonatomic) UIColor *backgroundColor;
@property (retain, nonatomic) NSNumber *minimumHeight;
@property (retain, nonatomic) LPInlineMediaPlaybackInformation *inlinePlaybackInformation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

@end
