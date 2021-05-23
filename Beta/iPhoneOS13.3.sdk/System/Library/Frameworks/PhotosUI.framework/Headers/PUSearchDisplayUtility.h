/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface PUSearchDisplayUtility : NSObject

+ (unsigned long long)cornerMaskForCell:(id)arg1 roundedCornerType:(long long)arg2;
+ (id)applyCornerMaskToCell:(id)arg1 roundedCornerType:(long long)arg2;
+ (id)genericCellFromCell:(id)arg1 roundedCornerType:(long long)arg2;
+ (id)genericSuggestionsCellFont;
+ (id)genericSuggestionsTitleCellFont;
+ (_Bool)indexPathIsLastRowInSection:(id)arg1 tableView:(id)arg2;
+ (_Bool)indexPathIsFirstRowInSection:(id)arg1 tableView:(id)arg2;
+ (_Bool)hasLimitedScreenSize;
+ (id)feedbackTapToRadarViewControllerWithAttachmentURLs:(id)arg1;

@end
