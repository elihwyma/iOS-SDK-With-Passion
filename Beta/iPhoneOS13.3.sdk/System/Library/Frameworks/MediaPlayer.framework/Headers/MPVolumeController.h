/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol MPVolumeControllerDataSource, MPVolumeControllerDelegate;

@interface MPVolumeController : NSObject

{
    id <MPVolumeControllerDataSource> _dataSource;
    int _volumeChangeCoalescingCount;
    unsigned int _volumeCapabilities;
    id <MPVolumeControllerDelegate> _delegate;
}

@property (weak, nonatomic) id <MPVolumeControllerDelegate> delegate;
@property (nonatomic, readonly, getter=isVolumeControlAvailable) _Bool volumeControlAvailable;
@property (nonatomic, readonly) unsigned int volumeCapabilities;
@property (copy, nonatomic, readonly) NSString *volumeControlLabel;
@property (copy, nonatomic) NSString *volumeAudioCategory;
@property (nonatomic) float volumeValue;
@property (nonatomic, getter=isMuted) _Bool muted;
@property (retain, nonatomic) id <MPVolumeControllerDataSource> dataSource;
@property (nonatomic, readonly) _Bool volumeWarningEnabled;
@property (nonatomic, readonly) long long volumeWarningState;
@property (nonatomic, readonly) float EUVolumeLimit;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)descriptionForWarningState:(long long)arg1;

- (id)init;
- (id)initWithDataSource:(id)arg1;
- (_Bool)muted;
- (void)beginIncreasingRelativeVolume;
- (void)endIncreasingRelativeVolume;
- (void)beginDecreasingRelativeVolume;
- (void)endDecreasingRelativeVolume;
- (void)adjustVolumeValue:(float)arg1;
- (void)getVolumeValueWithCompletion:(CDUnknownBlockType)arg1;
- (void)volumeControllerDataSource:(id)arg1 didChangeVolumeWarning:(long long)arg2;
- (void)volumeControllerDataSource:(id)arg1 didChangeEUVolumeLimit:(float)arg2;
- (void)volumeControllerDataSource:(id)arg1 didChangeEUVolumeLimitEnforced:(_Bool)arg2;
- (void)volumeControllerDataSource:(id)arg1 didChangeMuted:(_Bool)arg2;
- (void)volumeControllerDataSource:(id)arg1 didChangeVolume:(float)arg2;
- (void)volumeControllerDataSource:(id)arg1 didChangeVolumeLabel:(id)arg2;
- (void)volumeControllerDataSource:(id)arg1 didChangeVolumeCapabilities:(unsigned int)arg2;
- (void)volumeControllerDataSource:(id)arg1 didChangeVolumeControlAvailability:(_Bool)arg2;
- (void)volumeControllerDataSource:(id)arg1 didChangeVolumeAudioCategory:(id)arg2;
- (void)updateVolumeValue;
- (void)setVolume:(float)arg1 withNoticationDelay:(float)arg2;
- (void)updateVolumeWarningState;
- (void)_updateVolumeControlAvailability;

@end
