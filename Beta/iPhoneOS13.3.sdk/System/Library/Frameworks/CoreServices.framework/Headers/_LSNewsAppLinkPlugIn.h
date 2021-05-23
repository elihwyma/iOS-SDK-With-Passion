/*
 Image: /System/Library/Frameworks/CoreServices.framework/CoreServices
 */

#import <CoreServices/_LSAppLinkPlugIn.h>

__attribute__((visibility("hidden")))
@interface _LSNewsAppLinkPlugIn : _LSAppLinkPlugIn

+ (_Bool)canHandleURLComponents:(id)arg1;

- (id)init;
- (id)appLinksWithContext:(struct LSContext *)arg1 error:(id *)arg2;

@end
