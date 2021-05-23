/*
 Image: /System/Library/PrivateFrameworks/IconServices.framework/IconServices
 */

#import <Foundation/NSObject.h>

@class NSURL;

__attribute__((visibility("hidden")))
@interface ISBundle : NSObject

{
    struct __CFBundle *_bundle;
}

@property struct __CFBundle *bundle;
@property (copy, readonly) NSURL *bundleURL;

+ (id)mainBundle;
+ (id)iconsetResourceBundle;
+ (id)frameworkBundle;
+ (id)iconsetResourceAssetsCatalogURL;
+ (id)frameworkLocalizedString:(id)arg1;

- (void)dealloc;
- (id)initWithURL:(id)arg1;
- (id)URLForResource:(id)arg1 withExtension:(id)arg2 subdirectory:(id)arg3;
- (id)URLForResource:(id)arg1 withExtension:(id)arg2;
- (id)URLsForResourcesWithExtension:(id)arg1 subdirectory:(id)arg2;
- (id)localizedStringForKey:(id)arg1 value:(id)arg2 table:(id)arg3;
- (id)initWithCFBundle:(struct __CFBundle *)arg1;

@end
