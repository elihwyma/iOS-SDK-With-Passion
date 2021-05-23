/*
 Image: /System/Library/PrivateFrameworks/WebBookmarks.framework/WebBookmarks
 */

#import <Foundation/NSObject.h>

@class WFUserSettings;

@interface WebBookmarkWebFilterSettings : NSObject

{
    WFUserSettings *_userSettings;
}

@property (nonatomic, readonly) WFUserSettings *userSettings;
@property (nonatomic, readonly, getter=isWebFilterEnabled) _Bool webFilterEnabled;
@property (nonatomic, readonly, getter=isWebFilterWhiteListOnlyModeEnabled) _Bool webFilterWhiteListOnlyModeEnabled;

+ (id)sharedWebFilterSettings;

- (id)init;
- (void)dealloc;
- (void)reloadSettings;

@end
