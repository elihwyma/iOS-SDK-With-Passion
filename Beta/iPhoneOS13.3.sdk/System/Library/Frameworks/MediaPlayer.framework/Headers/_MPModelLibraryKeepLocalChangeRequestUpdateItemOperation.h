/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <MediaPlayer/MPAsyncOperation.h>

@class MPMediaItem;

@interface _MPModelLibraryKeepLocalChangeRequestUpdateItemOperation : MPAsyncOperation

{
    MPMediaItem *_mediaItem;
    long long _keepLocal;
}

@property (retain, nonatomic) MPMediaItem *mediaItem;
@property (nonatomic) long long keepLocal;

- (void)execute;

@end
