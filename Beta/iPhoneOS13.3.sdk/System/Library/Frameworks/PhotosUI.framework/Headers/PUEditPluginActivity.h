/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <UIKit/UIActivity.h>

@class PUEditPlugin;

__attribute__((visibility("hidden")))
@interface PUEditPluginActivity : UIActivity

{
    PUEditPlugin *_plugin;
}

@property (nonatomic, readonly) PUEditPlugin *plugin;

+ (long long)activityCategory;

- (id)activityType;
- (id)_activitySettingsImage;
- (id)activityTitle;
- (_Bool)canPerformWithActivityItems:(id)arg1;
- (id)_activityImage;
- (id)initWithPlugin:(id)arg1;
- (_Bool)_isHiddenByDefault;

@end
