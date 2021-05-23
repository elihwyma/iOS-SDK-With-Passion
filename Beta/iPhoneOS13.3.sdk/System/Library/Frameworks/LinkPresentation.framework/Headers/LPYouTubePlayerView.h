/*
 Image: /System/Library/Frameworks/LinkPresentation.framework/LinkPresentation
 */

#import <UIKit/UIView.h>

@class LPYouTubePlayerScriptMessageHandler, NSMutableArray, NSString, WKWebView;

@protocol LPYouTubePlayerDelegate;

@interface LPYouTubePlayerView : UIView

{
    WKWebView *_webView;
    NSString *_videoID;
    long long _state;
    LPYouTubePlayerScriptMessageHandler *_scriptMessageHandler;
    _Bool _ready;
    NSMutableArray *_commandsPendingPlayerReadiness;
    _Bool _startsPlayingAutomatically;
    _Bool _showsControls;
    _Bool _muted;
    id <LPYouTubePlayerDelegate> _delegate;
    double _startTime;
    double _endTime;
}

@property (weak, nonatomic) id <LPYouTubePlayerDelegate> delegate;
@property (nonatomic) _Bool startsPlayingAutomatically;
@property (nonatomic) _Bool showsControls;
@property (nonatomic) double startTime;
@property (nonatomic) double endTime;
@property (nonatomic, getter=isMuted) _Bool muted;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)pause;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)play;
- (void)layoutSubviews;
- (void)scrollViewDidScroll:(id)arg1;
- (void)webView:(id)arg1 didFailProvisionalNavigation:(id)arg2 withError:(id)arg3;
- (void)webView:(id)arg1 didFailNavigation:(id)arg2 withError:(id)arg3;
- (void)_webView:(id)arg1 navigation:(id)arg2 didFailProvisionalLoadInSubframe:(id)arg3 withError:(id)arg4;
- (void)enterFullScreen;
- (void)exitFullScreen;
- (void)createVideoPlayerView;
- (void)loadVideoWithID:(id)arg1;
- (void)didReceiveScriptMessage:(id)arg1;
- (void)dispatchErrorWithCode:(long long)arg1;
- (void)_evaluatePlayerCommand:(id)arg1;
- (id)_parameterScript;
- (void)loadVideoWithURL:(id)arg1;
- (void)loadVideoWithEmbedURL:(id)arg1;
- (void)seekTo:(double)arg1;

@end
