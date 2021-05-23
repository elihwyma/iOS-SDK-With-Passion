/*
 Image: /System/Library/Frameworks/Contacts.framework/Contacts
 */

#import <Foundation/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface CNMockFavoritesLogger : NSObject

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)readingFavorites:(CDUnknownBlockType)arg1;
- (void)writingFavorites:(CDUnknownBlockType)arg1;
- (void)rematchingFavorites:(CDUnknownBlockType)arg1;
- (void)finishedReadingRemoteFavorites;
- (void)finishedReadingFavoritesFromPath:(id)arg1 entriesCount:(unsigned long long)arg2;
- (void)finishedWritingRemoteFavorites;
- (void)finishedWritingFavoritesToPath:(id)arg1 entriesCount:(unsigned long long)arg2;
- (void)failedToReadRemoteFavorites:(id)arg1;
- (void)failedToReadFavoritesFromPath:(id)arg1 error:(id)arg2 simulateCrashReport:(_Bool)arg3;
- (void)failedToConvertFavoritesToPropertyList:(id)arg1;
- (void)failedToVerifyFavorites:(id)arg1 withPropertyListFavorites:(id)arg2 error:(id)arg3;
- (void)failedToWriteRemoteFavorites:(id)arg1;
- (void)failedToVerifyWrittenFavoritesExistsAtPath:(id)arg1;
- (void)failedToWriteFavoritesToPath:(id)arg1 error:(id)arg2 simulateCrashReport:(_Bool)arg3;
- (void)reportFavoritesAccessedBeforeFirstUnlock;

@end
