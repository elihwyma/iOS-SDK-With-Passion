/*
 Image: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
 */

#import <SearchUI/SearchUIAccessoryViewController.h>

@class MPMediaEntity, NSArray, NSString, NSTimer, SFPunchout, SearchUIButton, TLKLabel;

@interface SearchUIPlayButtonViewController : SearchUIAccessoryViewController

{
    SFPunchout *_punchout;
    SearchUIButton *_playButton;
    TLKLabel *_captionLabel;
    NSString *_spotlightIdentifier;
    NSArray *_storeIdentifiers;
    NSTimer *_timer;
    MPMediaEntity *_mediaEntity;
    long long _mediaEntityType;
    unsigned long long _persistentID;
}

@property (retain, nonatomic) SFPunchout *punchout;
@property (retain, nonatomic) SearchUIButton *playButton;
@property (retain, nonatomic) TLKLabel *captionLabel;
@property (retain, nonatomic) NSString *spotlightIdentifier;
@property (retain, nonatomic) NSArray *storeIdentifiers;
@property (retain, nonatomic) NSTimer *timer;
@property (retain, nonatomic) MPMediaEntity *mediaEntity;
@property (nonatomic) long long mediaEntityType;
@property (nonatomic) unsigned long long persistentID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (void)initialize;
+ (id)font;
+ (_Bool)supportsRowModel:(id)arg1;
+ (id)mediaEntityForAction:(id)arg1;
+ (_Bool)mediaItem:(id)arg1 matchesPersistentID:(unsigned long long)arg2 forType:(long long)arg3;

- (void)dealloc;
- (unsigned long long)type;
- (void)hide;
- (struct CGSize)containerView:(id)arg1 systemLayoutSizeFittingSize:(struct CGSize)arg2 forArrangedSubview:(id)arg3;
- (struct CGRect)containerView:(id)arg1 layoutFrameForArrangedSubview:(id)arg2 withProposedFrame:(struct CGRect)arg3;
- (void)updatePlayState;
- (void)togglePlaybackState;
- (id)setupView;
- (void)buttonPressed;
- (void)updateWithRowModel:(id)arg1;
- (void)invalidateTimerIfNeeded;
- (void)playbackStateDidChange;
- (void)nowPlayingItemDidChange;
- (_Bool)matchesNowPlayingAudioItem;
- (void)sendEngagementDidPunchout:(_Bool)arg1;
- (void)createTimerIfNeeded;
- (_Bool)updateTimerForPauseState;
- (void)updateButtonProgressAnimated:(_Bool)arg1;
- (_Bool)shouldTopAlignForAccessibilityContentSizes;

@end
