/*
 Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
 */

#import <Foundation/NSData.h>

@interface NSData (GKDigestUtils)

+ (void)_gkLoadRemoteImageDataForURL:(id)arg1 subdirectory:(id)arg2 filename:(id)arg3 queue:(id)arg4 handler:(CDUnknownBlockType)arg5;
+ (void)_gkLoadRemoteImageDataForORBForURL:(id)arg1 queue:(id)arg2 handler:(CDUnknownBlockType)arg3;
+ (void)_gkLoadRemoteImageDataForUrl:(id)arg1 subdirectory:(id)arg2 filename:(id)arg3 queue:(id)arg4 imageQueue:(id)arg5 handler:(CDUnknownBlockType)arg6;
+ (void)_gkRequestClientsRemoteImageDataForURL:(id)arg1 queue:(id)arg2 reply:(CDUnknownBlockType)arg3;

- (id)_gkSHA1HashString;
- (id)_gkMD5HashString;
- (id)_gkSHA1HashData;
- (id)_gkMD5HashData;
- (id)_gkBase64EncodedString;
- (id)initWithBase64EncodedString_gk:(id)arg1;

@end
