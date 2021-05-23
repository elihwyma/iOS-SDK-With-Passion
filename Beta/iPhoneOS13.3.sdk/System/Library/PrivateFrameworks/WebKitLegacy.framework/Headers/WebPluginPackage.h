/*
 Image: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
 */

#import <WebKitLegacy/WebBasePluginPackage.h>

@class NSBundle;

__attribute__((visibility("hidden")))
@interface WebPluginPackage : WebBasePluginPackage

{
    NSBundle *nsBundle;
}

- (void)dealloc;
- (_Bool)load;
- (id)initWithPath:(id)arg1;
- (id)bundle;
- (Class)viewFactory;

@end
