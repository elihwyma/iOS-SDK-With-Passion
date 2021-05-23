/*
 Image: /System/Library/PrivateFrameworks/ShareSheet.framework/ShareSheet
 */

#import <ShareSheet/UIActivity.h>

@interface UIAirDropActivity : UIActivity

+ (long long)activityCategory;
+ (id)classNamesForItems:(id)arg1;
+ (id)classesForClassNames:(id)arg1;
+ (_Bool)canPerformActivityWithItemClasses:(id)arg1;
+ (unsigned long long)_xpcAttributes;

- (id)activityType;
- (struct CGSize)_thumbnailSize;
- (id)_activitySettingsImage;
- (id)activityTitle;
- (_Bool)canPerformWithActivityItems:(id)arg1;
- (id)_activityImage;

@end
