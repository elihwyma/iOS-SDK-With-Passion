/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <Foundation/NSObject.h>

@class MPMediaLibraryArtworkDataSource, MPMediaLibraryArtworkRequest;

@interface MPMediaChapter : NSObject

{
    long long _chapterType;
    unsigned long long _indexInChaptersWithAnyType;
    unsigned long long _indexInChaptersWithSameType;
    double _playbackDuration;
    double _playbackTime;
    id _value;
    CDUnknownBlockType _valueLoader;
    MPMediaLibraryArtworkRequest *_artworkRequest;
    MPMediaLibraryArtworkDataSource *_artworkDataSource;
}

@property (retain, nonatomic) id value;
@property (copy, nonatomic) CDUnknownBlockType valueLoader;
@property (nonatomic) long long chapterType;
@property (nonatomic) double playbackTime;
@property (nonatomic) double playbackDuration;
@property (nonatomic) unsigned long long indexInChaptersWithSameType;
@property (nonatomic) unsigned long long indexInChaptersWithAnyType;
@property (retain, nonatomic) MPMediaLibraryArtworkRequest *artworkRequest;
@property (weak, nonatomic) MPMediaLibraryArtworkDataSource *artworkDataSource;

- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)title;
- (double)duration;
- (id)artworkCatalog;
- (long long)_sortByChapterIndex:(id)arg1;

@end
