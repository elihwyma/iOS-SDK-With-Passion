/*
 Image: /System/Library/Frameworks/Contacts.framework/Contacts
 */

#import <Contacts/Swift-Protocol.h>

@protocol CNFavoritesLogger <Swift>

- (unsigned short)readingFavorites: /* Error: Ran out of types for this method. */;
- (unsigned short)writingFavorites: /* Error: Ran out of types for this method. */;
- (unsigned short)rematchingFavorites: /* Error: Ran out of types for this method. */;
- (unsigned short)finishedReadingRemoteFavorites;
- (unsigned short)finishedReadingFavoritesFromPath:entriesCount: /* Error: Ran out of types for this method. */;
- (unsigned short)finishedWritingRemoteFavorites;
- (unsigned short)finishedWritingFavoritesToPath:entriesCount: /* Error: Ran out of types for this method. */;
- (unsigned short)failedToReadRemoteFavorites: /* Error: Ran out of types for this method. */;
- (unsigned short)failedToReadFavoritesFromPath:error:simulateCrashReport: /* Error: Ran out of types for this method. */;
- (unsigned short)failedToConvertFavoritesToPropertyList: /* Error: Ran out of types for this method. */;
- (unsigned short)failedToVerifyFavorites:withPropertyListFavorites:error: /* Error: Ran out of types for this method. */;
- (unsigned short)failedToWriteRemoteFavorites: /* Error: Ran out of types for this method. */;
- (unsigned short)failedToVerifyWrittenFavoritesExistsAtPath: /* Error: Ran out of types for this method. */;
- (unsigned short)failedToWriteFavoritesToPath:error:simulateCrashReport: /* Error: Ran out of types for this method. */;
- (unsigned short)reportFavoritesAccessedBeforeFirstUnlock;

@end
