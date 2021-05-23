/*
 Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

#import <WebBookmarks/WebBookmark.h>

@class UIColor, UIImage;

@interface WebBookmark (SafariServicesExtras)

@property (retain, nonatomic, setter=_sf_setIconKeyColor:) UIColor *_sf_iconKeyColor;
@property (nonatomic, readonly) UIImage *_sf_icon;

+ (unsigned long long)_sf_operationForDropSession:(id)arg1;
+ (void)_sf_webBookmarksFromDropSession:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;

- (id)_sf_contextMenuUsingCollection:(id)arg1 withUserInfo:(id)arg2 handler:(id)arg3;

@end
