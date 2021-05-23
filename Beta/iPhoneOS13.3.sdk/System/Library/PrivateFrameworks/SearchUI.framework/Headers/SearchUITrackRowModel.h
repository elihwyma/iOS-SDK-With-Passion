/*
 Image: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
 */

@class SFTrack, SearchUITrackLayoutManager;

@interface SearchUITrackRowModel

{
    SearchUITrackLayoutManager *_trackLayoutManager;
    SFTrack *_track;
}

@property (retain, nonatomic) SearchUITrackLayoutManager *trackLayoutManager;
@property (retain, nonatomic) SFTrack *track;

- (id)initWithResult:(id)arg1 trackManager:(id)arg2 cardSection:(id)arg3 track:(id)arg4 queryId:(unsigned long long)arg5;

@end
