/*
 Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

#import <MusicLibrary/ML3DatabaseOperation.h>

@interface ML3RemovePlaylistsOperation : ML3DatabaseOperation

- (unsigned long long)type;
- (_Bool)_execute:(id *)arg1;
- (_Bool)_verifyLibraryConnectionAndAttributesProperties:(id *)arg1;
- (_Bool)_removePlaylistsWithPersistentIDs:(id)arg1 fromSource:(int)arg2 usingTransaction:(id)arg3;
- (_Bool)_removeSource:(int)arg1 usingTransaction:(id)arg2;
- (_Bool)_removeRemotePlaylistsWithNoSourceUsingTransation:(id)arg1;

@end
