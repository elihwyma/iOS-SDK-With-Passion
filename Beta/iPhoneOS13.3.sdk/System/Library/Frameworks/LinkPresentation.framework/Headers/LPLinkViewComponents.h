/*
 Image: /System/Library/Frameworks/LinkPresentation.framework/LinkPresentation
 */

#import <Foundation/NSObject.h>

@class LPCaptionBarView, LPComponentView, LPTextView, UIView;

__attribute__((visibility("hidden")))
@interface LPLinkViewComponents : NSObject

{
    LPCaptionBarView *_captionBar;
    LPComponentView *_media;
    UIView *_mediaBackground;
    LPCaptionBarView *_mediaTopCaptionBar;
    LPCaptionBarView *_mediaBottomCaptionBar;
    LPTextView *_quote;
}

@property (retain, nonatomic) LPCaptionBarView *captionBar;
@property (retain, nonatomic) LPComponentView *media;
@property (retain, nonatomic) UIView *mediaBackground;
@property (retain, nonatomic) LPCaptionBarView *mediaTopCaptionBar;
@property (retain, nonatomic) LPCaptionBarView *mediaBottomCaptionBar;
@property (retain, nonatomic) LPTextView *quote;

@end
