/*
 Image: /System/Library/PrivateFrameworks/AssetCacheServices.framework/AssetCacheServices
 */

#import <AssetCacheServices/ACSURLSessionTask.h>

@interface ACSURLSessionDataTask : ACSURLSessionTask

{
    CDUnknownBlockType __clientDataCompletionHandler;
}

@property (copy) CDUnknownBlockType _clientDataCompletionHandler;

- (_Bool)_isUpload;
- (id)initWithNSURLDataTaskCreator:(CDUnknownBlockType)arg1 initialRequest:(id)arg2 forSession:(id)arg3;

@end
