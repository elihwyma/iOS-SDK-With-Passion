/*
 Image: /System/Library/PrivateFrameworks/ShareSheet.framework/ShareSheet
 */

#import <ShareSheet/UIActivity.h>

@interface UIAddToReadingListActivity : UIActivity

+ (unsigned long long)_xpcAttributes;

- (id)activityType;
- (id)_systemImageName;
- (id)activityTitle;
- (_Bool)canPerformWithActivityItems:(id)arg1;
- (void)prepareWithActivityItems:(id)arg1;
- (void)performActivity;
- (void)_addToReadingList:(id)arg1 withTitle:(id)arg2;

@end
