/*
 Image: /System/Library/Frameworks/iAd.framework/iAd
 */

#import <NSObject.h>

@class NSMutableDictionary, NSString;

@protocol OS_dispatch_queue;

@interface ADSoftLinking : NSObject

{
    Class _MPMoviePlayerController;
    Class _MPMoviePlayerViewController;
    Class _MPNetworkPlayabilityMonitor;
    NSString *_MPMoviePlayerWillEnterFullscreenNotification;
    NSString *_MPMoviePlayerDidEnterFullscreenNotification;
    NSString *_MPMoviePlayerWillExitFullscreenNotification;
    NSString *_MPMoviePlayerDidExitFullscreenNotification;
    NSString *_MPMoviePlayerIsAirPlayVideoActiveDidChangeNotification;
    NSMutableDictionary *_loadedFrameworks;
    NSMutableDictionary *_boundSymbols;
    NSObject<OS_dispatch_queue> *_loadQueue;
}

@property (nonatomic, readonly) NSMutableDictionary *loadedFrameworks;
@property (nonatomic, readonly) NSMutableDictionary *boundSymbols;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *loadQueue;
@property (nonatomic, readonly) Class ABNewPersonViewController;
@property (nonatomic, readonly) Class ABPeoplePickerNavigationController;
@property (nonatomic, readonly) CDUnknownFunctionPointerType AudioFileOpenWithCallbacks;
@property (nonatomic, readonly) CDUnknownFunctionPointerType AudioFileGetProperty;
@property (nonatomic, readonly) Class AVPlayer;
@property (nonatomic, readonly) Class AVPlayerItem;
@property (nonatomic, readonly) Class AVPlayerLayer;
@property (nonatomic, readonly) Class AVURLAsset;
@property (nonatomic, readonly) NSString *AVPlayerItemDidPlayToEndTimeNotification;
@property (nonatomic, readonly) NSString *AVPlayerItemFailedToPlayToEndTimeNotification;
@property (nonatomic, readonly) NSString *AVPlayerItemFailedToPlayToEndTimeErrorKey;
@property (nonatomic, readonly) NSString *AVPlayerItemPlaybackStalledNotification;
@property (nonatomic, readonly) NSString *AVLayerVideoGravityResizeAspectFill;
@property (nonatomic, readonly) NSString *AVLayerVideoGravityResizeAspect;
@property (nonatomic, readonly) Class EKReminderViewController;
@property (nonatomic, readonly) Class EKEventEditViewController;
@property (nonatomic, readonly) Class MPMoviePlayerController;
@property (nonatomic, readonly) Class MPMoviePlayerViewController;
@property (nonatomic, readonly) Class MPNetworkPlayabilityMonitor;
@property (nonatomic, readonly) NSString *MPMoviePlayerWillEnterFullscreenNotification;
@property (nonatomic, readonly) NSString *MPMoviePlayerDidEnterFullscreenNotification;
@property (nonatomic, readonly) NSString *MPMoviePlayerWillExitFullscreenNotification;
@property (nonatomic, readonly) NSString *MPMoviePlayerDidExitFullscreenNotification;
@property (nonatomic, readonly) NSString *MPMoviePlayerIsAirPlayVideoActiveDidChangeNotification;
@property (nonatomic, readonly) Class MFMailComposeViewController;
@property (nonatomic, readonly) Class MFMessageComposeViewController;
@property (nonatomic, readonly) Class PKPass;
@property (nonatomic, readonly) Class PKPassLibrary;
@property (nonatomic, readonly) Class PKAddPassesViewController;
@property (nonatomic, readonly) Class PLStaticWallpaperImageViewController;
@property (nonatomic, readonly) Class SKStoreProductViewController;
@property (nonatomic, readonly) NSString *SKStoreProductParameterITunesItemIdentifier;
@property (nonatomic, readonly) Class TLToneManager;
@property (nonatomic, readonly) NSString *kToneTitleKey;
@property (nonatomic, readonly) NSString *kToneGenreKey;
@property (nonatomic, readonly) NSString *kToneDurationKey;
@property (nonatomic, readonly) NSString *kToneArtistKey;
@property (nonatomic, readonly) CDUnknownFunctionPointerType CVPixelBufferCreateWithIOSurface;
@property (nonatomic, readonly) CDUnknownFunctionPointerType CVPixelBufferRelease;
@property (nonatomic, readonly) CDUnknownFunctionPointerType VTImageRotationSessionCreate;
@property (nonatomic, readonly) CDUnknownFunctionPointerType VTImageRotationSessionInvalidate;
@property (nonatomic, readonly) CDUnknownFunctionPointerType VTImageRotationSessionRelease;
@property (nonatomic, readonly) CDUnknownFunctionPointerType VTImageRotationSessionTransferImage;
@property (nonatomic, readonly) struct __CFString *kIOSurfaceWidth;
@property (nonatomic, readonly) struct __CFString *kIOSurfacePixelFormat;
@property (nonatomic, readonly) struct __CFString *kIOSurfaceIsGlobal;
@property (nonatomic, readonly) struct __CFString *kIOSurfaceBytesPerRow;
@property (nonatomic, readonly) struct __CFString *kIOSurfaceHeight;
@property (nonatomic, readonly) struct __CFString *kIOSurfaceAllocSize;
@property (nonatomic, readonly) struct __CFString *kIOSurfaceBytesPerElement;
@property (nonatomic, readonly) CDUnknownFunctionPointerType IOSurfaceGetWidth;
@property (nonatomic, readonly) CDUnknownFunctionPointerType IOSurfaceGetHeight;
@property (nonatomic, readonly) CDUnknownFunctionPointerType IOSurfaceGetBytesPerRow;
@property (nonatomic, readonly) CDUnknownFunctionPointerType IOSurfaceGetBaseAddress;
@property (nonatomic, readonly) CDUnknownFunctionPointerType IOSurfaceGetAllocSize;
@property (nonatomic, readonly) CDUnknownFunctionPointerType IOSurfaceCreate;
@property (nonatomic, readonly) CDUnknownFunctionPointerType IOSurfaceLock;
@property (nonatomic, readonly) CDUnknownFunctionPointerType IOSurfaceUnlock;
@property (nonatomic, readonly) CDUnknownFunctionPointerType IOSurfaceCreateXPCObject;
@property (nonatomic, readonly) CDUnknownFunctionPointerType IOSurfaceLookupFromXPCObject;
@property (nonatomic, readonly) CDUnknownFunctionPointerType IOSurfaceIncrementUseCount;
@property (nonatomic, readonly) CDUnknownFunctionPointerType IOSurfaceDecrementUseCount;

+ (id)sharedManager;

- (id)init;
- (void)_loadFrameworkIfNeeded:(id)arg1;
- (void *)_pointerToSymbolWithName:(id)arg1 inFrameworkAtPath:(id)arg2;
- (Class)_classWithName:(id)arg1 inFrameworkAtPath:(id)arg2;
- (id)_stringWithName:(id)arg1 inFrameworkAtPath:(id)arg2;

@end
