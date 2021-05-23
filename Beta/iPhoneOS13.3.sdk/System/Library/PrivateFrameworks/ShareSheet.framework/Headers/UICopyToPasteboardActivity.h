/*
 Image: /System/Library/PrivateFrameworks/ShareSheet.framework/ShareSheet
 */

#import <ShareSheet/UIActivity.h>

@interface UICopyToPasteboardActivity : UIActivity

+ (unsigned long long)_xpcAttributes;

- (id)activityType;
- (id)_systemImageName;
- (id)activityTitle;
- (_Bool)canPerformWithActivityItems:(id)arg1;
- (long long)_defaultSortGroup;
- (void)prepareWithActivityItems:(id)arg1;
- (void)performActivity;
- (id)pasteboard;

@end
