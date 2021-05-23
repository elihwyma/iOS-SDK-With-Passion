/*
 Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

#import <Foundation/NSObject.h>

@class NSData, NSFileHandle, NSString;

@interface ML3DatabaseImport : NSObject

{
    NSString *_libraryPath;
    NSData *_trackData;
    NSData *_playlistData;
    NSFileHandle *_fileHandle;
    NSString *_syncAnchor;
    _Bool _resetSync;
    _Bool _sagaEnabled;
    long long _storeAccountID;
    long long _preferredVideoQuality;
    unsigned int _homeSharingBasePlaylistID;
    _Bool _tracksAreLibraryOwnedContent;
    _Bool _playlistsAreLibraryOwnedContent;
    _Bool _pendingMatch;
    _Bool _isServerImport;
    NSString *_syncLibraryID;
    _Bool _suspendable;
}

@property (nonatomic, readonly) NSString *libraryPath;
@property (nonatomic, readonly) NSData *trackData;
@property (nonatomic, readonly) NSData *playlistData;
@property (nonatomic, readonly) NSFileHandle *fileHandle;
@property (nonatomic, readonly) NSString *syncAnchor;
@property (nonatomic, readonly, getter=isResetSync) _Bool resetSync;
@property (nonatomic, readonly, getter=isSagaEnabled) _Bool sagaEnabled;
@property (nonatomic, readonly) long long storeAccountID;
@property (nonatomic, readonly) long long preferredVideoQuality;
@property (nonatomic, readonly) unsigned int homeSharingBasePlaylistID;
@property (nonatomic, readonly) _Bool tracksAreLibraryOwnedContent;
@property (nonatomic, readonly) _Bool playlistsAreLibraryOwnedContent;
@property (nonatomic, readonly, getter=isPendingMatch) _Bool pendingMatch;
@property (nonatomic, readonly) _Bool isServerImport;
@property (nonatomic, readonly) NSString *syncLibraryID;
@property (nonatomic, readonly, getter=isSuspendable) _Bool suspendable;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithLibraryPath:(id)arg1 trackData:(id)arg2 playlistData:(id)arg3;
- (id)_copyWithZone:(struct _NSZone *)arg1 usingConcreteClass:(Class)arg2;

@end
