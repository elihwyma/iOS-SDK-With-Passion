//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface PLImageLoadingUtilities : NSObject
{
}

+ (NSObject )synchronousImageForAsset:(id)arg1 withFormat:(unsigned short)arg2 allowPlaceholder:(BOOL)arg3 outImageProperties:(const struct __CFDictionary )arg4 outDeliveredPlaceholder:(BOOL )arg5;
+ (NSObject )synchronousImageForAsset:(id)arg1 withFormat:(unsigned short)arg2 allowPlaceholder:(BOOL)arg3 optimalSourcePixelSize:(CGSize)arg4 networkAccessAllowed:(BOOL)arg5 networkAccessForced:(BOOL)arg6 trackCPLDownload:(BOOL)arg7 outImageProperties:(const struct __CFDictionary )arg8 outImageDataInfo:(id )arg9 outCPLDownloadContext:(id )arg10;
+ (void)imageForAsset:(id)arg1 withFormat:(unsigned short)arg2 allowPlaceholder:(BOOL)arg3 optimalSourcePixelSize:(CGSize)arg4 networkAccessAllowed:(BOOL)arg5 networkAccessForced:(BOOL)arg6 trackCPLDownload:(BOOL)arg7 isCanceledHandler:(id /* CDUnknownBlockType */)arg8 completion:(id /* CDUnknownBlockType */)arg9 sync:(BOOL)arg10;
+ (void)_assetsdImageForAsset:(id)arg1 withFormat:(id)arg2 allowPlaceholder:(BOOL)arg3 optimalSourcePixelSize:(CGSize)arg4 networkAccessAllowed:(BOOL)arg5 trackCPLDownload:(BOOL)arg6 sync:(BOOL)arg7 isCanceledHandler:(id /* CDUnknownBlockType */)arg8 completion:(id /* CDUnknownBlockType */)arg9;
+ (id)newImageDataForAsset:(id)arg1 withFormat:(unsigned short)arg2 allowPlaceholder:(BOOL)arg3 wantURLOnly:(BOOL)arg4 networkAccessAllowed:(BOOL)arg5 networkAccessForced:(BOOL)arg6 trackCPLDownload:(BOOL)arg7 outImageDataInfo:(id )arg8 outCPLDownloadContext:(id )arg9;
+ (BOOL)canAccessImageForAsset:(id)arg1;

@end

