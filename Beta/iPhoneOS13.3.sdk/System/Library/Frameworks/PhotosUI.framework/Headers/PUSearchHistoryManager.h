/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <Foundation/NSObject.h>

@class NSOrderedSet;

@interface PUSearchHistoryManager : NSObject

{
    NSOrderedSet *_recentSearches;
}

@property (retain, nonatomic) NSOrderedSet *recentSearches;

+ (id)sharedManager;

- (void)clearRecentSearches;
- (void)saveRecentSearch:(id)arg1;
- (id)_recentSearchesFileURL;
- (_Bool)_writeRecentSearches:(id)arg1 toURL:(id)arg2 error:(out id *)arg3;
- (id)_readRecentSearchesFromURL:(id)arg1;
- (id)_readRecentSearchesFromUserDefaults;

@end
