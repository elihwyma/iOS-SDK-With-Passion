/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface VUILibraryViewFactory : NSObject

+ (id)viewControllerForMediaEntity:(id)arg1;
+ (id)viewControllerForMediaEntity:(id)arg1 onlyShowLocalContent:(_Bool)arg2;
+ (id)tvPlaceholderImage;
+ (void)configureSeasonPickerCell:(id)arg1 withMedia:(id)arg2 traitCollection:(id)arg3;
+ (id)moviePlaceholderImage;

@end
