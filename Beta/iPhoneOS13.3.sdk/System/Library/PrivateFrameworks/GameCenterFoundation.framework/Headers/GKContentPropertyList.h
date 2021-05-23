/*
 Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSString;

@interface GKContentPropertyList : NSObject

{
    NSDictionary *_root;
    NSString *_bundleID;
    NSDictionary *_achievementsByIdentifier;
    NSDictionary *_leaderboardsByIdentifier;
    NSDictionary *_leaderboardSetsByIdentifier;
}

@property (retain) NSString *bundleID;
@property (retain) NSDictionary *root;

+ (id)localPropertyListForGameDescriptor:(id)arg1;

- (void)dealloc;
- (id)localizedStringForKey:(id)arg1;
- (id)_rootDictionary;
- (id)achievementDescriptions;
- (id)achievementDescriptionForIdentifier:(id)arg1;
- (id)_mainBundle;
- (id)localizedStringForKey:(id)arg1 forLocalization:(id)arg2;
- (id)imageNameForDashboardLogo;
- (id)leaderboardDescriptions;
- (id)leaderboardSetDescriptions;
- (id)leaderboardDescriptionForIdentifier:(id)arg1;
- (id)leaderboardSetDescriptionForIdentifier:(id)arg1;

@end
