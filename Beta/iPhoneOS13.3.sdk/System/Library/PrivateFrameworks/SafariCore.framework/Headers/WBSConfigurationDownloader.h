/*
 Image: /System/Library/PrivateFrameworks/SafariCore.framework/SafariCore
 */

#import <Foundation/NSObject.h>

@class NSString, NSURL, NSURLSessionDataTask, WBSConfigurationDataTransformer;

@interface WBSConfigurationDownloader : NSObject

{
    WBSConfigurationDataTransformer *_transformer;
    NSURLSessionDataTask *_dataTask;
    NSURL *_baseURL;
    NSString *_fileName;
    _Bool _isCancelled;
}

+ (id)new;

- (id)init;
- (void)cancel;
- (id)initWithFileName:(id)arg1 dataTransformer:(id)arg2;
- (void)downloadConfigurationWithCompletionHandler:(CDUnknownBlockType)arg1;

@end
