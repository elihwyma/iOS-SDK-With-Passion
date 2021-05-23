/*
 Image: /System/Library/Frameworks/LinkPresentation.framework/LinkPresentation
 */

@class LPInlineMediaPlaybackInformation, LPMusicPlayButtonStyle, LPPlayButtonControl;

__attribute__((visibility("hidden")))
@interface LPPlayButtonView

{
    LPPlayButtonControl *_button;
    LPInlineMediaPlaybackInformation *_playbackInformation;
    struct UIEdgeInsets _contentInset;
    LPMusicPlayButtonStyle *_style;
}

- (void)dealloc;
- (void)setContentInset:(struct UIEdgeInsets)arg1;
- (void)layoutComponentView;
- (id)initWithPlaybackInformation:(id)arg1 style:(id)arg2;
- (void)updateButton;
- (void)installiTunesButton;
- (void)installDisablediTunesButton;
- (void)installPlaceholderButton;
- (void)installPreviewButton;
- (void)installAudioButton;
- (void)updateButtonForSongOrAlbum;
- (void)updateButtonForPodcast;
- (void)updateButtonForRadio;
- (void)updateButtonForAudioBook;
- (void)updateButtonForAudioFile;

@end
