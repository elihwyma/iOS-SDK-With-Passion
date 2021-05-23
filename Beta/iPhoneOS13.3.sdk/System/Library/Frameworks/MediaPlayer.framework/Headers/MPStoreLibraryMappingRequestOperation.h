/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <MediaPlayer/MPAsyncOperation.h>

@class MPMediaLibraryView, NSArray;

@interface MPStoreLibraryMappingRequestOperation : MPAsyncOperation

{
    MPMediaLibraryView *_libraryView;
    Class _modelClass;
    NSArray *_identifierSets;
    CDUnknownBlockType _responseHandler;
}

@property (copy, nonatomic) MPMediaLibraryView *libraryView;
@property (nonatomic) Class modelClass;
@property (copy, nonatomic) NSArray *identifierSets;
@property (copy, nonatomic) CDUnknownBlockType responseHandler;

+ (_Bool)supportsModelClass:(Class)arg1;

- (void)execute;

@end
