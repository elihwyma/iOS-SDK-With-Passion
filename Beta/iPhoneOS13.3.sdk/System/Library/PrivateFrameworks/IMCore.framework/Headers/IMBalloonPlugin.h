/*
 Image: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
 */

#import <Foundation/NSObject.h>

@class IMBalloonApp, NSBundle, NSMutableArray, NSMutableDictionary, NSString;

@protocol PKPlugIn;

@interface IMBalloonPlugin : NSObject

{
    _Bool _pluginLoaded;
    NSString *_browserImageName;
    NSString *_browserImagePath;
    long long _browserGroup;
    NSBundle *_bundle;
    id <PKPlugIn> _plugin;
    IMBalloonApp *_app;
    NSMutableDictionary *_messageToDatasourceMap;
    NSMutableDictionary *_messageToBalloonControllerMap;
    Class _bubbleClass;
    Class _browserClass;
    Class _dataSourceClass;
    Class _customTypingIndicatorLayerClass;
    Class _entryClass;
    NSMutableArray *_balloonControllerPool;
}

@property (retain, nonatomic) NSBundle *bundle;
@property (retain, nonatomic) id <PKPlugIn> plugin;
@property (nonatomic) _Bool pluginLoaded;
@property (retain, nonatomic) IMBalloonApp *app;
@property (retain, nonatomic) NSMutableDictionary *messageToDatasourceMap;
@property (retain, nonatomic) NSMutableDictionary *messageToBalloonControllerMap;
@property (retain, nonatomic) Class bubbleClass;
@property (retain, nonatomic) Class browserClass;
@property (retain, nonatomic) Class dataSourceClass;
@property (retain, nonatomic) Class customTypingIndicatorLayerClass;
@property (retain, nonatomic) Class entryClass;
@property (retain, nonatomic) NSString *browserImageName;
@property (retain, nonatomic) NSString *browserImagePath;
@property (nonatomic) long long browserGroup;
@property (retain, nonatomic) NSMutableArray *balloonControllerPool;
@property (retain, nonatomic, readonly) NSString *identifier;
@property (retain, nonatomic, readonly) NSString *browserDisplayName;
@property (retain, nonatomic, readonly) NSBundle *pluginBundle;
@property (retain, nonatomic, readonly) NSBundle *appBundle;
@property (nonatomic, readonly) _Bool showInBrowser;
@property (nonatomic, readonly) _Bool showableInBrowser;
@property (nonatomic, readonly) _Bool isEnabled;
@property (nonatomic, readonly) _Bool shouldHideAppSwitcher;
@property (nonatomic, readonly) unsigned long long presentationContexts;
@property (nonatomic, readonly) NSString *version;
@property (nonatomic, readonly, getter=isBetaPlugin) _Bool betaPlugin;

- (id)init;
- (void)dealloc;
- (void)setIdentifier:(id)arg1;
- (id)initWithBundle:(id)arg1;
- (id)balloonControllerForChatItem:(id)arg1;
- (id)existingBalloonControllerWithMessageGUID:(id)arg1;
- (_Bool)shouldShowForRecipients:(id)arg1;
- (void)insertDataSource:(id)arg1 forGUID:(id)arg2;
- (_Bool)supportsControllerReuse;
- (id)dataSourceForPluginPayload:(id)arg1;
- (id)initWithBundle:(id)arg1 app:(id)arg2;
- (void)unloadBundle;
- (id)_getControllerFromReusePoolForChatItem:(id)arg1;
- (_Bool)isStickerPackOnly;
- (void)moveController:(id)arg1 toReusePoolFromChatItem:(id)arg2;
- (void)removeController:(id)arg1 forChatItem:(id)arg2;
- (id)existingDataSourceForMessageGUID:(id)arg1;

@end
