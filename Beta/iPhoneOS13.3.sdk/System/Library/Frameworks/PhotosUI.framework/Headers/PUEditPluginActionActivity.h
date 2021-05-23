/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <PhotosUI/PUEditPluginActivity.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface PUEditPluginActionActivity : PUEditPluginActivity

{
    NSString *_internalSystemImageName;
}

@property (copy, nonatomic, readonly) NSString *internalSystemImageName;

+ (long long)activityCategory;

- (id)_systemImageName;
- (id)initWithPlugin:(id)arg1 systemImageName:(id)arg2;

@end
