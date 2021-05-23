/*
 Image: /System/Library/Frameworks/CoreServices.framework/CoreServices
 */

#import <CoreServices/_LSAppLinkPlugIn.h>

__attribute__((visibility("hidden")))
@interface _LSSharedWebCredentialsAppLinkPlugIn : _LSAppLinkPlugIn

- (id)init;
- (id)callingBundleIdentifier;
- (optional_430a8fae)bindingWithContext:(struct LSContext *)arg1 forServiceDetails:(id)arg2 callingBundleIdentifier:(id)arg3;
- (void)enumerateBindingsWithContext:(struct LSContext *)arg1 forSWCResults:(id)arg2 block:(CDUnknownBlockType)arg3;
- (id)appLinksWithContext:(struct LSContext *)arg1 forSWCResults:(id)arg2;
- (id)appLinksWithContext:(struct LSContext *)arg1 error:(id *)arg2;

@end
