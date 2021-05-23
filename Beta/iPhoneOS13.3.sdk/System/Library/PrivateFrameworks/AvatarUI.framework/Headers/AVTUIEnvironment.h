/*
 Image: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
 */

#import <Foundation/NSObject.h>

@class AVTAvatarConfigurationImageRenderer, AVTCoreEnvironment, AVTCoreModel, AVTDeviceResourceManager, NSNotificationCenter, NSURL, NSUserDefaults;

@protocol AVTImageCache, AVTUILogger, AVTUsageTrackingSession, OS_dispatch_queue;

@interface AVTUIEnvironment : NSObject

{
    AVTCoreModel *_editorCoreModel;
    AVTAvatarConfigurationImageRenderer *_renderer;
    id <AVTImageCache> _inMemoryImageCache;
    id <AVTUsageTrackingSession> _usageTrackingSession;
    _Bool _deviceIsSunflower;
    AVTCoreEnvironment *_coreEnvironment;
    double _mainScreenScale;
    long long _userInterfaceLayoutDirection;
    NSObject<OS_dispatch_queue> *_backgroundQueue;
    NSObject<OS_dispatch_queue> *_backgroundRenderingQueue;
    NSObject<OS_dispatch_queue> *_backgroundEncodingQueue;
    AVTDeviceResourceManager *_deviceResourceManager;
    double _actionAnimationsMultiplier;
    struct CGSize _mainScreenSize;
}

@property (nonatomic, readonly) AVTCoreEnvironment *coreEnvironment;
@property (nonatomic, readonly) id <AVTUILogger> logger;
@property (nonatomic, readonly) double mainScreenScale;
@property (nonatomic, readonly) struct CGSize mainScreenSize;
@property (nonatomic, readonly) long long userInterfaceLayoutDirection;
@property (nonatomic, readonly) _Bool deviceIsSunflower;
@property (copy, nonatomic, readonly) CDUnknownBlockType serialQueueProvider;
@property (copy, nonatomic, readonly) CDUnknownBlockType lockProvider;
@property (copy, nonatomic, readonly) NSObject<OS_dispatch_queue> *backgroundQueue;
@property (copy, nonatomic, readonly) NSObject<OS_dispatch_queue> *backgroundRenderingQueue;
@property (copy, nonatomic, readonly) NSObject<OS_dispatch_queue> *backgroundEncodingQueue;
@property (nonatomic, readonly) AVTCoreModel *editorCoreModel;
@property (copy, nonatomic, readonly) NSURL *storeLocation;
@property (copy, nonatomic, readonly) NSURL *imageStoreLocation;
@property (copy, nonatomic, readonly) NSURL *stickerImageStoreLocation;
@property (copy, nonatomic, readonly) NSURL *imageCacheStoreLocation;
@property (nonatomic, readonly) AVTAvatarConfigurationImageRenderer *renderer;
@property (nonatomic, readonly) NSNotificationCenter *notificationCenter;
@property (nonatomic, readonly) AVTDeviceResourceManager *deviceResourceManager;
@property (nonatomic, readonly) id <AVTImageCache> inMemoryImageCache;
@property (nonatomic, readonly) id <AVTUsageTrackingSession> usageTrackingSession;
@property (nonatomic, readonly) NSUserDefaults *userDefaults;
@property (nonatomic) double actionAnimationsMultiplier;

+ (id)defaultEnvironment;
+ (id)createFunCamEnvironment;
+ (id)createQueueWithQoSClass:(unsigned int)arg1 label:(const char *)arg2;
+ (id)createEditorCoreModelWithLogger:(id)arg1;
+ (id)createUsageTrackingSessionWithCoreModel:(id)arg1 serialQueueProvider:(CDUnknownBlockType)arg2 logger:(id)arg3;

- (id)initWithCoreEnvironment:(id)arg1;

@end
