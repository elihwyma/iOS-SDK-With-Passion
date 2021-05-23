/*
 Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

#import <MusicLibrary/ML3DatabaseOperation.h>

@interface ML3RemoveTracksOperation : ML3DatabaseOperation

- (unsigned long long)type;
- (_Bool)_execute:(id *)arg1;
- (_Bool)_verifyLibraryConnectionAndAttributesProperties:(id *)arg1;
- (_Bool)_removeSource:(int)arg1 usingTransaction:(id)arg2;
- (_Bool)_removeTracksWithPersistentIDs:(id)arg1 fromSource:(int)arg2 usingTransaction:(id)arg3;

@end
