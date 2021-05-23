/*
 Image: /System/Library/PrivateFrameworks/WebBookmarks.framework/WebBookmarks
 */

#import <Foundation/NSObject.h>

@interface WBFeatureManager : NSObject

{
    _Bool _offlineReadingListAvailable;
    _Bool _favoritesFolderSelectionShouldSync;
    long long _accessLevel;
}

@property (nonatomic, readonly) long long accessLevel;
@property (nonatomic, readonly, getter=isOfflineReadingListAvailable) _Bool offlineReadingListAvailable;
@property (nonatomic, readonly) _Bool favoritesFolderSelectionShouldSync;

+ (id)sharedFeatureManager;

- (id)init;
- (void)_updateToAccessLevel:(long long)arg1;

@end
