//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MediaPlayer/MPQueueFeeder.h>

#import <MediaPlaybackCore/MPCQueueControllerDataSource-Protocol.h>

@class MPMovie, NSString;
@protocol MPMutableIdentifierListSection;

@interface MPCSingleMovieQueueFeeder : MPQueueFeeder <MPCQueueControllerDataSource>
{
    NSString *_uniqueIdentifier;
    MPMovie *_movie;
    NSString *_movieIdentifier;
    id <MPMutableIdentifierListSection> _section;
}

@property(readonly, nonatomic) id <MPMutableIdentifierListSection> section; // @synthesize section=_section;
@property(retain, nonatomic) NSString *movieIdentifier; // @synthesize movieIdentifier=_movieIdentifier;
@property(retain, nonatomic) MPMovie *movie; // @synthesize movie=_movie;
- (id)uniqueIdentifier;
// - (void).cxx_destruct;
- (BOOL)section:(id)arg1 supportsShuffleType:(long long)arg2;
- (void)reloadSection:(id)arg1 completion:(id /* CDUnknownBlockType */)arg2;
- (id)itemForItem:(id)arg1 inSection:(id)arg2;
- (void)loadPlaybackContext:(id)arg1 completion:(id /* CDUnknownBlockType */)arg2;
@property(readonly, nonatomic) BOOL containsTransportableContent;
@property(readonly, nonatomic) BOOL containsLiveStream;
- (id)playbackInfoForItem:(id)arg1;
- (id)init;

@end

