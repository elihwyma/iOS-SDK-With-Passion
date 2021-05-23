/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <MediaPlayer/MPAsyncOperation.h>

@class MPMediaLibraryView, MPModelObject, NSNumber;

@interface MPModelLibraryKeepLocalStatusRequestOperation : MPAsyncOperation

{
    CDUnknownBlockType _downloadablePlaylistItemEntityQueryBlock;
    long long _enableState;
    MPModelObject *_identifyingModelObject;
    MPMediaLibraryView *_libraryView;
    NSNumber *_redownloadableItemCount;
    CDUnknownBlockType _responseHandler;
    shared_ptr_e8455ceb _downloadableItemsQuery;
}

@property (nonatomic) shared_ptr_e8455ceb downloadableItemsQuery;
@property (copy, nonatomic) CDUnknownBlockType downloadablePlaylistItemEntityQueryBlock;
@property (nonatomic) long long enableState;
@property (retain, nonatomic) MPModelObject *identifyingModelObject;
@property (copy, nonatomic) MPMediaLibraryView *libraryView;
@property (copy, nonatomic) NSNumber *redownloadableItemCount;
@property (copy, nonatomic) CDUnknownBlockType responseHandler;

- (id).cxx_construct;
- (void)execute;

@end
