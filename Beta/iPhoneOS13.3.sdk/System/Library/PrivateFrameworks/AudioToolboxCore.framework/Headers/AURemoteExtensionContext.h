/*
 Image: /System/Library/PrivateFrameworks/AudioToolboxCore.framework/AudioToolboxCore
 */

#import <Foundation/NSExtensionContext.h>

@class AUAudioUnit, AUAudioUnitViewService, AUParameterTree, NSMutableArray, NSObject, NSXPCConnection;

@protocol OS_dispatch_queue, OS_dispatch_source, OS_voucher;

@interface AURemoteExtensionContext : NSExtensionContext

{
    AUAudioUnit *_audioUnit;
    _Bool _isUIExtension;
    struct AudioComponentDescription _componentDescription;
    NSXPCConnection *_remoteHostXPCConnection;
    struct AUExtRenderingServer *_renderServer;
    NSObject<OS_voucher> *_initializationVoucher;
    AUParameterTree *_cachedParameterTree;
    struct reply_watchdog_factory _replyWatchdogFactory;
    NSObject<OS_dispatch_queue> *_presetMonitoringQueue;
    NSObject<OS_dispatch_source> *_presetFolderWatcher;
    _Bool _isRunningInProcess;
    NSMutableArray *_userPresets;
    int _deferPropertyChangeNotifications;
    AUAudioUnitViewService *_viewService;
    NSObject<OS_dispatch_queue> *_propertyObserverQueue;
    NSMutableArray *_pendingChangedProperties;
}

@property (nonatomic) AUAudioUnitViewService *viewService;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *propertyObserverQueue;
@property (nonatomic) int deferPropertyChangeNotifications;
@property (nonatomic, readonly) NSMutableArray *pendingChangedProperties;

+ (id)_extensionAuxiliaryHostProtocol;
+ (id)_extensionAuxiliaryVendorProtocol;

- (void)dealloc;
- (id)initWithInputItems:(id)arg1 listenerEndpoint:(id)arg2 contextUUID:(id)arg3;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (id).cxx_construct;
- (void)reset:(CDUnknownBlockType)arg1;
- (void)open:(CDUnknownBlockType)arg1;
- (void)close:(CDUnknownBlockType)arg1;
- (void)syncParameter:(unsigned long long)arg1 value:(float)arg2 extOriginator:(unsigned long long)arg3 hostTime:(unsigned long long)arg4 eventType:(unsigned int)arg5;
- (void)getBusses:(unsigned int)arg1 reply:(CDUnknownBlockType)arg2;
- (void)initialize:(unsigned long long)arg1 reply:(CDUnknownBlockType)arg2;
- (void)initialize2:(int)arg1 formats:(id)arg2 maxFrames:(unsigned long long)arg3 buffer:(id)arg4 bufferSize:(unsigned int)arg5 beginSem:(id)arg6 endSem:(id)arg7 reply:(CDUnknownBlockType)arg8;
- (void)setWorkIntervalPort:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)uninitialize:(CDUnknownBlockType)arg1;
- (void)setBusFormat:(unsigned int)arg1 scope:(unsigned int)arg2 format:(id)arg3 reply:(CDUnknownBlockType)arg4;
- (void)setBusCount:(unsigned long long)arg1 scope:(unsigned int)arg2 reply:(CDUnknownBlockType)arg3;
- (void)valueForProperty:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)setValue:(id)arg1 forProperty:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)addPropertyObserver:(id)arg1 context:(unsigned long long)arg2 reply:(CDUnknownBlockType)arg3;
- (void)removePropertyObserver:(id)arg1 context:(unsigned long long)arg2 reply:(CDUnknownBlockType)arg3;
- (void)valueForKey:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)setValue:(id)arg1 forKey:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)getParameterTree:(CDUnknownBlockType)arg1;
- (void)getParameter:(unsigned long long)arg1 reply:(CDUnknownBlockType)arg2;
- (void)parameterStringFromValue:(float)arg1 currentValue:(_Bool)arg2 address:(unsigned long long)arg3 reply:(CDUnknownBlockType)arg4;
- (void)parameterValueFromString:(id)arg1 address:(unsigned long long)arg2 reply:(CDUnknownBlockType)arg3;
- (void)parameterNode:(id)arg1 displayNameWithLength:(long long)arg2 reply:(CDUnknownBlockType)arg3;
- (void)parametersForOverviewWithCount:(long long)arg1 reply:(CDUnknownBlockType)arg2;
- (void)supportedViewConfigurations:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)selectViewConfiguration:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)profileStateForCable:(unsigned char)arg1 channel:(unsigned char)arg2 reply:(CDUnknownBlockType)arg3;
- (void)enableProfile:(id)arg1 cable:(unsigned char)arg2 onChannel:(unsigned char)arg3 reply:(CDUnknownBlockType)arg4;
- (void)disableProfile:(id)arg1 cable:(unsigned char)arg2 onChannel:(unsigned char)arg3 reply:(CDUnknownBlockType)arg4;
- (void)loadUserPresets:(CDUnknownBlockType)arg1;
- (void)saveUserPreset:(id)arg1 state:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)deleteUserPreset:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)presetStateFor:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (id)_getBus:(unsigned int)arg1 scope:(unsigned int)arg2 error:(id *)arg3;
- (_Bool)_identifyBus:(id)arg1 scope:(unsigned int *)arg2 element:(unsigned int *)arg3;
- (struct UIViewController *)iOSViewController;
- (void)requestViewControllerWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)setBusName:(unsigned int)arg1 scope:(unsigned int)arg2 name:(id)arg3 reply:(CDUnknownBlockType)arg4;
- (id)currentParameterTree;
- (id)_fetchAndClearPendingChangedProperties;
- (void)startUserPresetFolderMonitoring;

@end
