/*
 Image: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
 */

#import <CloudPhotoLibrary/CPLProxySession.h>

@class NSString;

@interface CPLProxyPushSession : CPLProxySession

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (void)beginSessionForProxy:(id)arg1 knownVersion:(id)arg2 context:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;

- (void)commitChangeBatch:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;

@end
