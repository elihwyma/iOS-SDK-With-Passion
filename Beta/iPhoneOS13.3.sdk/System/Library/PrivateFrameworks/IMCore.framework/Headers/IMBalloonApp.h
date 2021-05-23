/*
 Image: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
 */

#import <Foundation/NSObject.h>

@class NSBundle, NSNumber, NSString;

@protocol PKPlugIn;

@interface IMBalloonApp : NSObject

{
    _Bool _isBetaPlugin;
    _Bool _isLaunchProhibited;
    _Bool _isStickerPackOnly;
    _Bool _showInBrowser;
    _Bool _shouldBalloonHideAppIcon;
    _Bool _shouldHideAppSwitcher;
    _Bool _canSendDataPayloads;
    _Bool _pluginLoaded;
    Class _browserClass;
    Class _dataSourceClass;
    Class _customTypingIndicatorLayerClass;
    Class _bubbleClass;
    Class _entryClass;
    NSBundle *_appBundle;
    NSBundle *_pluginBundle;
    NSNumber *_itemID;
    NSString *_browserDisplayName;
    NSString *_identifier;
    NSString *_version;
    id <PKPlugIn> _plugin;
    unsigned long long _presentationContexts;
}

@property (nonatomic) _Bool canSendDataPayloads;
@property (nonatomic) _Bool isLaunchProhibited;
@property (nonatomic) _Bool showInBrowser;
@property (nonatomic) _Bool isEnabled;
@property (nonatomic) _Bool shouldBalloonHideAppIcon;
@property (nonatomic) _Bool shouldHideAppSwitcher;
@property (retain, nonatomic) Class browserClass;
@property (retain, nonatomic) Class bubbleClass;
@property (retain, nonatomic) Class customTypingIndicatorLayerClass;
@property (retain, nonatomic) Class dataSourceClass;
@property (retain, nonatomic) Class entryClass;
@property (retain, nonatomic) NSBundle *appBundle;
@property (retain, nonatomic) NSBundle *pluginBundle;
@property (retain, nonatomic) NSNumber *itemID;
@property (retain, nonatomic) NSString *browserDisplayName;
@property (retain, nonatomic) NSString *identifier;
@property (retain, nonatomic) id <PKPlugIn> plugin;
@property (nonatomic) unsigned long long presentationContexts;
@property (nonatomic) _Bool pluginLoaded;
@property (nonatomic) _Bool isEnabledUnremovableApp;
@property (nonatomic, readonly) _Bool isBetaPlugin;
@property (nonatomic, readonly) _Bool isStickerPackOnly;
@property (nonatomic, readonly) _Bool showableInBrowser;
@property (nonatomic, readonly) NSString *version;

+ (id)appWithPluginBundle:(id)arg1;
+ (id)appWithPluginBundle:(id)arg1 pluginKitProxy:(id)arg2 extension:(id)arg3;
+ (id)appWithPluginBundle:(id)arg1 appBundle:(id)arg2;
+ (unsigned long long)presentationContextsForInfoPlistArray:(id)arg1 isStickerPackOnly:(_Bool)arg2;
+ (id)_unremovableDisabledApps;
+ (void)_setUnremovableDisabledApps:(id)arg1;
+ (id)appWithPluginBundle:(id)arg1 extension:(id)arg2;

- (id)initWithPluginBundle:(id)arg1 appBundle:(id)arg2;
- (void)_loadBundle;

@end
