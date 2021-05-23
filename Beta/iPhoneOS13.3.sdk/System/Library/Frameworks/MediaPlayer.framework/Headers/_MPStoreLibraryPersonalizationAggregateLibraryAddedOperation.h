/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <MediaPlayer/MPAsyncOperation.h>

@class MPMediaLibraryView;

@interface _MPStoreLibraryPersonalizationAggregateLibraryAddedOperation : MPAsyncOperation

{
    MPMediaLibraryView *_libraryView;
    CDUnknownBlockType _responseHandler;
    vector_bbba3654 _persistentIDs;
}

@property (nonatomic) MPMediaLibraryView *libraryView;
@property (nonatomic) vector_bbba3654 persistentIDs;
@property (copy, nonatomic) CDUnknownBlockType responseHandler;

- (id).cxx_construct;
- (void)execute;

@end
