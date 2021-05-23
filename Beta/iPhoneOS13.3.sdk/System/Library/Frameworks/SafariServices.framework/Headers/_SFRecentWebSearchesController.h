/*
 Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

#import <WebUI/WBSRecentWebSearchesController.h>

@class NSString;

@interface _SFRecentWebSearchesController : WBSRecentWebSearchesController

{
    NSString *_pathToLegacySearchesFile;
}

+ (unsigned long long)_maximumNumberOfSearchesToTrack;

- (void)_removeLegacyRecentSearchesData;
- (id)initWithPathToLegacySearchesFile:(id)arg1;
- (void)_saveRecentSearchDictionaries:(id)arg1 toUserDefaultsUsingKey:(id)arg2;
- (id)_recentSearchDictionariesFromUserDefaultsUsingKey:(id)arg1;
- (void)_migrateLegacyData;

@end
