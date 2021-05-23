/*
 Image: /System/Library/PrivateFrameworks/AssetsLibraryServices.framework/AssetsLibraryServices
 */

#import <Foundation/NSObject.h>

@class PLAssetsdClient;

@interface PLGatekeeperClient : NSObject

{
    PLAssetsdClient *_assetsdClient;
}

+ (id)sharedInstance;

- (void)getLibrarySizes:(CDUnknownBlockType)arg1;
- (void)getLibrarySizesFromDB:(_Bool)arg1 handler:(CDUnknownBlockType)arg2;
- (void)requestVideoURLForAsset:(id)arg1 format:(int)arg2 intent:(unsigned long long)arg3 networkAccessAllowed:(_Bool)arg4 streamingAllowed:(_Bool)arg5 restrictToPlayable:(_Bool)arg6 trackCPLDownload:(_Bool)arg7 handler:(CDUnknownBlockType)arg8;
- (void)requestVideoURLForAsset:(id)arg1 format:(int)arg2 networkAccessAllowed:(_Bool)arg3 streamingAllowed:(_Bool)arg4 restrictToPlayable:(_Bool)arg5 trackCPLDownload:(_Bool)arg6 handler:(CDUnknownBlockType)arg7;
- (void)rampingRequestForResourceType:(unsigned long long)arg1 numRequested:(unsigned long long)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;

@end
