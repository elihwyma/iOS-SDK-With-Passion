/*
 Image: /System/Library/Frameworks/Photos.framework/Photos
 */

#import <Photos/Swift-Protocol.h>

@class NSDictionary, NSString, PHAssetResource, PHAssetResourceRequestOptions;

@protocol PHAssetResourceRequestDelegate;

@protocol PHAssetResourceRequest <Swift>

@property (nonatomic, readonly) PHAssetResource *assetResource;
@property (nonatomic, readonly) PHAssetResourceRequestOptions *options;
@property (nonatomic, readonly) int requestID;
@property (nonatomic, readonly) unsigned long long managerID;
@property (weak, nonatomic, readonly) id <PHAssetResourceRequestDelegate> delegate;
@property (nonatomic, readonly) NSDictionary *info;
@property (copy, nonatomic, readonly) CDUnknownBlockType completionHandler;
@property (nonatomic, readonly, getter=isCancelled) _Bool cancelled;
@property (copy, nonatomic) NSString *taskIdentifier;

- (unsigned short)cancel;
- (unsigned short)startRequest;

@end
