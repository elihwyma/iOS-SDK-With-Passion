/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSURL, NSURLSession, NSURLSessionDataTask;

@interface VUIAppScriptDownloadManager : NSObject

{
    NSURLSession *_session;
    NSMutableDictionary *_completionBlocksDict;
    NSURL *_currentURL;
    NSMutableDictionary *_appScriptDict;
    NSURLSessionDataTask *_task;
}

@property (retain, nonatomic) NSURL *currentURL;
@property (retain, nonatomic) NSMutableDictionary *appScriptDict;
@property (retain, nonatomic) NSURLSessionDataTask *task;

+ (id)sharedInstance;

- (id)_init;
- (void)fetchAppJavascript:(id)arg1 cachePolicy:(unsigned long long)arg2 completionHandler:(CDUnknownBlockType)arg3;

@end
