/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <Foundation/NSObject.h>

@class ICUserIdentity, ML3MusicLibrary, MPMediaLibraryArtwork, NSNumber, NSString;

@protocol OS_dispatch_queue;

@interface MPMediaLibraryArtworkRequest : NSObject

{
    NSObject<OS_dispatch_queue> *_accessSerialQueue;
    unsigned long long _mediaType;
    _Bool _hasRetrievedTokens;
    double _retrievalTime;
    NSString *_availableArtworkToken;
    NSString *_fetchableArtworkToken;
    NSNumber *_fetchableArtworkSource;
    long long _entityType;
    unsigned long long _libraryID;
    long long _artworkType;
    ML3MusicLibrary *_library;
    MPMediaLibraryArtwork *_libraryArtwork;
    ICUserIdentity *_userIdentity;
}

@property (copy, nonatomic, readonly) ICUserIdentity *userIdentity;
@property (nonatomic, readonly) ML3MusicLibrary *library;
@property (nonatomic, readonly) long long artworkType;
@property (nonatomic, readonly) unsigned long long libraryID;
@property (nonatomic, readonly) long long entityType;
@property (nonatomic, readonly) MPMediaLibraryArtwork *libraryArtwork;
@property (nonatomic) double retrievalTime;
@property (nonatomic, readonly) unsigned long long mediaType;
@property (copy, nonatomic) NSString *availableArtworkToken;
@property (copy, nonatomic) NSString *fetchableArtworkToken;
@property (copy, nonatomic) NSNumber *fetchableArtworkSource;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)initWithLibrary:(id)arg1 identifier:(unsigned long long)arg2 entityType:(long long)arg3 artworkType:(long long)arg4;
- (id)initWithLibrary:(id)arg1 identifier:(unsigned long long)arg2 entityType:(long long)arg3 artworkType:(long long)arg4 mediaType:(unsigned long long)arg5;
- (id)initWithML3Library:(id)arg1 identifier:(unsigned long long)arg2 entityType:(long long)arg3 artworkType:(long long)arg4;
- (void)setLibraryArtwork:(id)arg1;
- (void)clearFailedFetchableToken;
- (void)promoteFetchableArtworkTokenIfNeeded;
- (void)_onQueue_updateTokens;

@end
