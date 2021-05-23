/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <MediaPlayer/MPAsyncOperation.h>

@class MPMediaLibrary, NSString;

@interface MPModelLibraryGlobalPlaylistImportChangeRequestOperation : MPAsyncOperation

{
    _Bool _shouldLibraryAdd;
    NSString *_globalPlaylistID;
    MPMediaLibrary *_mediaLibrary;
    CDUnknownBlockType _responseHandler;
}

@property (copy, nonatomic) NSString *globalPlaylistID;
@property (retain, nonatomic) MPMediaLibrary *mediaLibrary;
@property (nonatomic) _Bool shouldLibraryAdd;
@property (copy, nonatomic) CDUnknownBlockType responseHandler;

- (void)execute;

@end
