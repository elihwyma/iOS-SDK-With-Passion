/*
 Image: /System/Library/PrivateFrameworks/ShareSheet.framework/ShareSheet
 */

#import <ShareSheet/UIApplicationExtensionActivity.h>

@class LSPlugInKitProxy, NSArray;

@interface UIFileProviderApplicationExtensionActivity : UIApplicationExtensionActivity

{
    LSPlugInKitProxy *_pluginProxy;
    NSArray *_groupContainerURLs;
}

@property (retain, nonatomic) LSPlugInKitProxy *pluginProxy;
@property (retain, nonatomic) NSArray *groupContainerURLs;

- (_Bool)canPerformWithActivityItems:(id)arg1;
- (id)initWithApplicationExtension:(id)arg1;
- (_Bool)_sharesGroupContainerWithURL:(id)arg1;

@end
