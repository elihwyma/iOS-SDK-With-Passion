//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@protocol SVVideo;

@protocol SVVideoControlsTimingProviding <NSObject>
- (double)upNextAppearanceTimeIntervalForVideo:(id <SVVideo>)arg1;
- (double)moreFromVisibilityTimeIntervalForVideo:(id <SVVideo>)arg1;
- (double)nowPlayingVisibilityTimeIntervalForVideo:(id <SVVideo>)arg1;
- (double)autoHideTimeIntervalForVideo:(id <SVVideo>)arg1;
- (double)autoAppearanceTimeIntervalForVideo:(id <SVVideo>)arg1;
@end

