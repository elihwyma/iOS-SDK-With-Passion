/*
 Image: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
 */

#import <IMCore/IMBalloonApp.h>

@class LSPlugInKitProxy, NSExtension;

@interface _IMBalloonExtensionApp : IMBalloonApp

{
    NSExtension *_extension;
    LSPlugInKitProxy *_proxy;
}

@property (retain, nonatomic) NSExtension *extension;
@property (retain, nonatomic) LSPlugInKitProxy *proxy;

- (id)version;
- (_Bool)isEnabled;
- (_Bool)isLaunchProhibited;
- (id)applicationType;
- (id)itemID;
- (id)plugin;
- (void)setIsEnabled:(_Bool)arg1;
- (_Bool)showInBrowser;
- (_Bool)isBetaPlugin;
- (_Bool)showableInBrowser;
- (id)initWithPluginBundle:(id)arg1 pluginKitProxy:(id)arg2 extension:(id)arg3;
- (_Bool)isStickerPackOnly;
- (id)initWithPluginBundle:(id)arg1 extension:(id)arg2;
- (id)initWithPluginBundle:(id)arg1 extension:(id)arg2 pluginKitProxyClass:(Class)arg3 proxy:(id)arg4;

@end
