/*
 Image: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
 */

#import <CloudPhotoLibrary/CPLChangeSession.h>

@class CPLPlatformObject, NSString;

@interface CPLPullChangeSession : CPLChangeSession

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) CPLPlatformObject *platformObject;

+ (id)shortDescription;

- (void)getChangeBatchWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)acknowledgeChangeBatch:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;

@end
