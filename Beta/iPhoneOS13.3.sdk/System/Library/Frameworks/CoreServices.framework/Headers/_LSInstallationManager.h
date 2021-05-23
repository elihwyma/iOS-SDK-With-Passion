/*
 Image: /System/Library/Frameworks/CoreServices.framework/CoreServices
 */

#import <NSObject.h>

__attribute__((visibility("hidden")))
@interface _LSInstallationManager : NSObject

+ (id)sharedInstance;

- (void)install:(id)arg1 withCompletionBlock:(CDUnknownBlockType)arg2;
- (void)uninstall:(id)arg1 withCompletionBlock:(CDUnknownBlockType)arg2;

@end
