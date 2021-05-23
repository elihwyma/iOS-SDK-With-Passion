/*
 Image: /System/Library/Frameworks/LinkPresentation.framework/LinkPresentation
 */

#import <LinkPresentation/LPHTMLComponent.h>

@class DOMDocument, DOMElement, DOMHTMLIFrameElement, DOMHTMLVideoElement, LPCSSResolver, LPVideo, NSString, WebScriptObject;

__attribute__((visibility("hidden")))
@interface LPHTMLVideoComponent : LPHTMLComponent

{
    LPVideo *_video;
    DOMElement *_playButton;
    DOMElement *_muteButton;
    DOMElement *_muteButtonContainer;
    DOMElement *_videoPosterFrame;
    DOMElement *_videoOverlay;
    DOMHTMLVideoElement *_videoElement;
    DOMHTMLIFrameElement *_youTubeContainerElement;
    _Bool _isVisible;
    _Bool _wasPlayingWhenHidden;
    WebScriptObject *_isVisibleFunction;
    LPCSSResolver *_CSSResolver;
    DOMDocument *_document;
}

@property (nonatomic, getter=isMuted) _Bool muted;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)ruleDictionaryForStyle:(id)arg1;
+ (id)styleSet;
+ (id)additionalGlobalOutOfLineStyleDeclarations;

- (void)pause;
- (_Bool)isVisible;
- (void)play;
- (void)handleEvent:(id)arg1;
- (_Bool)isPlaying;
- (void)updateVisibility;
- (_Bool)shouldAutoPlay;
- (id)initWithVideo:(id)arg1 style:(id)arg2 posterFrame:(id)arg3 posterFrameStyle:(id)arg4 themePath:(id)arg5 generator:(id)arg6;
- (void)buildComponentWithPosterFrame:(id)arg1 posterFrameStyle:(id)arg2;
- (id)createVideoElement;
- (id)resolvedVideoElement;
- (id)youTubeParametersForVideoURL:(id)arg1;
- (void)togglePlaying;

@end
