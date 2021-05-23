/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <FrontBoard/FBSServiceFacility.h>

@class FBServiceClientAuthenticator;

@protocol SBWallpaperServerDelegate;

@interface SBWallpaperServer : FBSServiceFacility

{
    id <SBWallpaperServerDelegate> _delegate;
    FBServiceClientAuthenticator *_accessAuthenticator;
}

@property (weak, nonatomic) id <SBWallpaperServerDelegate> delegate;
@property (retain, nonatomic) FBServiceClientAuthenticator *accessAuthenticator;

+ (id)sharedInstance;

- (id)_init;
- (void)noteDidReceiveMessage:(id)arg1 withType:(long long)arg2 fromClient:(id)arg3;
- (void)_handleFetchThumbnailMessage:(id)arg1 fromClient:(id)arg2;
- (void)_handleSetVideoMessageWithWallpaperMode:(id)arg1 fromClient:(id)arg2;
- (void)_handleSetColorNameMessage:(id)arg1 fromClient:(id)arg2;
- (void)_handleSetGradientMessage:(id)arg1 fromClient:(id)arg2;
- (void)_handleRestoreDefaultWallpaperMessage:(id)arg1 fromClient:(id)arg2;
- (long long)_wallpaperVariantFromXPCDictionary:(id)arg1;
- (long long)_wallpaperModeFromXPCDictionary:(id)arg1;

@end
