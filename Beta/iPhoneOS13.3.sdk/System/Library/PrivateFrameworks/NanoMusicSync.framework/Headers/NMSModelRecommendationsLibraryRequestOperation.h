/*
 Image: /System/Library/PrivateFrameworks/NanoMusicSync.framework/NanoMusicSync
 */

#import <MediaPlayer/MPAsyncOperation.h>

@class NMSModelRecommendationsLibraryRequest;

__attribute__((visibility("hidden")))
@interface NMSModelRecommendationsLibraryRequestOperation : MPAsyncOperation

{
    NMSModelRecommendationsLibraryRequest *_request;
    CDUnknownBlockType _responseHandler;
}

@property (copy, nonatomic) NMSModelRecommendationsLibraryRequest *request;
@property (copy, nonatomic) CDUnknownBlockType responseHandler;

- (void)execute;
- (void)_requestPlaylistsEntries;
- (void)_requestSongs;
- (void)_requestAlbums;
- (void)_requestPlaylists;
- (id)_mpIdentifierSetsFromStringIdentifiers:(id)arg1;
- (void)_requestContainerWithClass:(Class)arg1;
- (id)_modelObjectWithCachedArtworkFromModelObject:(id)arg1;

@end
