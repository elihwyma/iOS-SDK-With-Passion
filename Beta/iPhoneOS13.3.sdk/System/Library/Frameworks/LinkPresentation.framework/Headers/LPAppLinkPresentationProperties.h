/*
 Image: /System/Library/Frameworks/LinkPresentation.framework/LinkPresentation
 */

#import <Foundation/NSObject.h>

@class LPCaptionBarPresentationProperties, LPImage, LPVideo, NSString, UIColor;

@interface LPAppLinkPresentationProperties : NSObject

{
    LPCaptionBarPresentationProperties *_captionBar;
    LPCaptionBarPresentationProperties *_mediaTopCaptionBar;
    LPCaptionBarPresentationProperties *_mediaBottomCaptionBar;
    NSString *_topCaption;
    NSString *_bottomCaption;
    NSString *_trailingTopCaption;
    NSString *_trailingBottomCaption;
    NSString *_mediaTopCaption;
    NSString *_mediaBottomCaption;
    LPImage *_image;
    LPImage *_icon;
    LPVideo *_video;
    UIColor *_backgroundColor;
}

@property (retain, nonatomic) LPCaptionBarPresentationProperties *captionBar;
@property (retain, nonatomic) LPCaptionBarPresentationProperties *mediaTopCaptionBar;
@property (retain, nonatomic) LPCaptionBarPresentationProperties *mediaBottomCaptionBar;
@property (copy, nonatomic) NSString *topCaption;
@property (copy, nonatomic) NSString *bottomCaption;
@property (copy, nonatomic) NSString *trailingTopCaption;
@property (copy, nonatomic) NSString *trailingBottomCaption;
@property (copy, nonatomic) NSString *mediaTopCaption;
@property (copy, nonatomic) NSString *mediaBottomCaption;
@property (retain, nonatomic) LPImage *image;
@property (retain, nonatomic) LPImage *icon;
@property (retain, nonatomic) LPVideo *video;
@property (retain, nonatomic) UIColor *backgroundColor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (long long)style;

@end
