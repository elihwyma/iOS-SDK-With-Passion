/*
 Image: /System/Library/Frameworks/CoreServices.framework/CoreServices
 */

#import <NSObject.h>

__attribute__((visibility("hidden")))
@interface LSAltIconManager : NSObject

+ (id)sharedInstance;

- (id)init;
- (void)clearAlternateNameForBundleIdentifier:(id)arg1 validationDictionary:(id)arg2;
- (void)setAlternateIconName:(id)arg1 forIdentifier:(id)arg2 iconsDictionary:(id)arg3 reply:(CDUnknownBlockType)arg4;
- (void)getAlternateIconNameForIdentifier:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (id)_getPreferredIconNameForIdentifier:(id)arg1;
- (_Bool)isValidAlternateIcon:(id)arg1 forIconsDict:(id)arg2;
- (void)_setPreferredIconName:(id)arg1 forIdentifier:(id)arg2;
- (_Bool)_setAlternateIconName:(id)arg1 forIdentifier:(id)arg2 withIconsDictionary:(id)arg3 error:(id *)arg4;

@end
