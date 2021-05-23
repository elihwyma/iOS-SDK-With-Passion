/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <MediaPlayer/MPAsyncOperation.h>

@class MPMediaLibraryView;

@interface _MPModelLibraryRequestItemsQueryOperation : MPAsyncOperation

{
    MPMediaLibraryView *_libraryView;
    CDUnknownBlockType _resultHandler;
    shared_ptr_34add297 _query;
}

@property (retain, nonatomic) MPMediaLibraryView *libraryView;
@property (nonatomic) shared_ptr_34add297 query;
@property (copy, nonatomic) CDUnknownBlockType resultHandler;

- (id).cxx_construct;
- (void)execute;

@end
