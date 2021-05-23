/*
 Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <QuartzCore/CATextLayer.h>

@class AVPlayer, AVPlayerLayer, NSMutableDictionary, NSObject;

@protocol OS_dispatch_source;

__attribute__((visibility("hidden")))
@interface AVNetworkPlaybackPerfHUDLayer : CATextLayer

{
    NSObject<OS_dispatch_source> *_hudTimer;
    AVPlayer *_player;
    AVPlayerLayer *_playerLayer;
    _Bool _showHud;
    int _colorId;
    double _opacity;
    int _fontSizeInt;
    _Bool _updateUISettings;
    int _hudXoffset;
    int _hudYoffset;
    unsigned long long _hudUpdateInterval;
    _Bool _showCompleteURI;
    long long _prevVariantIdx;
    long long _prevStallCount;
    long long _totalStallCount;
    NSMutableDictionary *_loadingStatusCache;
}

@property (weak) AVPlayer *player;
@property (weak) AVPlayerLayer *playerLayer;

+ (_Bool)runningAnInternalBuild;
+ (id)convertBitrate:(double)arg1;

- (id)init;
- (void)dealloc;
- (void)setColor:(int)arg1;
- (_Bool)hudEnabled;
- (void)startDispatchTimer;
- (void)currentItemChanged;
- (void)currentItemTracksChanged;
- (void)readHudSettingsAndCallCompletionHandler:(CDUnknownBlockType)arg1;
- (void)updateBounds:(struct CGRect)arg1;
- (void)getHudSetting;
- (void)_hudUpdate;
- (id)getVideoRange:(struct opaqueCMFormatDescription *)arg1;
- (id)getTrackFormatDesc:(id)arg1;
- (float)getScaleFactorForDisplaySize:(struct CGSize)arg1;
- (_Bool)valueLoadedForKey:(id)arg1 onObject:(id)arg2;

@end
