/*
 Image: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
 */

#import <IMCore/IMBalloonPlugin.h>

@class LSPlugInKitProxy, NSExtension, NSNumber, NSUUID;

@protocol PKPlugIn;

@interface IMBalloonAppExtension : IMBalloonPlugin

{
    _Bool _canSendDataPayloads;
    _Bool _shouldBalloonHideAppIcon;
    NSExtension *_extension;
    LSPlugInKitProxy *_proxy;
    NSUUID *_requestIdentifier;
}

@property (retain, nonatomic) LSPlugInKitProxy *proxy;
@property NSUUID *requestIdentifier;
@property (nonatomic) _Bool canSendDataPayloads;
@property (nonatomic) _Bool shouldBalloonHideAppIcon;
@property (retain, nonatomic, readonly) NSExtension *extension;
@property (retain, nonatomic, readonly) NSNumber *itemID;
@property (retain, nonatomic, readonly) id <PKPlugIn> plugin;
@property (nonatomic, readonly) _Bool isLaunchProhibited;

- (id)version;
- (_Bool)isBetaPlugin;
- (id)initWithPluginBundle:(id)arg1 pluginKitProxy:(id)arg2 extension:(id)arg3;
- (id)_initWithPluginBundle:(id)arg1 extension:(id)arg2 pluginKitProxyClass:(Class)arg3;
- (id)initWithPluginBundle:(id)arg1 extension:(id)arg2;
- (id)initWithPluginBundle:(id)arg1 appBundle:(id)arg2;

@end
