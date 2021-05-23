/*
 Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

#import <MusicLibrary/ML3DatabaseImport.h>

@class NSData, NSFileHandle, NSString;

@interface ML3MutableDatabaseImport : ML3DatabaseImport

@property (copy, nonatomic) NSString *libraryPath;
@property (copy, nonatomic) NSData *trackData;
@property (copy, nonatomic) NSData *playlistData;
@property (retain, nonatomic) NSFileHandle *fileHandle;
@property (copy, nonatomic) NSString *syncAnchor;
@property (nonatomic, getter=isResetSync) _Bool resetSync;
@property (nonatomic, getter=isSagaEnabled) _Bool sagaEnabled;
@property (nonatomic) long long storeAccountID;
@property (nonatomic) long long preferredVideoQuality;
@property (nonatomic) unsigned int homeSharingBasePlaylistID;
@property (nonatomic) _Bool tracksAreLibraryOwnedContent;
@property (nonatomic) _Bool playlistsAreLibraryOwnedContent;
@property (nonatomic, getter=isPendingMatch) _Bool pendingMatch;
@property (nonatomic) _Bool isServerImport;
@property (copy, nonatomic) NSString *syncLibraryID;
@property (nonatomic, getter=isSuspendable) _Bool suspendable;

@end
