/*
 Image: /System/Library/PrivateFrameworks/ShareSheet.framework/ShareSheet
 */

#import <ShareSheet/UIActivity.h>

@interface SUIShareActivity : UIActivity

+ (long long)activityCategory;
+ (unsigned long long)_xpcAttributes;

- (id)activityType;
- (id)_systemImageName;
- (id)activityTitle;
- (_Bool)canPerformWithActivityItems:(id)arg1;
- (long long)_defaultSortGroup;
- (_Bool)ss_shouldExecuteInShareSheet;
- (_Bool)ss_shouldDismissHostsPresentationBeforePerforming;

@end
