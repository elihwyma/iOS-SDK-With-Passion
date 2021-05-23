/*
 Image: /System/Library/PrivateFrameworks/MediaServices.framework/MediaServices
 */

#import <Foundation/NSURLSession.h>

@interface NSURLSession (MSVTaskCapturingCompletion)

- (id)msv_dataTaskWithRequest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)msv_uploadTaskWithRequest:(id)arg1 fromData:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)msv_downloadTaskWithRequest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;

@end
